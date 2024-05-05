#include<iostream>
using namespace std ;
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    cout<<"Factor of "<< num <<" are : ";
    int i=1;
    while(i<=num){
        if(num%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
    return 0;

}
