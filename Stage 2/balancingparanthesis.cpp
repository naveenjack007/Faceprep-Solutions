#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std; 
class Node
{
    public:
        char data;
        Node *next;
}*head = NULL;

void insert(char data)
{
    Node *temp = head;
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL)
        head = newnode;
    else
    {
        head = newnode;
        newnode->next = temp;
    }
}
void pop()
{
    Node *temp = head;
    Node *temp1 = head->next;
    head = temp1;
    temp->next = NULL;
    free(temp);
}
char top()
{
    return (head->data);
}
int areParanthesisBalanced(char expr[]) 
{ 
    char x; 
    for(int i=0; i<strlen(expr); i++) 
    { 
        if(expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            insert(expr[i]); 
            continue; 
        } 
        if (head == NULL) 
           return 0; 
        switch (expr[i]) 
        { 
            case ')': x = top(); 
                        pop(); 
                        if (x=='{' || x=='[') 
                            return 0; 
                        break; 
  
            case '}': 
                x = top(); 
                pop(); 
                if (x=='(' || x=='[') 
                    return 0; 
                break; 
  
            case ']': 
                x = top(); 
                pop(); 
                if (x =='(' || x == '{') 
                    return 0; 
                break; 
        } 
    } 
    return 1; 
}
int main() 
{ 
    char s[30];
    cin>>s;
    if (areParanthesisBalanced(s)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
}
