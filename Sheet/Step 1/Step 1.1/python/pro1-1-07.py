# Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
# Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

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