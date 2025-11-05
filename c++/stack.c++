#include <iostream>

int array[2];
int length = sizeof(array) /sizeof(array[0]);
int top = -1;

int inputValue()
{
        int value;
        std::cout<<"Enter value: ";
        std::cin>> value;
        return value;
}

void pushInStack()
{
        if(top == length - 1)
        {
                std::cout<<"Stack overflow"<<std::endl;
                return;
        }
        int element = inputValue();
        top++;
        array[top] = element;
}

int popFromStack()
{
        if(top == -1)
        {
                std::cout<<"Stack underflow"<<std::endl;
                return -1;
        }
        int poppedValue = array[top];
        top--;
        return poppedValue;
}

void printArray()
{
        if(top <= -1)
        {
                std::cout<<"Stack underflow"<<std::endl;
        }
        for(int i = top; i >= 0; i--)
        {
                std::cout <<array[i]<<std::endl;
        }
}

void stackOptions()
{       
        std::cout<<"1. Push"<<std::endl;
        std::cout<<"2. Pop"<<std::endl;
        std::cout<<"3. Print"<<std::endl;
        std::cout<<"4. Exit"<<std::endl;

}



int main()
{       
        int choice;
        while(true)
        {
                stackOptions();
                std::cout<<"Choice: ";
                std::cin>>choice;
                if(choice == 4)
                {
                        std::cout<<"Thanks for using stack!"<<std::endl;
                        break;
                }
                switch(choice)
                {
                        case 1:
                        {
                                pushInStack();
                                break;
                        }
                        case 2:
                        {
                                int value = popFromStack();
                                std::cout<<"Popped value: "<<value<<std::endl;
                                break;
                        }
                        case 3:
                        {
                                printArray();
                                break;
                        }
                }

        }
}