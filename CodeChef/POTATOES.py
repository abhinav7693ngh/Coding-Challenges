# cook your dish here
def isprime(n):
    if n<=1:
        return False
    for i in range(2,n):
        if n%i==0:
            return False
    return True
    

n = int(input())


for j in range(0,n):
    a,b = map(int,input().split())
    sum = a+b
    for i in range(1,100):
        mynum = sum + i
        if (isprime(mynum)):
            print(i)
            break
        else:
            continue