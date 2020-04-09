# cook your dish here
from fractions import gcd
from functools import reduce
def hcf(newarr):
    x = reduce(gcd, newarr)
    return x 
    
def lcm(num1, num2): 
    if(num1>num2):
        num = num1 
        den = num2 
    else: 
        num = num2 
        den = num1 
    rem = num % den 
    while(rem != 0): 
        num = den 
        den = rem 
        rem = num % den 
    gcd = den 
    lcm = int(int(num1 * num2)/int(gcd)) 
    return lcm  
    
    
n = int(input())
for i in range(0,n):
    arr=[]
    arr = input()
    newarr = arr.split(" ")
    newarr=[int(z) for z in newarr]
    hcfans = hcf(newarr)
    lcmans = lcm(newarr[0],newarr[1])
    print(hcfans,lcmans)