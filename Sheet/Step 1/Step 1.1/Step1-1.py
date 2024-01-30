import math
from typing import *

def one():
    print("\nThis program solicits user input and categorizes it based on whether it represents an uppercase letter, a lowercase letter, or neither. It prints '1' if the input is an upperrcase letter, '0' if it is a lowercase letter, and '-1' if it does not fall into either category.\n\nEnter between \'A to Z\' or \'a to z\'")

    a = input()

    if a >='A' and a<='Z':
        print(1)
    elif a>='a' and a <='z':
        print(0)
    else:
        print(-1)

def two():
    print("\nThis Program will return Size of Datatype\nEnter Integer, Long, Float, Double or Character. Wrong inut will return -1.\n")

    def result(type):
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
    type = str(input())
    print(result(type))
    
def three():
    def gl(a,b):
        if -10**5 <= a <= 10**5 and -10**5 <= b <= 10**5:
            if a > b:
                return "greater"
            elif a < b:
                return 'smaller'
            else:
                return 'equal'
        else:
            print("Numbers are not within the valid range.")

    print("\nThis program will tell if 1st number is greater, smaller or whether 1st and 2nd number are equal.\nEnter two numbers for A and B.\n")
    a = int(input())
    b = int(input())
    print(gl(a,b))
    
def four():
    def areaSwitchCase(ch: int, a: List[float]):
        if ch==1:
            area = math.pi*((a[0])**2)
        elif ch==2:
            area = a[0]*a[1]    
        
        print("{:.5f}".format(area))

    print("\nThis program will return area of a circle or rectangle based on user input.\nEnter 1 for circle or 2 for rectangle.\n")
    choice = int(input())
    if choice == 1:
            print("\nFor Circle enter radius.")
            radius = float(input("Enter the radius of the circle: "))
            areaSwitchCase(choice, [radius])
    elif choice == 2:
            print("\nFor rectangle enter Length and breadth.\n")
            length = float(input("Enter the length of the rectangle: "))
            breadth = float(input("Enter the breadth of the rectangle: "))
            areaSwitchCase(choice, [length, breadth])
    else:
            print("Invalid choice. Please enter 1 for a circle or 2 for a rectangle.")

def five():
    print('''What are arrays, strings?
            
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
    print("This program will return Fibonacci number of given position.\nEnter Position.\n")    
    n = int(input())
    z = iter(n) 
    print(z)

def seven():
    print("This program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.")
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
    print("This program will return max value and swap values based on input 1 or 2 respectively.\n")
    def maximum(a,b):
        return max(a,b)        
    def swaping(c,d):
        return d,c
    
    n = int(input())

    if n==1:
        print("\nEnter two numbers to get max value.Also enter space between two numbers.")
        a,b=map(int, input().split())
        result = maximum(a,b)

    elif n==2:
        print("\nEnter two numbers to get swap value.Also enter space between two numbers.")
        c,d=map(int, input().split())
        result=swaping(c,d)

    print(result)

def nine():
    print('''For any algorithm,
if input size is increasing and the output is taking same time for any input, then time complexity will be O(1) also known as Constant time complexity.
if input size ias increasing and the output time is increasing with input size (input size is in directly proportion to Output time), then time complexity will be O(n). ''')

def ten():
   print("""\nThis program have basic problems.
1 - User Input / Output
2 - Data Types
3 - If else Statements
4 - Switch Statement
5 - What are arrays and strings?
6 - For loops
7 - While loops
8 - Functions
9 - Time Complexity
 """) 

print("""\nThis program have basic problems.
1 - User Input / Output
2 - Data Types
3 - If else Statements
4 - Switch Statement
5 - What are arrays and strings?
6 - For loops
7 - While loops
8 - Functions
9 - Time Complexity
 """)

while True:

    option = int(input("\nEnter option (1-9) or '10' for help, or '0' to exit: "))

    if option == 0:
        print("Exited the program.")
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
    elif option == 10:
        ten()
    else:
        print("Invalid option. Please enter a number from 1 to 9.")