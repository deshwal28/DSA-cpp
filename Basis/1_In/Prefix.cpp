#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr)
{
    int prefix=0,total_sum=0,n=arr.size();
    for(int i = 0;i<n;i++)
    total_sum+=arr[i];

    for(int i = 0 ;i<n;i++)
    {
        prefix+=arr[i];
        if(total_sum==2*prefix)
        return 1;
    }
}
int main()
{
    int n ; 
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element in Array:";
    for(int i = 0 ;i<n;i++)
    cin>>v[i];

    cout<<divide(v);

}