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

#online compiler
# def symmetry(n: int):
#     n=2*n

#     for row in range(n):
#         for col in range(n):
#             if (row < n//2 and (col < (n//2-row) or col >= (n//2 + row))):
#                 print('*', end=" ")
#             if (row >= n//2 and (col <= (row-n//2) or col>=( n-row+n//2-1))):
#                 print('*', end=" ")  
#             if (row < n//2 and not (col<(n//2 - row)or col>=(n//2 + row))):
#                 print(' ',end = ' ')
#             if(row >= n//2  and not (col<=(row-n//2)or col>=(n-row+n//2-1))):
#                 print(' ',end =' ')
#         print()



