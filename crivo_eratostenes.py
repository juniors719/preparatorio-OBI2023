# import math
# n = int(input("Digite o limite do intervalo: "))
# numeros = []
# for i in range(n+1):
#     numeros.append(True)
# for m in range(2, int(math.sqrt(len(numeros)))):
#     for n in range(2*m,len(numeros),m):
#         # if numeros[n] == True:
#             numeros[n] = False;

# for o in range(len(numeros)):
#     if o >= 2 and numeros[o]:
#         print(o);

# print(numeros)

from math import sqrt
from math import floor
from time import time

def crivo2(n):
    numeros = list(range(0,n+1))
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = True
    for i in range(2,floor(sqrt(n))+1):
        if(is_prime[i]):
            for j in range(i**2,n+1,i):
                is_prime[j] = False
    primos = [numeros[i] for i,j in enumerate(is_prime) if j == True]
    return primos

start = time()
print(crivo2(10000))
end = time()

print(f"Tempo: {end - start}")
