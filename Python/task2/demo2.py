from ctypes import *
import sys
fp1=open("input.txt",'r')
fp2=open("output.txt",'a')
for line in fp1:
    print(line)
    list1=line.split()
    print(list1)


