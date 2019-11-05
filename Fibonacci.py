'''
Date : 4/11/2019
Creator : AKASHDEEP ROY
About : Fibonacci Series
'''

def f(n):
    if(n==0):
        return(0)
    elif(n==1):
        return(1)
    else:
        return f(n-1)+f(n-2)
