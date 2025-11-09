#include <iostream>

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    int input()
    {
        int value;
        std::cout << "Enter value: ";
        std::cin >> value;
        return value;
    }

    void push()
    {
        int value = input();
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        Node *current = head;
        int value = current->data;
        std::cout << "Popped value: " << value << std::endl;
        head = current->next;
        delete current;
    }

    void print()
    {
        Node *current = head;
        if (current == nullptr)
        {
            std::cout << "Linked List underflow" << std::endl;
        }
        while (current != nullptr)
        {
            std::cout << current->data;
            if (current->next != nullptr)
            {
                std::cout << " -> ";
            }
            current = current->next;
        }
        std::cout << std::endl;
    }

    void menu()
    {
        std::cout << "1. push" << std::endl;
        std::cout << "2. pop" << std::endl;
        std::cout << "3. print" << std::endl;
        std::cout << "4. exit" << std::endl;
    }
};

int main()
{
    LinkedList ll;
    int choice;
    while (true)
    {
        ll.menu();
        std::cout << "choice: ";
        std::cin >> choice;
        if (choice == 4)
        {
            std::cout << "Thanks for using Linked List" << std::endl;
            break;
        }
        switch (choice)
        {
        case 1:
        {
            ll.push();
            break;
        }
        case 2:
        {
            ll.pop();
            break;
        }
        case 3:
        {
            ll.print();
            break;
        }
        }
    }
    return 0;
}