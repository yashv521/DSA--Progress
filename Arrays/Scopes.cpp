#include<iostream>

using namespace std;

void update(int arr[], int n)
{
    cout<<endl<<"inside the function"<<endl;

    //updating arrays first element
    arr[0]=120;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"End of the function"<<endl;

}

int main()
{

int arr[3] = {1,2,3};

update(arr,3);

cout<<"Main function output"<<endl;
for(int i=0; i<3; i++)
{
    cout<<arr[i]<<" ";
}

}