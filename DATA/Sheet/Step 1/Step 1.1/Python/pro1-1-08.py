# # my code 
# def option(n):
#     a, b = map(int, input().split())

#     if n==1:
#         if a > b:
#             print(a)
#         else:
#             print(b)

#     if n==2:
#         temp = a
#         a = b
#         b = temp


#another code 2 for the same problem in python

# Coding Challenge -1
def Maximum(a, b):
    return max(a, b)

# Coding Challenge -2
def Swap(x, y):
    return y, x

# Reading the integer to select the coding challenge
challenge_number = int(input())

# Perform the selected coding challenge
if challenge_number == 1:
    num1, num2 = map(int, input().split())
    result = Maximum(num1, num2)
    print(result)
elif challenge_number == 2:
    num1, num2 = map(int, input().split())
    num1, num2 = Swap(num1, num2)
    print(num1, num2)
else:
    print("Invalid choice. Please enter either 1 or 2.")


#Another Code 3
def maximum(a,b):
    return max(a,b)
     
def swaping(c,d):
    # temp = c
    # c = d
    # d = temp
    # return (c,d)
    # OR
    return d,c
  
n = int(input())

if n==1:
    a,b=map(int, input().split())
    result = maximum(a,b)

elif n==2:
    c,d=map(int, input().split())
    result=swaping(c,d)

print(result)
