#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int target = 10;
    int n = 6;

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            flag = 1;  // found
            break;
        }
    }

    if(flag ==1){
        cout<<"Target found"<<endl;

    }else{
        cout<<"Target not Found"<<endl;
    }
    return 0;
}