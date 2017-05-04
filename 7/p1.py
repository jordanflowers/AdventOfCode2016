from collections import Counter

with open('input.txt') as f:
	howMany = 0
	goodLine = 0
	hitpoint = 0	#to tell if we have hit a square bracket yet
	temp = ''
	i = 0
	j = 0
	for line in f:
		goodLine = 0
		hitpoint = 0
		i = 0
		for letter in line:
			if goodLine == 2:
				print("invalid")
			elif hitpoint == 0:		#We are detecting to see if there is a valid sequence
				if letter == '[':	#Test to see if we need to switch the hitpoint
					hitpoint = 1
				else:				#this means that we need to check the previous character with the current
					#print ("cur = ", letter, " prev = ", temp)
					if letter == temp and i < len(line):	#This means that we have found two characters side-by-side equaling each other
						if letter == line[i+1]:
							print("invalid")
						elif line[i-2] == line[i+1]:
							goodLine = 1
			else:					#We are detecting to see if there is an invalid sequence
				if letter == ']':	#Test to see if we need to switch the hitpoint
					hitpoint = 0
				else:				#this means that we need to check the previous character with the current
					if letter == temp and i < len(line):	#This means that we have found two characters side-by-side equaling each other
						if line[i-2] == line[i+1]:
							goodLine = 2
			temp = letter
			i += 1
		temp = ''
		if goodLine == 1:
			howMany += 1
	print()
	print (howMany)
	