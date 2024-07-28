#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data;
            head = head->next;
        }
    }
}
int main()
{
    node *head;
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    display(head);
}