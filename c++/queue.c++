#include <iostream>

int array[3];
int length = sizeof(array) / sizeof(array[0]);
int start = 0;
int end = 0;

// input
int inputValue()
{
    int value;
    std::cout << "Enter value: ";
    std::cin >> value;
    return value;
}

// enqueue
void enqueue()
{
    if (end == length - 1)
    {
        std::cout << "Queue overflow" << std::endl;
        return;
    }
    int value = inputValue();
    array[end] = value;
    end++;
}

// dequeue
int dequeue()
{
    if (start == end)
    {
        std::cout << "Queue underflow" << std::endl;
        return -1;
    }
    int dequeueValue = array[start];
    start++;
    return dequeueValue;
}

// print queue
void printQueue()
{
    std::cout << "Printing Queue" << std::endl;
    if (start == 0)
    {
        std::cout << "Queue underflow" << std::endl;
        return;
    }
    for (int i = start; i <= end; i++)
    {
        std::cout << array[i] << " -> ";
    }
    std::cout << std::endl;
}

void printMenu()
{
    std::cout << "1. Enqueue" << std::endl;
    std::cout << "2. Dequeue" << std::endl;
    std::cout << "3. Print" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

int main()
{
    int choice = -1;
    while (true)
    {
        printMenu();
        std::cout << "choice: ";
        std::cin >> choice;
        if (choice == 4)
        {
            std::cout << "Thanks for using queue" << std::endl;
            break;
        }
        switch (choice)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            int value = dequeue();
            std::cout << "Dequeued value: " << value << std::endl;
            break;
        }
        case 3:
        {
            printQueue();
            break;
        }
        }
    }
}