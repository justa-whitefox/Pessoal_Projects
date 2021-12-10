from random import randint

def menu():
    print("let's play dice rolling...")
    print("do you want to roll the dice?")
    answer = input("> ").upper().strip()[0]

    if answer == "Y":
        dice()

    elif answer == "N":
        exit()

    else:
        print("i do not undestood what you say, please try again")
        menu()

def dice():
    minimum = 1
    maximum = 6
    diceRoll_1 = randint(minimum, maximum)
    diceRoll_2 = randint(minimum, maximum)

    print("\nYour dices are:")
    print(f": {diceRoll_1}")
    print(f": {diceRoll_2}")

    tryAgain()

def tryAgain():
    print("\nDo you want to roll the dice again?")
    answer = input("> ").upper().strip()[0]

    if answer == 'Y':
        dice()

    elif answer == 'N':
        exit()

    else:
        print("\nChoice not allowed, try again..")
        tryAgain()
menu()