def menu_calculator():
    while True:

        print("{:=^50}".format(" calculator "))
        print("chose a operations from the below menu:")
        print("[sum] to sum")
        print("[sub] to subtract")
        print("[mul] to multiply")
        print("[div] to divide")
        print("[ext] to exite the program")

        menu = input("> ").lower().strip()[:3]

        if menu != 'sum' and menu != 'sub' and menu != 'mul' and menu != 'div' and menu != 'ext':
            print("typo finded try again!")

        elif menu == 'ext':
            print("have a good day! and thank you from use my service")
            break

        else:
            if menu == 'sum':
                print('-'*50)
                increase()
                print('-'*50)

            elif menu == 'sub':
                print('-'*50)
                subtract()
                print('-'*50)

            elif menu == 'mul':
                print('-'*50)
                multiply()
                print('-'*50)

            elif menu == 'div':
                print('-'*50)
                divide()
                print('-'*50)

def increase():
    while True:
        number1 = input("enter the first number: ")
        number2 = input("enter the second number: ")
        if number2.isnumeric() and number1.isnumeric():
            number1 = int(number1)
            number2 = int(number2)
            break

        else:
            print("NaN inserted, enter a valid number")

    
    print(f"{number1} + {number2} = {number1 + number2}")

def subtract():
    while True:
        number1 = input("enter the first number: ")
        number2 = input("enter the second number: ")
        if number2.isnumeric() and number1.isnumeric():
            number1 = int(number1)
            number2 = int(number2)
            break

        else:
            print("NaN inserted, enter a valid number")
    print(f"{number1} - {number2} = {number1 - number2}")

def multiply():
    while True:
        number1 = input("enter the first number: ")
        number2 = input("enter the second number: ")
        if number2.isnumeric() and number1.isnumeric():
            number1 = int(number1)
            number2 = int(number2)
            break

        else:
            print("NaN inserted, enter a valid number")

    print(f"{number1} x {number2} = {number1 * number2}")

def divide():
    while True:
        number1 = input("enter the first number: ")
        number2 = input("enter the second number: ")
        if number2.isnumeric() and number1.isnumeric():
            number1 = int(number1)
            number2 = int(number2)
            break

        else:
            print("NaN inserted, enter a valid number")

    print(f"{number1} / {number2} = {number1 / number2}")

menu_calculator()