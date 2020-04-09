# cook your dish here
ncase = int(input())
for i in range(0,ncase):
    limak,bob = map(int,input().split())
    for j in range(1,limak+bob+1):
        if j%2!=0:
            limak -= j
            if limak<0: 
                print("Bob")
                break
        elif j%2==0:
            bob -= j
            if bob<0:
                print("Limak")
                break