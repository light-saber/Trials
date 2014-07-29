#!/bin/bash

#FCTRL

x = int(input (""))
numbers = []

for i in range(0,x):
	s = int(input(""))
	numbers.append(s)

for n in numbers:
	trailing = 1
	if (n == 0) or (n == 1):
		print 0
	else:
		check = n
		while check % 5 != 0:
			check = check - 1
		trailing = int(check / 5)
		k = 25
		while check > k:
#			print trailing
#			print (check/k)
#			print k
			trailing = trailing + int(check / k)
			k = k * 5
		print trailing
