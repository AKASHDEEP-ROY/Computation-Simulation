#Akashdeep Roy
#DAA
#factorial in python

import timeit as t
def factorial(n):
    if (n==0|n==1):
        return 1
    else:
        return n*factorial(n-1)
n=int(input("The number whose factorial is to be determined  "))
print("The factorial of",n,"is:", factorial(n))
print("The time taken by the program",t.timeit())
