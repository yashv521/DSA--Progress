#include<iostream>

using namespace std;

void PrintArray(int arr[], int size){

    cout<<"Printing the array" <<endl;

    for(int i=0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing DONE!!!"<<endl;
}

int main()
{
    //declare
    int number[15];

    //accessing an array>>
    cout<<"Value at 14th Index is\n"<<number[14]<<endl;

    //initializing an array
    int second[3] = {5, 7, 11};

    int third[15] = {2,7};
    int n= 15;

    // for(int i=0; i<n; i++)
    // {
    //     cout<<third[i]<<" ";
    // }
    //PrintArray(third, 15);
//initializing with zero
    int fourth[10] = {0};
    //int n1=10;

    //  for(int i=0; i<n1; i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }
    // cout<<endl;
    //PrintArray(fourth, 10);
    //initializing 1 will not make all elements 1
    int fifth[10] = {1};

    //  for(int i=0; i<n1; i++)
    // {
    //     cout<<fifth[i]<<" ";
    // }
   // PrintArray(fifth,10);
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth is "<< fifthSize<<endl;

    char ch[5]= {'a','b','c','d','e'};
    for(int i=0; i<5; i++){
        cout<<ch[i]<<" ";
    }


    cout<<endl<<"Everything is fine"<<endl<<endl;
}