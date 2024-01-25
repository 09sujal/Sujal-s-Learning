def star(n):
    num = n
    for i in range(n):
        cn=65
        for j in range(1,num+1):
            print(chr(cn),end=' ')
            cn+=1
        print()
        num-=1

z = 5
star(z)

#online Compiler
# def nLetterTriangle(n: int):
#     num=n
#     for i in range(n):
#         cn=65
#         for j in range(1,num+1):
#             print(chr(cn),end=' ')
#             cn+=1
#         print()
#         num-=1 