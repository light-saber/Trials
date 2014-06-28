#Small Factorial - spoj.pl
#Solution in Python

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
	print factorial
