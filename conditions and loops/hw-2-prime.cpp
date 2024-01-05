/*Find Sum of All Even no's in 1 to n??*/

#include<iostream>

using namespace std;


int main(){
    int n;
    int sum=0;
    int i=1;
    cin>>n;

    while(i<=n){
        if(i%2 == 0){
            sum = sum + i;
        }
        i=i+1;
    }
    cout<<sum;
}