# cook your dish here
min=0
max=0
n=int(input())
for i in range(0,n):
    firstr=input()
    secstr=input()
    len1=len(firstr)
    for j in range(0,len1):
        if(firstr[j]!='?' and secstr[j]!='?' and firstr[j]!=secstr[j]):
            min=min+1
        if((firstr[j]=='?' and secstr[j]=='?') or firstr[j]!=secstr[j]):
            max=max+1
    print(min,max)
    min=0
    max=0