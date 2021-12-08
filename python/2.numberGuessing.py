from random import randint

def initiation():
    print("i will think a number between 1 and 100, and you has to find out which one is...")

    cpuNum = randint(1, 100)

    numberGen(cpuNum)

def numberGen(cpuNum):

    print("what is yours guess:")
    guess = input('> ').strip()

    while True:
        if guess.isnumeric():
            break

        else:
            print("input not allowed, please enter a valid number")
            guess = input('> ').strip()

    userNum = int(guess)

    if userNum == cpuNum:
        print(f"\ncongratulations, you guess right, i was tinking on {cpuNum}\n")
        tryAgain(cpuNum)

    else:
        print(f"\nwhat a shame, you failed, the number wasn't {guess}\n")
        tryAgain(cpuNum)


def tryAgain(cpuNum):
    print("do u want to try once more?[Y/N]")
    answer = input('> ').upper()[0]

    if answer == 'Y':
        numberGen(cpuNum)

    elif answer == 'N':
        exit()

    else:
        print("input not allowed, please try again")
        tryAgain(cpuNum)

initiation()