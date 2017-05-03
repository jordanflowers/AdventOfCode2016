import hashlib

password = [" ", " ", " ", " ", " ", " ", " ", " "]
target = '00000'
candidate = 0
ID = input('Enter the Door ID: ')
indexList = []
i = 0
while i < 8:
	plaintext = ID + str(candidate)
	hash = hashlib.md5(plaintext.encode('ascii')).hexdigest()
	if hash[:5] == target:
		indexList.append(hash)
		print('index:"' + plaintext + '", md5: ' + hash)
		if hash[5].isdigit():
			if int(hash[5]) < 8:
				#valid
				if password[int(hash[5])] == " ":
					i += 1
					password[int(hash[5])] = hash[6]
					for item in password:
						print(item, end ='')
					print()
				else:
					print("invalid")
			else:
				print("invalid")
		else:
			print("invalid")
	candidate = candidate + 1
print("password is: ")
for item in password:
	print(item, end ='')
print()
