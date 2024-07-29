#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert(node* &start, int data) {
    node *temp = new node(data);
    if (start == NULL) {
        start = temp;
    } else {
        node *current = start;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

void display(node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main() {
    node *head = NULL;
    int m;
    cout << "Enter the number of nodes to be created: ";
    cin >> m;
    int n;
    for (int i = 0; i < m; i++) {
        cout << "Enter the data: ";
        cin >> n;
        insert(head, n);
    }
    display(head);
    
}