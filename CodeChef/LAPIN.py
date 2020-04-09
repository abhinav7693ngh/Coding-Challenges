# cook your dish here
ncase =  int(input())
for i in range(0,ncase):
    my = input()
    if len(my)%2==0:
        last = int(len(my)/2)
        list1 = list(my[0:last])
        list1.sort()
        list2 = list(my[last:len(my)])
        list2.sort()
        if list1 == list2:
            print("YES")
        else:
            print("NO")
    if len(my)%2!=0:
        last = int(len(my)/2)
        list1 = list(my[0:last])
        list1.sort()
        list2 = list(my[last+1 : len(my)])
        list2.sort()
        if list1 == list2:
            print("YES")
        else:
            print("NO")