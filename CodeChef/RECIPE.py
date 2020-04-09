# cook your dish here
from fractions import gcd
from functools import reduce
def find_gcd(newarr):
    x = reduce(gcd, newarr)
    return x

n=int(input())
for i in range(n):
    count=0
    arr = []
    arr = input()
    newarr = arr.split(" ")
    newarr=[int(z) for z in newarr]
    ans = []
    newarr.pop(0)
    lenm=len(newarr)
    minele = find_gcd(newarr)
    for j in range(lenm):
        if(newarr[j]%minele == 0):
            quo=int(newarr[j]/minele)
            ans.append(quo)
        else:
            count=1
            break
    if(count==1):
        count=0
        print(*newarr)
    elif(count==0):
        print(*ans)