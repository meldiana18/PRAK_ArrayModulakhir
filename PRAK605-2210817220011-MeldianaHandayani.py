a= int(input())
MA=[]
print("Matriks A")
for i in range (a):
    k= list(map(int, input().split()))
    MA.append(k)
MB= []
print("Matriks B")
for i in range (a):
    k= list(map(int, input().split()))
    MB.append(k)
MAB=[]
print("\nMatriks AXB")
for i in range (a):
    MAB.append([])
    for j in range (a):
        x=0
        for k in range (a):
            x= x + MA[i][k] * MB[k][j]
        MAB[i].append(x)
for baris in MAB:
    for k in baris:
        print(k, end=' ')
    print()
    

