#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=9;row>=1;row=row-1)
    {
        for(col=1;col<=9-row;col=col+1)
        cout<<" ";
        for(col=1;col<=2*row-1;col=col+1)
        cout<<"* ";
        
        cout<<endl;
    }

}