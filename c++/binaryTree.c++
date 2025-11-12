#include <iostream>

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class BinaryTree
{
    private:
        Node* root;
    public:
        BinaryTree()
        {
            root = nullptr;
        }

        int inputData()
        {
            int value;
            std::cout<<"Value: ";
            std::cin>>value;
            return value;
        }

        Node* setNewNode(int value)
        {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->left = nullptr;
            newNode-> right = nullptr;
            return newNode;
        }

        void insert()
        {
            int value = inputData();
            Node* newNode = setNewNode(value);
            if(root == nullptr)
            {
                root = newNode;
            } else {

            }
        }
};

