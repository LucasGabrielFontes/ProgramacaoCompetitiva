import sys

it = int(input())

for _ in range(it):
    x1, y1, x2, y2, x3, y3 = map(float, sys.stdin.readline().strip().split())

    produtoVetorial = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)
    
    if produtoVetorial == 0:
        sys.stdout.write("TOCANDO\n")
    elif produtoVetorial > 0:
        sys.stdout.write("ESQUERDA\n")
    else:
        sys.stdout.write("DIREITA\n")