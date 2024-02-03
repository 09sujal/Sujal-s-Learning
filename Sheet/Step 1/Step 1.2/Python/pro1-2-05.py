def star(n):
    for i in range(n):
        for j in range(n):
            if(j<(n-i)):
                print('* ',end='')
        print('\n',end='')   
a = int(input())
star(a)
