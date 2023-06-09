n, m = [int(x) for x in input().split()]

estoque = []

for i in range(n):
    linha = [int(x) for x in input().split()]
    estoque.append(linha)

p = int(input())

resp = 0

for i in range(p):
    a, b = [int(x) for x in input().split()]

    a-=1
    b-=1

    if estoque[a][b]>0:
        estoque[a][b]-=1
        resp+=1

print(resp)
