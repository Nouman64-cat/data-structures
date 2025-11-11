#include <iostream>

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList
{
    private:
        Node* head;
        Node* tail;

    public:
        DoublyLinkedList()
        {
            head = nullptr;
            tail = nullptr;
        }

        int input()
        {
            int value;
            std::cout<<"Value: ";
            std::cin>>value;
            return value;
        }

        void push()
        {
            Node* newNode = new Node();
            newNode->data = input();
            newNode->prev = nullptr;
            newNode->next =  nullptr;

            if(head == nullptr)
            {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }

        void pop()
        {
            if(head == nullptr)
            {
                std::cout<<"Doubly Linked List underflow"<<std::endl;
                return;
            }
            head = head->next;
            delete head->prev;
            head->prev=nullptr;
        }

        void print()
        {
            if(head == nullptr)
            {
                std::cout<<"Doubly Linked List underflow"<<std::endl;
                return;
            }
            Node* current = head;
            while(current != nullptr)
            {
                std::cout<<current->data;
                if(current->next != nullptr)
                {
                    std::cout<<" -> ";
                }
                current = current->next;
            }
            std::cout<<std::endl;
        }

        void menu()
        {
            std::cout<<std::endl;
            std::cout<<"1. push"<<std::endl;
            std::cout<<"2. pop"<<std::endl;
            std::cout<<"3. print"<<std::endl;
            std::cout<<"4. exit"<<std::endl;
            std::cout<<std::endl;
        }

};

int main()
{
    DoublyLinkedList dll;
    int choice;
    while(true)
    {
        dll.menu();
        std::cout<<"Choice: ";
        std::cin>>choice;
        if(choice == 4)
        {
            std::cout<<"Thanks for using Doubly Linked List"<<std::endl;
            break;
        }
        switch(choice)
        {
            case 1:
            {
                dll.push();
                break;
            }
            case 2:
            {
                dll.pop();
                break;
            }
            case 3:
            {
                dll.print();
                break;
            }
        }
    }
    return 0;
}