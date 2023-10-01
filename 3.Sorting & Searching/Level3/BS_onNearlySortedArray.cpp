#include <iostream>
using namespace std;

int searchNearlySorted(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid - 1 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target > arr[mid])
        {
            //  right me
            //  s = mid +1 ; -->> it comapre one extra element
            s = mid + 2;
        }
        else
        {
            //  left me
            //  e = mid - 1 ; -->> it comapre one extra element
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{

    int arr[7] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 60;

    int targetIndex = searchNearlySorted(arr, n, target);

    if (targetIndex == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "target found at index:" << targetIndex << endl;
    }
    return 0;
}