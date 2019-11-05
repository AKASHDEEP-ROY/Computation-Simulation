'''
Date : 5/11/2019
Creator : AKASHDEEP ROY
About : Loop for unicode of mumbai
'''

s='mumbai'
for i in s:
    c=ord(i)
    print(i,c)

#loop changed to sum the unicodes
c=0
for i in s:
    p=ord(i)
    c=c+p
print("sum of the unicodes =",c)

#List up the unicodes by list method
k=[]
for i in s:
    c= ord(i)
    k.append(c)
print("List of the unicodes by list method =",k)

#List up the unicodes by list comprehension
m=[ord(i) for i in s]
print("List of the unicodes by list comprehension =",m)

#List up the unicodes using map class
def unicode(c):
    return(ord(c))
b=map(unicode,s)
print("List of  the unicodes by map class =",list(b))