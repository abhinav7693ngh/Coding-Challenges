# cook your dish here
ncase=int(input())
vowel=['a','e','i','o','u']
for i in range(0,ncase):
    count=0
    j=0
    n=int(input())
    str1=input()
    while(j<n-1):
        if(str1[j] not in vowel):
            if(str1[j+1] in vowel):
                count=count+1
                j=j+2
                continue
        j=j+1
    print(count)