//find elemenyt in sorted array
#include<iostream>

using namespace std;
int main(){
    int A[10]={0,1,2,3,4,5,6,7,8,9};
    int low=0;
    int high=9;
    int find=9;
    
    
    while(low<=high){
        int mid=(low+high)/2;
        if(A[mid]==find){
            cout << mid;
            break;
        }else if(A[mid]>find){
            high = mid-1;
        }else if(A[mid]<find){
            low = mid+1;
        }
    }
    return 0;


}