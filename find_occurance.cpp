//goal min time complexity for sorted array
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v={2,3,4,5,5,5,5,8,9,10};
    int low=0;
    int high=9;
    int find=5;
    int count=0;
    int i=1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==find){
            count++;
            break;
        }else if(v[mid]>find){
            high = mid-1;
        }else if(v[mid]<find){
            low = mid+1;
        }
    }
    while(mid-i >=0 && v[mid-i]==find){
        count++;
        i++;
    }
    i=1; 
     while(mid+i < v.size() && v[mid+i]==find){
        count++;
        i++;
    }
    cout << count << endl;

}