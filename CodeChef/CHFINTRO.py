# cook your dish here
n,r = map(int,input().split())
for i in range(0,n):
    check = int(input())
    if check<r:
        print('Bad boi')
    else:
        print('Good boi')