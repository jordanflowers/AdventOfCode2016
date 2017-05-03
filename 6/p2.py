from collections import Counter

with open('input.txt') as f:
	final = 0
	sum = 0
	myLines = []
	myStrings = ["","","","","","","",""]
	for line in f:
		myLines.append(line)
		#data = Counter(prechars)
		#coolList = data.most_common()
	i = 0
	while i < 8:
		for item in myLines:
			myStrings[i] = myStrings[i] + item[i]
		i += 1
	i = 0
	coollists = []
	for item in myStrings:
		data = Counter(item)
		coollists.append(data.most_common())
		i += 1
	for item in coollists:
		print(item[-1][0], end='')
	print()