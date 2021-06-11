def sort(p, size):
    buff = 0
    i = 1
    while i < size:
        buff = p[i]
        j = i - 1
        while j >= 0 and p[j] > buff:
            p[j + 1] = p[j]
            j = j - 1
        p[j + 1] = buff
        i = i + 1
    return p
import random
m=[]
n=[]
n1=[]
k=[]
x,y=0,0
i, u=0, 0
while(u<100000):
    i=0
    while(i<7):
        x=random.randint(1, 10)
        m.append(x)
        i=i+1
    sort(m,7)
    y=(m[0] + m[1] + m[2] + m[3] + m[4] + m[5] + m[6]) / 7
    n.append(y)
    y=(m[1] + m[2] + m[3] + m[4] + m[5]) / 5
    n1.append(y)
    u=u+1
    m.clear()

sort(n,100000)
sort(n1,100000)
i=0
while(i<100000):
    k.append(n[i]-n1[i])
    i=i+1
sort(k,1000)
print(k)
stop=input()