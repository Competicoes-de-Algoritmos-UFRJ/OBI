s, t = [int(x) for x in input().split()]

matriz = [[0 for i in range(s)] for i in range(s)]

for i in range(t):
    a, b = [int(x) for x in input().split()]
    
    a-=1
    b-=1

    matriz[a][b]=1
    matriz[b][a]=1


p = int(input())

resp = 0

for i in range(p):
    passeio = [int(x) for x in input().split()]

    tamanho = passeio[0]

    valido = 1

    for i in range(1, tamanho):
        a = passeio[i]
        b = passeio[i+1]

        a-=1
        b-=1

        if matriz[a][b]==0:
            valido = 0
            break
        
    if valido:
        resp+=1

print(resp)
