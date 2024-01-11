import math
from typing import *

def one():
    print("This program solicits user input and categorizes it based on whether it represents an uppercase letter, a lowercase letter, or neither. It prints '1' if the input is an uppercase letter, '0' if it is a lowercase letter, and '-1' if it does not fall into either category.\nEnter between \'A to Z\' or \'a to z\'")

    a = input()

    if a >='A' and a<='Z':
        print(1)
    elif a>='a' and a <='z':
        print(0)
    else:
        print(-1)

def two():
    if type=='Integer':
        return 4
    elif type=='Long':
        return 8
    elif type=='Float':
        return 4
    elif type=='Double':
        return 8
    elif type=='Character':
        return 1
    else:
        return -1
    
def three():
    def compareIfElse(a: int, b: int) -> str:
        if -10**5 <= a <= 10**5 and -10**5 <= b <= 10**5:
            if a > b:
                return "greater"
            elif a < b:
                return 'smaller'
            else:
                return 'equal'
            
def four():
    def areaSwitchCase(ch: int, a: List[float]):
        if ch==1:
            area = math.pi*((a[0])**2)
        elif ch==2:
            area = a[0]*a[1]    
        
        return "{:.5f}".format(area)

def five():
    print('''What are arrays, strings?
            Edit

            Arrays:
            Arrays are collections of elements of the same type, accessible via indices. They allow efficient storage and retrieval of multiple values under a single variable name. In Python, lists often serve as arrays.

            temperatures = [25, 28, 22, 30, 24]
            In this example, temperatures is an array representing daily temperatures.

            Strings are sequences of characters, used to represent textual information. They are immutable in many programming languages. Strings support operations like concatenation and slicing and are crucial for text processing.

            message = "Hello, World!"
            Here, message is a string containing a greeting.''')
    
def six():
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

def seven():
    n = int(input())
    e = 0
    o=0

    while n>0:
        l = n%10

        if l %2==0:
            e = e+l
        else:
            o = o+l
        n = n//10
    print(e," ",o)

def eight():
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

def nine():
    print('''For any algorithm,

            if input size is increasing and the output is taking same time for any input, then time complexity will be O(1) also known as Constant time complexity.

            if input size ias increasing and the output time is increasing with input size (input size is in directly proportion to Output time), then time complexity will be O(n).

            ''')

while True:

    option = int(input("Enter option (1-9) or 0 to exit: "))

    if option == 0:
        print("Exiting the program.")
        break
    if option == 1:
        one()
    elif option == 2:
        two()
    elif option == 3:
        three()
    elif option == 4:
        four()
    elif option == 5:
        five()
    elif option == 6:
        six()
    elif option == 7:
        seven()
    elif option == 8:
        eight()
    elif option == 9:
        nine()
    else:
        print("Invalid option. Please enter a number from 1 to 9.")