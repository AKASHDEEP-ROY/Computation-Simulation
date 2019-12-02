from ctypes import *
fact=CDLL("./fct.so")

facto=fact.factorial(5)
print("factorial is :",facto)