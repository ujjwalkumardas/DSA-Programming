/*array initialzation*/
#include<iostream>
using namespace std;
int main(){
//(case -1)
cout<<"(case - 1)\n";
    int arr1[3]={1,2,3};
    cout<<arr1[0]<<arr1[1]<<arr1[2];
    cout<<endl<<endl;
//(case -2)
cout<<"(case - 2)\n";
     int arr2[3]={1,2,3};
    cout<<arr2[0]<<arr2[5]<<arr2[9];
    cout<<endl<<endl;
//(case -3)
cout<<"(case - 3)\n";
     int arr3[]={1,2,3};
    cout<<arr3[0]<<arr3[1]<<arr3[2];
    cout<<endl<<endl;
//(case -4)
cout<<"(case - 4)\n";
     int arr4[]={1,2,3};
    cout<<arr4[0]<<arr4[1]<<arr4[9];
    cout<<endl<<endl;
//(case -5)
cout<<"(case - 5)\n";
     int arr5[9]={1,2,3};
    cout<<arr5[0]<<arr5[1]<<arr5[8];
    cout<<endl<<endl;
//(case -6)
cout<<"(case - 6)\n";
     int arr6[3]={1};
    cout<<arr6[0]<<arr6[1]<<arr6[2];
    cout<<endl<<endl;
//(case -7)
cout<<"(case - 7)\n";
     int arr7[3];
    cout<<arr7[0]<<" "<<arr7[1]<<" "<<arr7[5];
    cout<<endl<<endl;
}