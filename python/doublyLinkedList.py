class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def inputValue(self):
        return int(input("Value: "))

    def push(self):
        value = self.inputValue()
        newNode = Node(value)
        if self.head == None:
            self.head = newNode
            self.tail = newNode
        else:
            self.tail.next = newNode
            newNode.prev = self.tail
            self.tail = newNode

    def pop(self):
        if self.head == None:
            print("underflow")
            return
        self.head = self.head.next
        self.head.prev = None

    def print(self):
        if self.head == None:
            print("underflow")
            return
        current = self.head
        while current != None:
            print(current.data, " -> ", end=" ")
            current = current.next
        print()

    def menu(self):
        print("1. push")
        print("2. pop")
        print("3. print")
        print("4. exit")


if __name__ == "__main__":
    dll: DoublyLinkedList = DoublyLinkedList()
    while True:
        dll.menu()
        choice = int(input("choice: "))
        if choice == 4:
            print("Thanks for using Doubly Linked List")
            break
        elif choice == 1:
            dll.push()
        elif choice == 2:
            dll.pop()
        elif choice == 3:
            dll.print()
