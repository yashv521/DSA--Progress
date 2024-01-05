#include<iostream>

using namespace std;

bool Search(int arr[], int size, int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == element){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {-2, 3, 5, 16, 22, 9, 7,-2, 12, 1};
    cout<<"Enter the size of key"<<endl;
    int key;
    cin>>key;

    bool found = Search(arr, 10, key);

    if(found) cout<<"Key Found"<<endl;
    else
    cout<<"Key not found"<<endl;

}