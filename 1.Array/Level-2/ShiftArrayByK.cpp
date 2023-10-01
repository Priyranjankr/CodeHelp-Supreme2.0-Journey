#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
       int arr[6]= {10,20,30,40,50,60};
    //     k =2;

    //    o/p-->> {50,60,10,20,30,40}
     int k = 2;
     int n = 6;
     vector<int> temp(k);

     for(int i = n-1;i > n-1 -k;i--){
        temp.push_back(arr[i]);
     }

    //   shift by k
    for(int i = n-1;i >= 0;i-- ){
        arr[i] = arr[i -k];
    }

    //  copy to main array

    for(int i = 0;i<k;i++){
        arr[i] = temp[i];
    }

    //  print array
    cout<<"Array After K Shift: ";
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
 return 0;
}