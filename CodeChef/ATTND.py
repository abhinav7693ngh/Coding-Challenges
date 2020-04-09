# cook your dish here
ncase = int(input())
for i in range(0,ncase):
    n = int(input())
    firstname = []
    lastname = []
    for j in range(0,n):
        inp = str(input())
        me = inp.split(" ")
        firstname.append(me[0])
        lastname.append(me[1])
    for z in range(0,len(firstname)):
        if firstname.count(firstname[z])==1:
            lastname[z]=''
    for y in range(0,len(firstname)):
        print(firstname[y],lastname[y],sep=' ',end='')
        print()