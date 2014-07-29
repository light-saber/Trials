#!/bin/bash
import math

#Finds the prime numbers between the two given numbers
#SPOJ - PRIME1

start = []
end = []
k = int(input(""))
for x in range(0,k):
	s = raw_input("")
	a,b = [int(i) for i in s.split(' ')]
	start.append(a)
	end.append(b)

for j in range(0,k):
	lower = int(start[j])
	upper = int(end[j])
	u = int(math.sqrt(upper))
	for num in range(lower, u):
		if num>1:
			for z in range(2,num):
				if (num % z) == 0:
					break
			else:
				print(num)
