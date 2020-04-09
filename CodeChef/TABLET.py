# cook your dish here
ncase = int(input())
for i in range(0,ncase):
    arr = list(map(int,input().split()))
    screen= []
    for j in range(0,arr[0]):
        arr1 = list(map(int, input().split()))
        if (arr1[2]<=arr[1]):
            size = arr1[0] * arr1[1]
            screen.append(size)
    if len(screen)>0:
        print(max(screen))
    elif (len(screen)==0):
        print("no tablet")
    else:
        print("no tablet")