valor = int(input())

contas = []

for i in range(3):
    conta = int(input())
    contas.append(conta)

contas = sorted(contas)

resp = 0

for conta in contas:
    if valor>=conta:
        valor-=conta
        resp+=1

print(resp)
