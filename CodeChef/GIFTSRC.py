ncase = int(input())
for i in range(0,ncase):
    arrlen = int(input())
    x=0
    y=0
    xaxis = True
    yaxis = True
    mystr = str(input())
    for j in range(0,len(mystr)):
        if ((mystr[j]=='L' or mystr[j]=='R') and xaxis):
            if(mystr[j]=='L'):
                x=x-1
            else:
                x=x+1
            xaxis = False
            yaxis = True
        if ((mystr[j]=='U' or mystr[j]=='D') and yaxis):
            if(mystr[j]=='U'):
                y=y+1
            else:
                y=y-1
            xaxis = True
            yaxis = False
    print(x,y)