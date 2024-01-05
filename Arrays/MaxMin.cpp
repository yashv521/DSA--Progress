#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(num[i] > max) max = num[i];

    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(num[i] < min) min = num[i];

    }
    return min;
}

int main(){

    int size;
    cout<<"Enter the size of Array"<<endl;
    cin>>size;

    int num[100]; // variable declare krne se behtar hai ye

    //taking input in array
    cout<<"Please Enter the Values for array of size"<<size<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>num[i];
    } 

    cout<<"Maximum Value is\n"<<getMax(num,size)<<endl;

    cout<<"Minimum Value is\n"<<getMin(num,size)<<endl;


}