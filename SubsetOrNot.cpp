#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the size of both array : ";
    cin>>x>>y;
    int arr1[x],arr2[y];
    cout<<"Enter elements of first array : ";
    for(int i=0;i<x;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array :";
    for(int i=0;i<y;i++){
        cin>>arr2[i];
    }
    int count=0;
    for(int i=0;i<x;i++){
        bool  flag = 0;
        for(int j=0;j<y;j++){
            if(arr1[i]==arr2[j]) flag = 1;
        }
        if(flag == 1) count++;
    }
    int count1=0;
    for(int i=0;i<y;i++){
        bool  flag = 0;
        for(int j=0;j<x;j++){
            if(arr1[i]==arr2[j]) flag = 1;
        }
        if(flag == 1) count1++;
    }    
    if(count == x) {
        cout<<"1st array is subset of 2nd array .";
    }
    else {
        if(count1 == y) cout<<"2nd array is subset of 1st array.";
        else cout<<"None is subset.";
    }
}