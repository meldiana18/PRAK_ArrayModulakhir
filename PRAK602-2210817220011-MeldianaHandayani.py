n=int(input())
num=list(map(int,input().split()))
mtrx=[]
z=0
for i in range(0,n):
    mtrx.append(num[z:z+n])
for i in range (0,n):
    print(mtrx[0][i]*(i+1), end=' ')
