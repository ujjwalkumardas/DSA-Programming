#include <iostream>
using namespace std;
int main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        int frist = i;
        for (int j = i; j < 8; j++)
        {
            if (array[i] < array[j])
            {
                swap(array[i], array[j]);
                frist = j;
            }
        }
    }
     for(int k=0;k<8;k++){
            cout<<array[k];}
}
