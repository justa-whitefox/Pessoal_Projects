from time import sleep
from random import choice

def menu():

    print("let's play JOKENPO")
    print("in the end let's see who wins...")
    print("if you don't know how to play, i will teach you...")
    print("you have to chose between rock, paper or scissor and i will do the same")
    print("paper > rock > scissor > paper")

    print("\nWhat your move?")
    
    jokenpo()
    playAgain()

def jokenpo():
    lista = ['rock', 'paper', 'scissor', 'scissor', 'paper', 'rock']
    myChoice = choice(lista)
    userChoice = input('> ').lower()

    sleep(1)
    print("\nJO")
    sleep(1)
    print("KEN")
    sleep(1)
    print("PO")
    print("!!!")
    sleep(1)

    if myChoice == 'rock' and userChoice == 'rock' or myChoice == 'paper' and userChoice == 'paper' or myChoice == 'scissor' and userChoice == 'scissor':
        print(f"we are tied here, my {myChoice} is iqual to yours {userChoice}")

    elif myChoice == 'rock' and userChoice == 'scissor' or myChoice == 'scissor' and userChoice == 'paper' or myChoice == 'paper' and userChoice == 'rock':
        print(f"you lose, my {myChoice} is greater than yours {userChoice}")

    elif myChoice == 'rock' and userChoice == 'paper' or myChoice == 'scissor' and userChoice == 'rock' or myChoice == 'paper' and userChoice == 'scissor':
        print(f"you win, my {myChoice} is lesser than yours {userChoice}")

    else:
        print("\nyou type incorectly so please type again.")
        jokenpo()

    playAgain()

def playAgain():
    print("\nDo you want to play again?[Y/N]")
    answer = input("> ")[0].upper()

    if answer == 'Y':
        menu()

    elif answer == 'N':
        exit()

    else:
        print("\nPlease, type it right, if you don't i will not be able to undestand you.")
        playAgain()

menu()