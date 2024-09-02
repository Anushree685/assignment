#include<iostream>
using namespace std;
int main (){
    cout<<"Enter the size of array : ";
    int x;
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        bool flag =0;
        for(int j=0;j<x;j++){
            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag = 1;
            }
        }
        if(flag==0){
            cout<<arr[i]<<" is the first non-repeating element in array .";
            break;
        }
    }
}