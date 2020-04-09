# cook your dish here
score=0
ncase=int(input())
for i in range(0,ncase):
    j=0
    m=int(input())
    str1=input()
    str2=input()
    while(j<m):
        if(str1[j]==str2[j]):
            score=score+1
        elif(str1[j]!=str2[j] and str2[j]!='N'):
            j=j+2
            continue
        j=j+1
    print(score)
    score=0