def star(n):
    num = 1
    gap = (n - 1) * 2
    for i in range(n):
        currentNumber = 1
        for j in range(1, num+1):
            print(currentNumber, end=" ")
            currentNumber += 1
        for j in range(1, gap+1):
            print(" ", end=" ")
        currentNumber -= 1
        for j in range(1, num+1):
            print(currentNumber, end=" ")
            currentNumber -= 1
        
        # End the current line.
        print()

        num += 1
        gap -= 2

z = 5
star(z)



    