def star(n):
    num  = 1
    cn=1
    for i in range(n):
        for j in range(1,num+1):
            print(cn, end=' ')
            cn+=1
        print()
        num+=1

z=5
star(z)

#online compiler
# def nNumberTriangle(n: int) -> None:
#     num=1
#     cn=1

#     for i in range(n):
#         for j in range(1,num+1):
#             print(cn,end=' ')
#             cn+=1
#         print()
#         num+=1