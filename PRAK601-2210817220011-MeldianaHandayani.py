A,B=map (int ,input().split())
matrix=[]
for i in range(A):
    a=[]
    for j in range(B):
        k=int(input())
        a.append(k)
    matrix.append(a)
for i in range(A):
    for j in range(B):
        print(matrix[i][j], end=' ')
    print()

    
