#include<iostream>
using namespace std;

class Node
{ 
public: 
	int data; 
	Node* next; 
};

void print(struct Node *head)
{
    struct Node *node = head;
    while(node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

Node* newNode(int key) 
{ 
	Node* temp = new Node; 
	temp->data = key; 
	temp->next = NULL; 
	return temp; 
} 

void insert(Node **head, int value)
{
    Node *last = *head;
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next = NULL;
    
    if(*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
    }
}

void pairWiseSwap(Node* head) 
{ 
	Node* temp = head; 
	if(head == NULL)
	{
	    cout << "List is empty";
	    return;
	}

	while (temp != NULL && temp->next != NULL) { 

		swap(temp->data, 
			temp->next->data); 

		temp = temp->next->next; 
	} 
}

int main()
{
    Node* head = NULL;
    int elements;
    while(1)
    {
        cin >> elements;
        if(elements >= 0)
        {
            insert(&head, elements);
        }
        else
        {
            break;
        }
    }

    pairWiseSwap(head);
    
    
    print(head);
}
