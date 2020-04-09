# cook your dish here
ncase = int(input())
for i in range(0,ncase):
    x,y,z = map(float,input().split())
    hardness = int(x)
    carbon = y
    tensile = int(z)
    if(x>50 and carbon<0.7 and tensile>5600):
        print("10")
        continue
    elif(hardness>50 and carbon<0.7 and tensile<=5600):
        print("9")
        continue
    elif(hardness<=50 and carbon<0.7 and tensile>5600):
        print("8")
        continue
    elif(hardness>50 and carbon>=0.7 and tensile>5600):
        print("7")
        continue
    elif(hardness>50 or carbon<0.7 or tensile>5600):
        print("6")
        continue
    else:
        print("5")
        continue