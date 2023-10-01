#include <iostream>
using namespace std;

int BinarySearchIndex(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int target;
    cout << "Enter the target element:";
    cin >> target;

    int ans = BinarySearchIndex(arr, n, target);
    cout << "Index of target element:" << ans;
    return 0;
}
