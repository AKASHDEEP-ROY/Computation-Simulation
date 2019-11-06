'''
Date: 06/11/2009
Creator: AKASHDEEP ROY
About : finding value of a parameter that maps or do not map to a list
'''

L=[1,2,4,8,16,32,64]
X=5

# by while else construction :
k=0
while k<len(L):
   if (2**X==L[k]):
       print("element required is at index =",k)
       break
   else:
       k=k+1
else:
    print(X,"not found")
