# cook your dish here
import math
ncase = int(input())
for i in range(0,ncase):
    count=0
    arr1 = list(map(int,input().split()))
    arr2 = list(map(int,input().split()))
    start = 0
    incre = arr1[0]
    temp1= start
    crr = math.ceil(arr1[1]/arr1[0])
    for j in range(0,crr):
        flag = 0
        temparr = []
        if(crr==1):
            temp1 = arr1[1]
        elif (j==0):
            temp1 = start + incre
        elif (j==crr-1):
            start = start + incre
            temp1 = arr1[1]
        elif (j>0 and j<crr-1):
            start = start + incre
            temp1 = temp1 + incre
        for z in range(start,temp1):
            temparr.append(arr2[z])
        for i in range(len(temparr)): 
            for i1 in range(len(temparr)): 
                if i != i1: 
                    if temparr[i] == temparr[i1]:
                        flag = 1
        if(not flag):
            continue
        else:
            count +=1
    if(count>0):
        print("NO")
    else:
        print("YES")