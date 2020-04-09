# cook your dish here
my = dict([(0,6),(1,2),(2,5),(3,5),(4,4),(5,5),(6,6),(7,3),(8,7),(9,6)])
ncase = int(input())
for i in range(0,ncase):
    res = 0
    fir,sec = map(int,input().split())
    check = int(fir)+int(sec)
    c = list(map(int, str(check)))
    for j in range(0,len(c)):
        res += my[c[j]]
    print(res)