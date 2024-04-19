#include<iostream>
using namespace std;
void fibonacci(int n){
    int first =0,second=1,next;
    for(int i=0;i<n;++i){
        cout<<first<<" ";
            next= first + second;
            first = second;
            second= next;
        }
    }
    int main(){
        int numTerms;
        cout<<"Enter a number:";
        cin>>numTerms;
        fibonacci(numTerms);
        return 0;
    }
