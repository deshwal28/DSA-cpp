#include<iostream>
using namespace std;
int main()
{

    int arr[10000];
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter the Element in Array:";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    for (int i=0;i<n-1;i++)
    {
        int index = i ;
        for(int j =i+1;j<6;j++)
        {
            if(arr[j]<arr[index])
            index=j;

        }
        swap(arr[i],arr[index]);

  
    }
    for(int i =0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    }