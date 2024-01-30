def one():
    def star(n):

        if 1<=n and n<=25:
            for i in range(n):
                for j in range(n):
                    print('* ',end="")
                print('\n',end="")
        
    n = int(input())
    star(n)

def two():
    def star(n):
        for i in  range(n):
            for j in range(i+1):
                print('* ',end='')
            print('\n', end='')

    a=int(input())
    star(a)

def three():
    def star(n):
        for i in range(1, n+1):
            for j in range(1, i+1):
                print(j, end='')
            print('\n', end='')


    a = int(input())
    star(a)

def four():
    def star(n):
        for i in range(1,n+1):
            for j in range(1,i+1):
                print(i,end='')
            print('\n', end='')

    a=int(input())
    star(a)

def five():
    def star(n):
        for i in range(n):
            for j in range(n):
                if(j<(n-i)):
                    print('* ',end='')
            print('\n',end='')   
    a = int(input())
    star(a)

def six():
    def star(n):
        a = n
        for i in range(n):
            for j in range(1,a+1):
                print(j,' ',end='')
            print()
            a -=1
    a = int(input())
    star(a)

def seven():
    def star(n):
        a = n-1
        b = 1 
        for i in range(n):
            for j in range(a):
                print(' ',end='')
            for j in range(a,a+b    ):
                print('*',end='')
            print()
            a-=1
            b+=2

    z=int(input())
    star(z)

def eight():
    def star(n):
        gap=0
        star=2*n-1
        for i in range(n):
            for j in range(gap):
                print(' ',end='')
            for j in range(gap,gap+star):
                print('*',end='')
            print()     
            gap+=1
            star-=2

    z = int(input())
    star(z)

def nine():
    def star(n):
        #pattern1
        gap1 = n-1
        star1 = 1 
        for i in range(n):
            for j in range(gap1):
                print(' ',end='')
            for j in range(gap1,gap1+star1):
                print('*',end='')
            print()
            gap1-=1
            star1+=2

        #pattern2
        gap2=0
        star2=2*n-1
        for i in range(n):
            for j in range(gap2):
                print(' ',end='')
            for j in range(gap2,gap2+star2):
                print('*',end='')
            print()     
            gap2+=1
            star2-=2

    z=int(input())
    star(z)

def ten():
    def star(n):
        star=1
        for i in range(n):
            for j in range(star):
                print('*',end='')
            print()
            star+=1
        star = n-1
        for i in range(n):
            for j in range(star):
                print('*',end='')
            print()
            star-=1

    z = int(input())
    star(z)

def eleven():
    def star(n):
        star = 1
        for i in range(n):
            for j in range(1, star + 1):
                print((i+j)&1,end=' ')
            print()
            star +=1

    z = 5
    star(z)

def twelve():
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

def thirteen():
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

def fourteen():
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

def fifteen():
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

def sixteen():
    def star(n):
        for i in range(n):
            for j in range(i+1):
                print((chr)(i+65), end=' ')
            print()

    z = 5
    star(z)

def seventeen():
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

def eighteen():
    def star(n):
        for row in range(n):
            for col in range(row+1):
                print(chr(n-col+64),end= ' ')
            print()

    z = 5
    star(z)

def nineteen():
    def star(n):
        n=2*n
        
        for row in range(n):
            for col in range(n):
                if (row < n//2 and (col < (n//2 - row) or col >= (n//2 + row))):
                    print('*', end=" ")
                if (row >= n//2 and (col <= (row-n//2) or col >= (n-row+n//2-1))):
                    print('*', end=" ")
                if (row < n//2 and not (col < (n//2 - row) or col >= (n//2 + row))):
                    print(" ", end=" ")
                if (row >= n//2 and not (col <= (row-n//2) or col >= (n-row+n//2-1))):
                    print(" ", end=" ")
            print()

    z = 5
    star(z)

def twenty():
    def star(n):
        # Update n with 2*n

        n = 2*n
        # For loop ‘row’ in range 0 to N-2.
        for row in range(n-1):
            # For loop ‘col’ in range 0 to N-1.
            for col in range(n):
                # Condition for first half of the rows.
                if (row < n/2 and (col <= row or col >= (n-row-1))):
                    print('*', end=" ")
                # Condition for the second half of the rows.
                if (row >= n/2 and (col < (n-row-1) or col > row)):
                    print('*', end=" ")
                if (row < n/2 and not (col <= row or col >= (n-row-1))):
                    print(' ', end=" ")
                if (row >= n/2 and not (col < (n-row-1) or col > row)):
                    print(' ', end=" ")
            print()

    star(5)

def twenty_one():
    def star(n):

        for i in range(n):
            for j in range(n):
                if(i==0 or  j==0 or i==n-1 or j==n-1):
                    print('*', end='')
                else:
                    print(' ', end='')
            print()

    star(5)

def twenty_two():
    def star(n):
        k=2*n-1

        for row in range(k):
            for col in range(k):
                x = abs(row-n+1)
                y = abs(col-n+1)
                print(max(x,y)+1,end='')
            print()

    z = 5
    star(z)

while True:
    option = int(input("Enter from 1 to 22 or 0 to exit\n"))

    if option == 0:
        print("Exited the program.")
        break
    elif option == 1:
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
    elif option == 11:
        eleven()
    elif option == 12:
        twelve()
    elif option == 13:
        thirteen()
    elif option == 14:
        fourteen()
    elif option == 15:
        fifteen()
    elif option == 16:
        sixteen()
    elif option == 17:
        seventeen()
    elif option == 18:
        eighteen()
    elif option == 19:
        nineteen()
    elif option == 20:
        twenty()
    elif option == 21:
        twenty_one()
    elif option == 22:
        twenty_two()

