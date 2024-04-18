//LOWERbound : in a sorted array , the index at which the given element can be inserted
#include<iostream>

using namespace std;

int main(){
    int A[9]={0,1,2,3,5,6,7,8,9};
    int n=6;
    int i=0;
    while(A[i] <n && n!=9){
        i++;
    }
    if(i==9){
        cout << i;
    }else{
        cout << i;
    }
}
