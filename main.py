T=int(input())

for _ in range(T):
    length=int(input())
    A=str(input())
    B=str(input())
    C=str(input())
    
    count=abs(len(A)-len(B))
    zeros=count*'0'
    if(len(A)<len(B)):
        A=zeros+A
    elif(len(A)>len(B)):
        B=zeros+B
    
    if(len(A)!=len(C)):
        print("No")
        pass
    else:
        for i in range(len(A)):
            if(A[i]!='?' and B[i]!='?'):
                if(int(A[i])^int(B[i])!=int(C[i])):
                    print("No")
                    pass
        print("Yes")
        
