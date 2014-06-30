#Factorial - spoj.pl
#Python - Exceeds Time Limit

#!/bin/bash

y = input("")
data = []
factorial = 1
for n in range(0, y):
	x = input("")
	data.append(x)

for m in range(0, y):
	number = data[m]
	factorial = 1
	for k in range(1, number+1):
		factorial = factorial * k
	zero = len(str(factorial)) - len(str(factorial).rstrip('0'))
	print zero
