// queue is implemented with the help of array
#include <iostream>
#define MAXSIZE 10
using namespace std;
int array[MAXSIZE];
int rear = -1, front = 0;
void push(int data)
{
    if (MAXSIZE - 1 == front)
    {
        cout << "stack is overflow\n";
        return;
    }
    else
    {
        array[front] = data;
        front++;
    }
}
int pop()
{
    int temp;
    if ((front - rear) == 1)
    {
        cout << "\nqueue is empty";
    }
    else
    {
        rear++;
        temp = array[rear];

        cout << "\npoped element in queue is " << temp;
    }
}
int main()
{

    push(20);
    push(50);
    push(60);
    push(20);
    push(50);
    push(60);
    push(20);
    push(50);
    push(60);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}
