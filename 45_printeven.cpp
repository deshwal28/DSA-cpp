#include<iostream>
using namespace std ;
int main(){
    int n;

    cout<<"Enter a number:";
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        //even
        if(i%2==0)
        //odd
        //if(i%2!=0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
    return 0;
}