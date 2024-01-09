# my code 
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


#Work on these
def max(a,b):
    return max(a,b)

def swap(a,b):
    return (b,a)


n = int(input())

if n==1:
    y,z=map(int, input().split())
    result=max(y,z)
    print(result)

elif n==2:
    y,z=map(int, input().split())
    result=swap(y,z)
    print(result)


