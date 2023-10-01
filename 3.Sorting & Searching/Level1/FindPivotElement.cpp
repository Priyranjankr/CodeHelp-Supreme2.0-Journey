 #include <iostream>
using namespace std;

int pivotElement(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int pivot = -1;
    if(s == e){
        return s;
    }
    while (s < e)
    {       
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid - 1])
        {
            pivot = mid - 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            pivot = mid;
        }
        else if (arr[s] >= arr[mid])
        {
            e = mid ;
        }
        else
        {
            s = mid + 1;
        }
    }
    return pivot;
}
int main()
{
    int arr[8] = {12, 14, 16, 2, 4, 6, 8, 10};
    int n = 8;

    int ans = pivotElement(arr, n);

    cout<<"pivot index is:"<<ans<<endl;

    return 0;
}