def print_factorization(n):
    n1=n
    k=0
    m=0
    l=0
    s=0
    a=[]
    b=[]
    if(n<4):
    	b[0]=n
    else:
    	i=2
    	while(i):
    		if(not(n1%i)):
    			n1=n1/i
    			b.append(i)
    			i=2
    		else:
    			i=i+1
    			if((n1/i)==1):
    				b.append(n1)
    				i=0    			
    while(k<=n):
        m=b.count(k)        
        if(m>0):
            if(m>1):
                a.insert(l, k)
                l=l+1
                a.insert(l, "^")
                l=l+1
                a.insert(l, m)
                l=l+1
                a.insert(l, 0)
                l=l+1
            else:
                a.insert(l, k)
                l=l+1
                a.insert(l, 0)
                l=l+1
        k=k+1
    while(s<len(a)):
        if(s==(len(a)-1)):
            a.pop(s)
        else:
            if(a[s]==0):
                a[s]="*"
        s=s+1
    return a

y=0
x=[]
n=int(input())
if(n>5):
    x=print_factorization(n)
    [print(i, "", sep="", end="") for i in x]
else:
    if(n==4):
        print(2,"*",2)
    else:
        print(n)
stop=input()
