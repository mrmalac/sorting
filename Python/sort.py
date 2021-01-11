def bubble_sort(arr):
	if len(arr) == 1:
		print("I can't sort this")
		raise ValueError("Cannot sort an array with only one number")
	if not isinstance(arr[0], int):
		for i in range(len(arr)):
			arr[i] = int(arr[i])
	isSorted = False
	while isSorted == False:
		hadToFlip = False
		for i in range(len(arr)):
			if i == len(arr)-1:
				break
			if arr[i] > arr[i+1]:
				a = arr[i]
				b = arr[i+1]
				arr[i+1] = a
				arr[i] = b
				print("flipped", arr[i], "with", arr[i+1])
				hadToFlip = True
			elif arr[i] < arr[i+1]:
				print("didn't flip", arr[i], "with", arr[i+1])
			elif arr[i] == arr[i+1]:
				print(i, "and", i+1, "is equal")
		if hadToFlip == True:
			print("had to flip is true")
		if hadToFlip == False:
			print(arr)
			isSorted = True
