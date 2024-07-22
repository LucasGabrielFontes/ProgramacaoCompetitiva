n = int(input())
vetor = list(int(x) for x in input().split(' '))
vetor.sort()
menor = 1
contador = 0
while contador < n and menor == vetor[contador]:
    contador += 1
    menor += 1
print(menor)