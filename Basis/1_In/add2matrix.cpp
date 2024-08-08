#include<iostream>
using namespace std;
void printcol(int arr[][4],int row,int col)
{
    //col wise
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}
int main(){
    //create  array
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];
    //add 2 matrix
    int x=7;
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    {
        ans[row][col]=arr1[row][col]+arr2[row][col];
    }
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    cout<<ans[row][col]<<" ";

}