'''
Date: 06.11.2019
name: Akashdeep Roy
About: Theoretical vs experimental CMB data
'''
from matplotlib.pyplot import *
from numpy import *
#universal constants
h =  6.626*10**(-34) #Planck's Constant in SI
c = 3*(10**8) #Speed of Light in SI
boltz = 1.38*(10**(-23)) #Boltzmann Constant in SI
#theoretical prediction
f = arange(200,2500,0.01)
u = ((2*h*c*f**3) * 1/(exp(h*c*f/(boltz*2.725))-1))
plot(f,u,'b-',label = "from theory")
#Plotting COBE  data
fileopen = open("F:\python\cobedata.txt","r")
freq = loadtxt("F:\python\cobedata.txt")
frequency = 100*freq[:,0]   #Converting cm^(-1) to m^(-1)
fJn = loadtxt("F:\python\cobedata.txt")
flux = 10**-20*fJn[:,1]  #Converting MJy/sr to SI
fileopen.close()
plot(frequency,flux,'ro',markersize=5,label="from cobe observation")
print()
pyplot.xlabel("wave number(m^(-1))")
pyplot.ylabel("flux(kg.m^(-2))")
legend(framealpha=1.0,shadow=True)
show()

#finding wave no for which flux is maximum
out_arr = amax(u)
n=int((2500-200)/0.01)
for i in range(200,n):
    if u[i]==out_arr:
        print("wave no for which flux is maximum:  ", f[i],"/m")
