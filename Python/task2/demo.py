from ctypes import *
import sys
import optparse
parse=optparse.OptionParser()
parse.add_option('--libadd')
parse.add_option('--libsub')
parse.add_option('--libmul')
parse.add_option('--libdiv')

opts,args=parse.parse_args()
print("opts:",opts)
#x=int(input("enter a number"))
#y=int(input("enter a number"))
for i,j in opts:
	print(i,j)
if(sys.argv[1]=='libadd'):
    fun  = CDLL('./libadd.so')
    res=fun.add(x,y)
    print("add_res:",res)
elif(sys.argv[1]=='libsub'):
    fun  = CDLL('./libsub.so')
    res=fun.sub(x,y)
    print("sub_res:",res)
elif(sys.argv[1]=='libmul'):
    fun  = CDLL('./libmul.so')
    res=fun.mul(x,y)
    print("mul_res:",res)
elif(sys.argv[1]=='libdiv'):
    fun  = CDLL('./libdiv.so')
    res=fun.div(x,y)
    print("div_res:",res)
else:
    print("atleast give one among add,sub,mul,div")

    
