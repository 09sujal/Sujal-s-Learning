#answer 1 having time complexity issue
def recur(n):
    if n <= 1:
        return n
    return recur(n - 1) + recur(n - 2)

n = int(input())
print(recur(n))

#answer 2 - no time complexity issue

def fibo(n, a={}):
    if n <= 1:
        return n

    if n not in a :
        a[n] = fibo(n - 1, a) + fibo(n - 2, a)

    return a[n]

n = int(input())
print(fibo(n))
