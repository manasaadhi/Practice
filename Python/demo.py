#import a
from ctypes import *
fun = CDLL('./libfun.so')
#fun.add.argtypes(ctypes.c_int,ctypes.c_int)
x=5.6
y=6.5
c_x=c_float(x)
c_y=c_float(y)
res = fun.add(c_x,c_y)
print(res)
