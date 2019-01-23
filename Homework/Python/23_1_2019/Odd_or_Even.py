num = int(input("Please enter a number : "))

determiner = num % 2

if num == 0:
    print("Number :", num, "is neither odd nor even.")
elif determiner == 1:
    print("Number :", num, "is odd.")
else:
    print("Number :", num, "is even.")
