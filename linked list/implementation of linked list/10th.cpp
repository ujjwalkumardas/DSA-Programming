/*inseting the data ,end of the linked list*/
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
void insert(node *&start, int data)
{
    node *temp = new node(data);
    if (start == NULL)
    {
        start= temp ;
    }
    else
    {
        node *current = start;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}
void display(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}
int main()
{
    node *head= NULL;
    
    int m;
    cout << "enter the no of node is created = ";
    cin >> m;
    int n;
    for (int i = 1; i <= m; i++)
    {
        
            cout << "enter the data = ";
            cin >> n;
            insert(head, n);
        
    }
    display(head);
}
