#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    for(int i=1;i<=num;i=i+1)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }

        
    }
}