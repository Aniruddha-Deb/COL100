import math

primes = [2, 3, 5, 7, 11, 13, 17, 19]

def lsum(k):
    sum = 0
    for i in range(1,k):
        found = False
        for j in range(0,int(math.sqrt(i)+1)):
            if found:
                break
            for k in range(j,int(math.sqrt(i)+1)):
                if j**2 + k**2 == i:
                    sum += 1
                    found = True
                    break
    return sum

def lsum_calc(k):
    return 0.867 * k / math.sqrt(math.log(k))

def err(k):
    return lsum(k) - lsum_calc(k)

n = 500
ls = lsum(n)
ls_c = lsum_calc(n)
print(f'{n}: {ls} - {ls_c:.2f} = {ls-ls_c:.2f}')
