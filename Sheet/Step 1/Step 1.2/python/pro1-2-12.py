def star(n):
    num=1
    gap=2*(n-1)

    for i in range(n):
        cn=1

        for j in range(1,num+1):
            print(cn, end=' ')
            cn+=1

        for j in range(1,gap+1):
            print(' ', end=' ')
        cn-=1

        for j in range(1,num+1):
            print(cn, end=' ')
            cn+=1

        print()

        num+=1
        gap-=2

z = int(input())
star(z)
    

#Online Compiler
# def numberCrown(n: int) -> None:
#     num = 1
#     gap = 2*(n-1)

#     for i in range(n):
#         cn=1

#         for j in range(1,num+1):
#             print(cn, end=' ')
#             cn+=1
        
#         for j in range(1,gap+1):
#             print(' ', end=' ')
#         cn-=1

#         for j in range(1,num+1):
#             print(cn, end=' ')
#             cn-=1

#         print()
#         num+=1
#         gap-=2