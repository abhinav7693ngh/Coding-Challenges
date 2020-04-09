# cook your dish here
import math
ncase = int(input())
for i in range(0,ncase):
    length = int(input())
    inp = list(map(int,input().split()))
    temp = []
    for z in range(0,len(inp)):
        temp.append(inp[z])
    new = []
    temp.sort()
    while(len(temp)>2):
        if len(temp)%2!=0:
            rem = int(math.floor(len(temp)/2))
            new.append(temp[rem])
            temp.remove(temp[rem])
        elif len(temp)%2==0:
            rem = int(len(temp)/2)
            new.append(temp[rem])
            temp.remove(temp[rem])
    for j in range(0,len(new)):
        inp.remove(new[j])
    print(" ".join(str(v) for v in inp))