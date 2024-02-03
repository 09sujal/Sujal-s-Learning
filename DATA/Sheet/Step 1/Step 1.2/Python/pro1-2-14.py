def star(n):
    num=1
    for i in range(n):
        cn=65
        for j in range(1,num+1):
            print(chr(cn),end=' ')
            cn+=1
        num+=1
        print()
z = 5
star(z)

#online compiler
# def nLetterTriangle(n: int) -> None:
#     num=1
#     for i in range(n):
#         cn=65
#         for j in range(1,num+1):
#             print(chr(cn),end=' ')
#             cn+=1
#         num+=1
#         print()