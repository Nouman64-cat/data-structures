from typing import Optional


class Node:
    def __init__(self, data: int):
        self.data: int = data
        self.next: Optional['Node'] = None


class LinkedList:
    def __init__(self):
        # head and tail will be Node and None
        self.head: Optional['Node'] = None
        self.tail: Optional['Node'] = None

    def inputValue(self) -> int:
        return int(input("Enter value: "))

    def push(self) -> None:
        newNode = Node(self.inputValue())
        if self.tail is None:
            self.head = newNode
            self.tail = newNode
        else:
            self.tail.next = newNode
            self.tail = newNode

    def pop(self) -> Optional[Node]:
        if self.head is None:
            print("linked list underflow")
            return None
        value = self.head
        self.head = self.head.next
        return value

    def print(self):
        current = self.head
        while (current != None):
            print(current.data, " -> ", end=" ")
            current = current.next
        print(" ")
        if self.head is None:
            print("linked list underflow")

    def menu(self) -> None:
        print("1. push")
        print("2. pop")
        print("3. print")
        print("4. exit")


if __name__ == "__main__":
    ll: LinkedList = LinkedList()
    while (True):
        ll.menu()
        choice = int(input("Choice: "))
        if choice == 1:
            ll.push()
        elif choice == 2:
            ll.pop()
        elif choice == 3:
            ll.print()
        elif choice == 4:
            print("Thanks for using linked list")
            break
