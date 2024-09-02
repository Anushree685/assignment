#include<iostream>
#include<climits>
using namespace std;
int main (){
    int arr[5];
    cout<<"Enter elements of array : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<" is the largest."<<endl;
    int fact=1;
    for(int i=1;i<=max;i++){
        fact=fact*i;
    }
    cout<<"The factorial of the largest number is "<<fact;
} 

