#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    cout<<"Element of array are: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
     int arr[5];
     int n = 5;
     for(int i =0;i<n;i++){
        cin>>arr[i];
     }
     PrintArray(arr,n);
 return 0;
}