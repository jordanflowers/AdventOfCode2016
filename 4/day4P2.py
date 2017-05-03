#day4 part 2
import string

with open('input.txt') as f:
	for line in f:
		prechars = ""
		sector = ""
		codon = ""
		sectorNum = 0
		hitsignal = 0
		# Loop for processing prechars and codons
		for j in line:	
			if j == '[':
				hitsignal = 1
			if j.isdigit():
				sector += j
			if j == '-':
				prechars = prechars + " "
			if j.islower():
				if hitsignal == 0:
					prechars = prechars + j
				else:
					codon = codon + j
		hitsignal = 0

		sectorNum = int(sector)
		temp = 0
		result = ""
		for letter in prechars:
			#increment the letter sectorNum times
			if letter.islower():
				temp = string.ascii_lowercase.index(letter) + sectorNum
				temp = temp % 26
				result = result + string.ascii_lowercase[temp]
			else: #its a space
				result = result + " "
		print(result, " ", sectorNum)