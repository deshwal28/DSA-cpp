#include<iostream>
using namespace std;
void printcol(int arr[][4],int row,int col)
{
    //col wise
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}
void printrowmax(int arr[][4],int row,int col){
    int index =-1,sum = INT16_MIN;
    for(int i=0;i<row;i++)
    {
        int total=0;
        for(int j=0;j<col;j++)
        total+=arr[i][j];

        if(total>sum){
            sum=total;
            index=i;
        }
    }
    cout<<index<<" ";
}
void printsumdig(int matrix[][3],int row,int col)
{
    int first =0;
    int sec= 0;
    //first  diagonal
    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    //second diagonal
    i=0;
    int j=col-1;
    while(j>=0)
    {
        sec+=matrix[i][j];
        i++;
        j--;
    }
    cout<<first<<" "<<sec<<" ";
}
void wave(int arr[][4],int row,int col)
{
    for(int j = 0;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else
        {
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }

}

int main(){
    //create  array
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];
    //add 2 matrix
    int x=17;

    //wave print 
    wave(arr1,3,4);
}
