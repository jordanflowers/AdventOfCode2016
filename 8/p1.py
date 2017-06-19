import re
world = [['.' for i in range(50)] for j in range(6)]
with open('input.txt') as f:
	hitX = 0 #0 means first number; 1 means second number
	dim1 = ""
	dim2 = ""
	for line in f:	
		print(world)
		wordList = re.sub("[^\w]", " ",  line).split()
		if wordList[0] == "rect":
				for char in wordList[1]:
					if char == "x":
						hitX = 1
					if char.isdigit():
						if hitX == 0:
							dim1 += char
						else:
							dim2 += char
				hitX = 0
				#Create Rectangles Here:
				w = int(dim1)
				h = int(dim2)
				i = 0
				j = 0
				while j < h:
					while i < w:
						world[j][i] = "#"
						i += 1
					i = 0	
					j += 1
				dim1 = ""
				dim2 = ""
		elif wordList[1] == "column":
			whichCol = ""
			for char in wordList[3]:
				if char.isdigit():
					whichCol += char
			#Move row x down by howMany here:
			x = int(whichCol)
			howMany = wordList[5]
			tempList = []
			j = 0
			while j < 6:
				if world[j][x] == '#':
					tempList.append((j+int(howMany))%6)
				j += 1
			j = 0
			while j < 6:
				if j in tempList:
					world[j][x] = '#'
				else:
					world[j][x] = '.'
				j += 1
		else:
			whichRow = ""
			for char in wordList[3]:
				if char.isdigit():
					whichRow += char
			#Move row x down by howMany here:
			y = int(whichRow)
			howMany = wordList[5]
			tempList = []
			i = 0
			while i < 50:
				if world[y][i] == '#':
					tempList.append((i+int(howMany))%50)
				i += 1
			i = 0
			while i < 50:
				if i in tempList:
					world[y][i] = '#'
				else:
					world[y][i] = '.'
				i += 1
sum = 0
for list in world:
	for item in list:
		if item == '#':
			sum += 1
print (sum)
