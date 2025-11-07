array = []
top = -1


def inputInStack():
    value = int(input("Enter value: "))
    return value


def pushToStack():
    global top
    value = inputInStack()
    top = top + 1
    array.append(value)
    print("push successful")


def popFromStack():
    global top
    valuePopped = array.pop()
    top = top - 1
    print("pop successful")


def printStack():
    print("printing stack\n")
    print("----------------------")
    for value in reversed(array):
        print(value)
    print("\n")
    print("-------------------------")


def stackMenu():
    print("1. Push")
    print("2. Pop")
    print("3. Print")


choice = -1
while choice != 0:
    stackMenu()
    choice = int(input("Enter choice: "))
    if choice == 1:
        pushToStack()
    elif choice == 2:
        popFromStack()
    elif choice == 3:
        printStack()
