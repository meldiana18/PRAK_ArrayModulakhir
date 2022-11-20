b1,b2=map(int,input().split())
if b1!=b2:
    print("Jumlah Tidak Sama")
else:
    n1=list(map(int,input().split()))
    n2=list(map(int,input().split()))
    m1=[]
    m2=[]
    z=0
    m1.append(n1[z:z+b1])
    m2.append(n2[z:z+b2])
    for i in range(0,b1):
        print(m1[0][i]*m2[0][i], end=' ')
    