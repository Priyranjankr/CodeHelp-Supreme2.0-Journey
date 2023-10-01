#include <iostream>
using namespace std;
int findMissingElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            //  right me jao
            s = mid + 1;
        }
        else
        {
            //  ans store kro
            ans = mid;
            //  left me jao
            e = mid - 1;
        }
    }
    //     HW no need of this
    if (ans + 1 == 0)
    {
        return n + 1;
    }
    return ans + 1;
}
int main()
{

    int arr[8] = {1, 2, 3, 4, 6, 7, 8, 9};
    //   find missing element
    // it show that aaray is sorted

    int ans = findMissingElement(arr, 8);
    cout << "Missing Element is:" << ans << endl;
    return 0;
}