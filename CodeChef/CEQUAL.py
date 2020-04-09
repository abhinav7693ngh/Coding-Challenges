# cook your dish here
ncase=int(input())
for i in range(0,ncase):
    count=0
    n=input()
    my=input()
    arr=my.split(" ")
    len1=len(arr)
    for i in range(0,len1):
        c=arr.count(arr[i])
        if(c>1):
            print("Yes")
            count=count+1
            break
    if(count==0):
        print("No")