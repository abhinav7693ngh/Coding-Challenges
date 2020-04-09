# cook your dish here
ncase = int(input())
for i in range(0,ncase):
    days,diet = map(int,input().split())
    perday = []
    day = list(map(int,input().split()))
    for z in range(0,days):
        perday.append(day[z])
    rem = 0
    notsat = 0
    sat = 0
    for z in range(0,days):
        finperday = rem + perday[z]
        if(finperday<diet):
            notsat += 1
            rem = diet - perday[z]
            break
        elif(finperday>=diet):
            rem = finperday - diet
            sat += 1
    if(notsat==1):
        print("NO",z+1,sep=' ')
    elif(sat==days):
        print("YES")