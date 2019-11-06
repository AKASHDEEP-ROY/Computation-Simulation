'''
Date: 06/11/2009
Creator: AKASHDEEP ROY
About : finding value of a parameter that maps or do not map to a list
'''

L=[1,2,4,8,16,32,64]
X=5

# for-else construction & list index method

for n in L :
    if 2**X==n:
        print('element required is at index =',L.index(n))
        break
else:
    print(X,'not found')

