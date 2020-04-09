ncase = int(input())
 
for i in range(0,ncase):
    arrsize = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    arr.append(-1)
    answer = 0
    for z in range(0,len(arr)-1):
        if(arr[z]!=arr[z+1]):
            answer=answer+1
    print(answer)