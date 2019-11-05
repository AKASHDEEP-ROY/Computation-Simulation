'''
Date : 4/11/2019
Creator : AKASHDEEP ROY
About : Fibonacci Series
'''

n=int(input("no of elements in Fibonacci Series:   "))
x1=int(input("first element in Fibonacci Series    "))
x2=int(input("second input in fibonacci Series     "))
i=1
print(x1)
print(x2)
while (i <= n-2):
    x1=x1+x2
    print(x1)
    i=i+1
    x2=x1+x2
    i=i+1
    print(x2)

