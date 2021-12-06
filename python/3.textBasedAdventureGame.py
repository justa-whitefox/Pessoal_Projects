from time import sleep

class cl:
    #distaque blue
    db = '\033[34m'
    #distaque green
    dg = '\033[32m'
    #distaque red
    dr = '\033[31m'
    #distaque yellow
    dy = '\033[33m'
    #end
    en = '\033[0m'

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
    
    print("you wake up, without memory, in a dark room(thanks to the creator creativity),  and you don't know why u are here, but...")
    print(f'You can see Tree Doors in front of you, what will you do? take the {cl.dr}left{cl.en} door, the {cl.db}right{cl.en} door or step {cl.dg}foward{cl.en}?')

    answer = input('> ').lower()

    if 'right' in answer:
        print('You chose the Right Door')
        BearRoom()
    
    elif 'left' in answer:
        print('\nlook like you prefered the Left one hum\n')
        MonsterRoom()

    elif 'foward' in answer:
        print('step foward then!')
        BlackRoom()

    else:
        GameOver("Please, type correctly, u don't know how to type?")

def MonsterRoom():
    print("you entered the room of a monster that look as a dinosaur, yours instinc tell you to go back the way you came from, but...")
    print("the door that you just pass through is locked, and your only choice is to face this monster...")
    print("looking at the monster, you see a door behind him, what will you do?")
    print(f"try to {cl.dy}kill{cl.en} him and {cl.dy}show{cl.en} to the walls how brave you are, or just be a {cl.dr}coward{cl.en} and {cl.dr}sneek{cl.en} to the door?")

    answer = input('> ').lower()

    if 'kill' in answer or 'show' in answer:
        print("cause of your inpressive corage, the monster feel touch and Respectfully...")
        sleep(1)
        print('Painfully...')
        sleep(1)
        GameOver("eat you alive, congratulations")

    elif 'sneek' in answer or 'coward' in answer:
        print('well...')
        sleep(0.6)
        print('\nthere is nothing i can say, you just go through the door, thanks to your cowardice')
        EndGame()

    else:
        GameOver("your inability of type right is the ruin of this technically 'game'")

def BearRoom():
    print("There is a Bear here.")
    print("Behind the Bear is another Door.")
    print("The Bear looks like is eating something, what will you do?")
    print(f"try to {cl.dg}took{cl.en} his food, {cl.db}attack{cl.en} him or {cl.dr}taunt{cl.en} the Bear? oh you also can just wait, there is no one here, but that didn't prevent you from {cl.dy}wait{cl.dy}, right?")
    
    answer = input('> ').lower()

    if 'took' in answer:
        GameOver("This wasn't the smartest choice, the Bear saw and kill you, u isn't stronger or faster than him.")

    elif 'attack' in answer:
        GameOver("What was you thinking? Are you out of your mind? That was A DAMN BEAR! you just die!")

    elif 'taunt' in answer:
        print("Congratulations, the bear just moved away from the door, and you has been capable of go through.")
        EndGame()

    elif 'wait' in answer:
        GameOver("Unfortunely, wait will not make your problems go away, so sorry but this will not work in here.")

    else:
        GameOver("You had only one job! type correctly, and guess what, you fail.")

def BlackRoom():
    print("you just arive in a completely dark room, actualy you even know if this is a room, cause...")
    print("you can hear at distace the roaming of the water, the wind passing through the leaves and passing through your hair.")
    print("then you think: 'this is just a alucination or is real?'")
    print("you don't know but decide to: ")
    print(f"search for {cl.dg}answers{cl.en}, try to {cl.dr}find{cl.en} a door, go foward {cl.dy}blindly{cl.en}, or just seat and {cl.db}wait{cl.en} for something to hapen.")

    answer = input('> ').lower()

    if 'search' in answer:
        GameOver("\nyou search everywhere but, unfortunely there is nothing, your only choice is walk and walk and search and walk ... while your last thread of hope fades... ")

    elif 'blindly' in answer:
        print('\nwell look like you are realy in a good day, you just find a door...')
        EndGame()

    elif 'wait' in answer:
        print("\nafter you wait for a couple of hours something come from behind...")
        GameOver("you was't even able to see what was...")

    elif 'find' in answer:
        print('\nyou try to find something, because you have nothing better to do')
        print('and you actually find something.')
        print("a hole in the ground with a big fall... you wil not gonna fall, will you?")
        print("something roar behind you... you don't like the sound and so do i")
        print("to scape from this terific roar you rum foward, but...")
        GameOver("\nyou just forgoten that right in front of you is that big hole in the ground with a big fall...")
    else:
        print("...")
        sleep(1)
        GameOver("i'm speechless... you are doing this on purpuse isn't you?")

def EndGame():
    print("\nin the moment you pass through the door you se the exit...")
    print("in that moment you ask to yourself 'that as fun or just bored, maybe scary?'")
    print("then you just think: 'will i go away? back home or...")
    PlayAgain()

def GameOver(reason):
    print('\n' + reason)
    print(f"{cl.dr}GAME OVER{cl.en}")
    PlayAgain()

def PlayAgain():
    print("\nActually do i want to play again?")

    answer = input('> ').lower()[0]

    if 'y' in answer:
        Start()

    else:
        exit() 

Start()