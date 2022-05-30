


def BlackRoom() :
    print("you just arive in a completely dark room, actualy you even know if this is a room, cause...")
    print("you can hear at distace the roaming of the water, the wind passing through the leaves and passing through your hair.")
    print("then you think: 'this is just a alucination or is real?'")
    print("you don't know but decide to: ")
    print(f"search for {cl.dg}answers{cl.en}, try to {cl.dr}find{cl.en} a door, go foward {cl.dy}blindly{cl.en}, or just seat and {cl.db}wait{cl.en} for something to hapen.")

    answer = input('> ').lower()

    if 'search' in answer :
        GameOver("\nyou search everywhere but, unfortunely there is nothing, your only choice is walk and walk and search and walk ... while your last thread of hope fades... ")

    elif 'blindly' in answer :
        print('\nwell look like you are realy in a good day, you just find a door...')
        EndGame()

    elif 'wait' in answer :
        print("\nafter you wait for a couple of hours something come from behind...")
        GameOver("you was't even able to see what was...")

    elif 'find' in answer :
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
