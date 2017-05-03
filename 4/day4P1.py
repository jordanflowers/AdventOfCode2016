from collections import Counter

with open('input.txt') as f:
	#i = 0
	final = 0
	sum = 0
	for line in f:
		# Process the strings
		prechars = ""	# String contains the characters that we need to calculate top 5
		codon = ""		# String contains the top 5...hopefully
		sector = ""
		sectorNum = 0
		hitsignal = 0	# Integer represents if we have hit the bracket yet

		# Loop for processing prechars and codons
		for j in line:	
			if j == '[':
				hitsignal = 1
			if j.isdigit():
				sector += j
			if j.islower():
				if hitsignal == 0:
					prechars = prechars + j
				else:
					codon = codon + j
		hitsignal = 0

		sectorNum = int(sector)


		data = Counter(prechars)
		coolList = data.most_common()
		coolList = sorted(coolList, key=lambda element: (-element[1],element[0]))
		temp = ""
		count = 0
		for item in coolList:
			count += 1
			if count < 6:
				temp = temp + item[0]

		if temp == codon:
			final += 1
			sum = sum + sectorNum
	print ("Total correct doors: ", final)
	print ("Sector sum: ", sum)
