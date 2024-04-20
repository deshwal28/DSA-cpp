#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int Count =1;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<< Count<<" ";
            Count = Count+1;
        }
        cout<<endl; 
        
    }
}
 