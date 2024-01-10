#answer 1 having time complexity issue
def recur(n):
    if n <= 1:
        return n
    return recur(n - 1) + recur(n - 2)

n = int(input())
print(recur(n))

# #answer 2 using recursion - no time complexity issue

def fibo(n, a={}):
    if n <= 1:
        return n

    if n not in a :
        a[n] = fibo(n - 1, a) + fibo(n - 2, a)

    return a[n]

n = int(input())
print(fibo(n))


# using iteration
def iter(n):
    pre = 0
    cur = 1
    if n==0:
        return n
    elif n==1:
        return n
    else:
        for i in range(1,n):
            prepre = pre
            pre = cur
            cur = prepre + pre

        return cur
        
n = int(input())
z = iter(n) 
print(z)