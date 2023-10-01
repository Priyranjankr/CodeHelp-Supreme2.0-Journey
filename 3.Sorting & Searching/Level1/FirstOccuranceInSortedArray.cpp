#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int AnsIndex = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            AnsIndex = mid;
            e = mid - 1;
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
    return AnsIndex;
}

int LastOccu(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int lastIndex = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            lastIndex = mid;
            s = mid + 1;
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
    return lastIndex;
}

int main()
{

    int arr[10] = {10, 20, 30, 30, 30, 30, 40, 50, 60, 60};

    int target = 30;
    int firstOccurance = FirstOcc(arr, 10, target);
    cout << "First Occurance at index:" << firstOccurance << endl;
    
    int lastOccurance = LastOccu(arr, 10, target);
    cout << "Last Occurance at index:" << lastOccurance << endl;

    int totalOccu = lastOccurance - firstOccurance + 1;

    cout << "Total Occurance of Target element is:" << totalOccu << endl;
    return 0;
}