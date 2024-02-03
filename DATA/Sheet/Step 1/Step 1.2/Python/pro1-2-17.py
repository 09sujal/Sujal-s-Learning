def star(n):
    l = (2*n-1)//2
    r = (2*n-1)//2

    for row in range(n):
        ch=65

        for col in range(2*n-1):

            if(col>=l and col<=(l+r)//2):
                print(chr(ch), end=' ')
                ch+=1
                
            if(col<l or col >r):
                print(' ', end=' ')

            if(col == (l+r)//2):
                ch-=1


            if(col>(l+r)//2 and col<=r):
                ch-=1
                print(chr(ch), end= ' ')

        l-=1
        r+=1

        print()

z = 5
star(z)


# for online Compiler
# def alphaHill(n: int):
    
    # l = (2*n-1)//2
    # r = (2*n-1)//2

    # for row in range(n):
    #     ch=65

    #     for col in range(2*n-1):

    #         if(col>=l and col<=(l+r)//2):
    #             print(chr(ch), end=' ')
    #             ch+=1
                
    #         if(col<l or col >r):
    #             print(' ', end=' ')

    #         if(col == (l+r)//2):
    #             ch-=1


    #         if(col>(l+r)//2 and col<=r):
    #             ch-=1
    #             print(chr(ch), end= ' ')

    #     l-=1
    #     r+=1

    #     print()