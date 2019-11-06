'''
Date: 06/11/2009
Creator: AKASHDEEP ROY
About : finding value of a parameter that maps or do not map to a list
'''

L=[1,2,4,8,16,32,64]
X=5

# in operator memebership expression
if(2**X in L):
    print('element required is at index=',L.index(2**X))
else:
    print(X,'not found')

