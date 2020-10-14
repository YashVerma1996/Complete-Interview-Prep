n=int(input())

final=[]
def func(a,list1):
    count=1
    while(count-1<len(list1)-1):
        any1='k'
        if count%2==0:
            for k in range(1,len(list1),2):
                if list1[k]!='l':
                    any1=k
                    if(list1[k]%2!=0):
                        list1[k]='l'
                        count=count+1
                        break
            else:
                list1[k]='l'
                count=count+1
        else:
            for k in range(0,len(list1),2):
                if list1[k]!='l':
                    any1=k
                    if(list1[k]%2==0):
                        list1[k]='l'
                        count=count+1
                        break
            else:
                list1[k]='l'
                count=count+1
    for i in list1:
        if i!='l':
            if i%2==0:
                final.append(2)
            else:
                final.append(1)
            break
    

for i in range(n):
    a=int(input())
    numA=input()
    list1=[int(x) for x in str(numA)]
    func(a,list1)


for i in final:
    print(i)
