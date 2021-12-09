from random import randint

def menu():
    dice = randint(1, 3)
    print(">>>let's play mad libs gen, you will full the camps and a story will be generated with yours words.")
    print(">>>do you want to start now?[Y/N]")
    while True:
        answer = input('> ')[0].upper()

        if answer == 'N':
            print(">>>what a shame, good bye then...")
            exit()

        elif answer != 'Y' and answer != 'N':
            print(">>>I wasn't capable of undestand what u say, so... please type it again...")
        
        else:
            print(">>>Then, Please type:\n")
            if dice == 1:
                madLib1()

            elif dice == 2:
                madLib2()

            elif dice == 3:
                madLib3()

def madLib1():
    animal = input("some animal\n> ")
    profession = input("a profession\n> ")
    cloth = input("a cloth\n> ")
    things = input("something\n> ")
    name = input("a name\n> ")
    place = input("a place\n> ")
    verb = input("a verb\n> ")
    food = input("a food\n> ")
    print(f"""{food}, the photographer said as the camera flashed! -{name} and I had gone to {place} to get our photos taken on my birthday. 
    The first photo we really wanted was a picture of us dressed as {animal} pretending to be a {profession} when we saw the second photo, it was exactly what I wanted. 
    We both looked like {things}, wearing {cloth} and  {verb}. That Was exactly what I had in mind""")

    tryAgain()

def madLib2():
    adjactive1 = input("an adjactive\n> ")
    adjactive2 = input("another adjactive\n> ")
    color = input("a color\n> ")
    thing = input("an object\n> ")
    place = input("a place\n> ")
    person = input("someone\n> ")
    insect = input("a insect\n> ")
    food = input("a food\n> ")
    verb = input("a verb\n> ")
    print(f"""Last night I dreamed I was a {adjactive1} butterfly with {color} splocthes that looked like {thing}.
    I flew to {place} with my bestfriend and {person} who was a {adjactive2} {insect}.
    We ate some {food} when we got there and then decided to {verb} and the dream ended when I said: 'lets {verb}.'""")

    tryAgain()

def madLib3():
    person = input("a person\n> ")
    color = input("a color\n> ")
    food = input("a food\n> ")
    adjective = input("an adjective\n> ")
    place = input("a place\n> ")
    thing = input("a thing\n> ")
    verb = input("a verb\n> ")
    adverb = input("a adverb\n> ")
    foods = input("some foods\n> ")
    things = input("some things\n> ")
    print(f"""Today we picked apple from {person}'s Orchard. I had no idea there were so many different varieties of apples. 
    I ate {color} apples straight off the tree that tested like {foods}. 
    Then there was a {adjective} apple that looked like a {thing}. When our bag were full, we went on a free hay ride to {place} and back. It ended at a hay pile where we got to {verb} {adverb}. 
    I can hardly wait to get home and cook with the apples. We are going to make appple {food} and {things} pies!.""")

    tryAgain()

def tryAgain():
    print("do you want to play again?[Y/N]")
    answer = input("> ")[0].upper()

    if answer == 'Y':
        menu()

    elif answer == 'N':
        exit()

    else:
        print("i don't undestand you...")
        tryAgain()


menu()