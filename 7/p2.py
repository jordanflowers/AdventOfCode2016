from collections import Counter

with open('input.txt') as f:
	howMany = 0
	doneWithTester = 0
	hitpoint = 0	#to tell if we have hit a square bracket yet
	tester = ''
	testee = ''
	i = 0
	j = 0
	for line in f:
		tester = ''
		testee = ''
		temp = ''
		hitpoint = 0
		i = 0
		listOfTestStrings = []
		for letter in line:
			if hitpoint == 0:
				if letter == '[':
					hitpoint = 1
				else:
					tester = tester + letter
			else:
				if letter == ']':
					hitpoint = 0
				else:
					testee = testee + letter
		for letter in tester:
			if i < len(tester)-2:
				if letter == tester[i + 2] and letter != tester[i + 1]:
					temp = tester[i + 1] + letter + tester[i + 1]
					listOfTestStrings.append(temp)
					print (temp, "added")
					temp = ''
			i += 1
		for item in listOfTestStrings:
			if item in testee:
				print("we got a live one")
				howMany += 1
				break
		print("testee: ", testee, " tester: ", tester)
	print()
	print (howMany)
	