#include<iostream>
using namespace std;
int sum(int m, int n)//function declare
{
    int ans = m+n;//function define
    return ans;
}
int mul(int m, int n)//function declare
{
    int ans = m*n;//function define
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter a 1 Number:";
    cin>>a;
    cout<<"Enter a 2 Number:";
    cin>>b;
    //function call 
    cout<<"sum=";
    cout<<sum(a,b);
    cout<<endl;
    cout<<"mul=";
    cout<<mul(a,b);

}