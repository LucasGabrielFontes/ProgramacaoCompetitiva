n = int(input())

vetor = []

string = input()
numeros = string.split(" ")

for i in range(n):
    vetor.append(int(numeros[i]))

pares = []

for i in range(n):
    index = i

    for j in range(i+1, n):
        if (vetor[index] > vetor[j]):
            index = j

    if (index != i):
        par = (i, index)

        pares.append(par)

        vetor[i], vetor[index] = vetor[index], vetor[i]

print(len(pares))

for i in range(len(pares)):
    print(pares[i][0], pares[i][1])