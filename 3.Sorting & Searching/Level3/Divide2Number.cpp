#include <iostream>
using namespace std;
int getQuotient(int divisor, int dividend)
{

    int s = 0;
    int e = dividend;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            // store ans
            ans = mid;
            //  right me jao
            s = mid + 1;
        }
        else
        {
            //  left me jao
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    int divisor = 7;
    int dividend = -29;

    int ans = getQuotient(abs(divisor), abs(dividend));

    //  now we need to decide sign konsa lagaye +ve ya -ve

    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
    {
        ans = 0 - ans;
    }

    cout << "Final Ans is:" << ans << endl;
    return 0;
}