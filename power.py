'''
Date: 06/11/2009
Creator: AKASHDEEP ROY
About : finding value of a parameter that maps or do not map to a list
'''

L=[1,2,4,8,16,32,64]
X=5

#for loop & list append method
List=[]
b=int(input("the max power of 2 in the list ="))
for q in range(0,b+1):
    List.append(2**q)
print("List of the power-of-2 list =",List)


