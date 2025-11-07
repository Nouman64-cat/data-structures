array = []
start = 0
end = 0


def inputValue():
    value = int(input("Enter value: "))
    return value


def enqueue():
    global end
    if (end == len(array) - 1):
        print("queue overflow")
    array.append(inputValue())
    end += 1


def dequeue():
    global start
    global end
    if (start == end):
        print("queue underflow")
    dequeuedValue = array[start]
    start += 1
    return dequeuedValue


def printQueue():
    global start
    global end
    if (start == end):
        print("queue underflow")
    for i in range(start, end):
        print(array[i])
