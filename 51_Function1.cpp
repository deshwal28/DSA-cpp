#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n>2)
    return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int Fact(int n)
{
    int ans =1;
    for(int i=1;i<=n;i++)
    ans =ans*i;
    return ans ;
}
int main(){
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter a second number:";
    cin>>b;
    cout<<prime(a)<<endl;
    cout<<Fact(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<Fact(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<Fact(b-a)<<endl;
}