import math


while True:

    n = int(input("Enter a value for n : "))
    x = int(input("Enter a value for x : "))

    if x < 0:
        print("X must be positive, try again!")
    else:
        result = sum(list(map(lambda i: (n ** i) / math.factorial(i), range(x + 1))))
        print("The result is : ", result)
        break

print()


def sum_total(n):
    global total

    if n==0:
        return
    else:
        current_total=0

        for k in range(1,n+1):
            current_total+=((-1)**(k+1))/k

        total+=current_total
        sum_total(n-1)

total=0
n=int(input("Enter a value for n: "))
sum_total(n)
print("Summation: ", total)