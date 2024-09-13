#include<iostream>
using namespace std ; 
int main()
{
    //Array Create krna hai ,jo store krega address
    int  n , m ;
    cin>>n>>m;
    int **ptr = new int *[n];
    for(int i = 0 ; i<n ;i++)
    {
        ptr[i]=new int[m];

    }
    for(int i = 0 ; i<n; i++)
    for(int j = 0 ; j< m ; j++)
    cin>>ptr[i][j];

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        cout<<ptr[i][j]<<" ";
        cout<<endl;
    }
    //Release the memory , heap mein 
    for(int i = 0 ;i<n;i++)
    delete[]ptr[i];
    delete[] ptr;


}