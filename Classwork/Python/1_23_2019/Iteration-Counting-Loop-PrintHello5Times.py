import random

while True:
    for count in range(30):
        print(random.randint(0, 1), end="")
        if count == 29:
            print("\n")
