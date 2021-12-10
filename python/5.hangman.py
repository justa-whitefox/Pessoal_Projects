from random import choice

def menu():
    print("let's play hangman, try to guess the word: ")

    wordPick()
   
def wordPick():
    wordList = ['apple', 'table', 'car']
    wordPicked = choice(wordList)
    #print(wordPicked)

    print("so wich word do you think it is?")
    word(wordPicked)
    tryAgain()

def word(wordPicked):
    while True:    
        answer = input('> ').lower().strip()

        if answer == wordPicked:
            print("\ncongratulation, you guess right!")
            break

        else:
            print("\nwhat a shame, you guess was wrong, do you want to try again?[Y/N]")
            check = input('> ').strip().upper()[0]

            if check == 'Y':
                print("\nSo what is the word?")

            elif check == 'N':
                print("good bye then.")
                print(f"the word was {wordPicked}")
                exit()
            
            else:
                print("\nyou typed incorrectly, try again:")

def tryAgain():
    print("\ndo you want to play again?[Y/N]")
    answer = input("> ").strip().upper()[0]

    if answer == 'Y':
        menu()

    elif answer == 'N':
        exit()

    else:
        print("\nyou made a typo type again\n")
        tryAgain()

menu()

