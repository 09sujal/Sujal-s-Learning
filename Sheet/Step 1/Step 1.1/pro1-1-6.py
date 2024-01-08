#answer 1 having time complexity issue
def recur(n):
    if n <= 1:
        return n
    return recur(n - 1) + recur(n - 2)

n = int(input())
print(recur(n))

#answer 2 no time complexity issue

def recur_memo(n, memo={}):
    if n <= 1:
        return n

    if n not in memo :
        memo[n] = recur_memo(n - 1, memo) + recur_memo(n - 2, memo)

    return memo[n]

n = int(input())
print(recur_memo(n))
