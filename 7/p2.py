from collections import Counter

with open('input.txt') as f:
	howMany = 0
	doneWithTester = 0
	hitpoint = 0	#to tell if we have hit a square bracket yet
	temp = ''
	tester = ''
	i = 0
	j = 0
	for line in f:
		hitpoint = 0
		i = 0
		listOfValids = []
		for letter in line:
			if hitpoint == 0: #testing for what is in the square brackets
				if letter == '[':
					hitpoint = 1
				elif i < len(line)-2:
					#We can store this if it is valid
					if letter == line[i + 2]:
						temp = letter + line[i + 1] + line[i + 2]
						listOfValids.append(temp)
						temp = ''
				else:
					print("eht of renge")
			else:
				if letter == ']':
					doneWithTester = 1
					hitpoint = 0
				else:
					tester = tester + letter
			if doneWithTester:
				for item in listOfValids:
					if item in tester:
						howMany += 1
		tester = ''
		temp = ''
	print()
	print (howMany)
	