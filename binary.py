#!/bin/bash

#This converts 1 to n to Binary, where n is provided by the user.

#Created by: light-saber
#2014.07.29

x = int(input())

for i in range(1,x+1):
	print i,bin(i)[2:]
