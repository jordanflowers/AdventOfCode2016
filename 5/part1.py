import hashlib

target = '00000'
candidate = 0
ID = input('Enter the Door ID: ')
indexList = []
i = 0
while True:
	plaintext = ID + str(candidate)
	hash = hashlib.md5(plaintext.encode('ascii')).hexdigest()
	if hash[:5] == target:
		indexList.append(hash)
		print('index:"' + plaintext + '", md5: ' + hash)
		i += 1
	candidate = candidate + 1
print("password is: ")
for item in indexList:
	print(item[5], end='')
print()