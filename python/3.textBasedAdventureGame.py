from typing_extensions import ParamSpec


def Start():
    print("         .                                         .            ")
    print("           .                                     .              ")
    print("            .                                  .                ")
    print("              .                              .                  ")
    print("                .                           .                   ")
    print("                 ._________________________.                    ")
    print("                  |                       |                     ")
    print("                  |                       |                     ")
    print("                  |      _____            |                     ")
    print("                  |      |   |            |                     ")
    print("                  |______|___|____________|                     ")  
    print("              /| /                         \ |\                 ")
    print("             /  /                           \| \                ")
    print("             | /                             \ |                ")
    print("             |/                               \|                ")
    print("             /                                 \                ")
    
    print("you wake up, without memory, u don't know why u are here, but...")
    print('You see Tree Doors in front of you, what will you do? take the left door, the right door or step foward?')

    answer = input('> ').capitalize()

    if 'Right' in answer:
        print('Right')
        #MonsterRoom()
    
    elif 'Left' in answer:
        print('Left')
        #BearRoom()

    elif 'Foward' in answer:
        print('Foward')
        #BlackRoom()

    else:
        print("Please, type correctly, u don't know how to type?")
        #GameOver()

def MonsterRoom():
    pass

def BearRoom():
    print("There is a Bear here.")
    print("Behind the Bear is another Door.")
    print("The Bear looks like is eating something, what will you do?")
    print("look closer, attack him or taunt the Bear?")
    
    answer = input('> ').capitalize()

    if 'closer' in answer:
        GameOver("This wasn't the smartest choice, the Bear saw and kill you, u isn't stronger or faster than him.")

    elif 'attack' in answer:
        GameOver("What was you thinking? Are you out of your mind? That was A DAMN BEAR! you just die!")

    elif 'taunt' in answer:
        print("Congratulations, the bear just moved away from the door, and you has been capable of go through.")

    elif 'wait' in answer:
        GameOver("Unfortunely, wait will not make your problems go away, so sorry but this will not work in here.")

    else:
        GameOver("You has only one job! type correctly, and guess what, you fail.")

def BlackRoom():
    pass

def EndGame():
    pass

def GameOver():
    pass

Start()