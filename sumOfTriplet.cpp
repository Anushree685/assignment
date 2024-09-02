#include<iostream>
#include<vector>
using namespace std;
int main (){
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int arr[5];
    cout<<"Enter elements of array : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                if(arr[i]+arr[j]+arr[k] == x) count++;
            }
        }
    }
    cout<<"The number of triplets whose sum is "<<x<<" are "<<count;
}