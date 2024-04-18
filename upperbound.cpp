//upperbound : in a sorted array , the index at which the given element can be inserted at the end of its occurance [0,1,2,2,3,4] lb of 2 is 4
#include<iostream>

using namespace std;

int main(){
    int A[7]={0,1,2,2,2,3,4};
    int n=2;
    int i=0;
    while(A[i] <=n && n!=9){
        i++;
    }
    if(i==9){
        cout << i;
    }else{
        cout << i;
    }
}
