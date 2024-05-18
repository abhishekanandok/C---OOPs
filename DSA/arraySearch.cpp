#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    // Function to find the largest element in the array.
    int largest(vector<int> &arr, int n)
    {
        int max_no = arr[0];
        // iterating through the array to find the maximum element.
        for (int i = 1; i < n; i++)
        {
            // if current element is greater than the maximum element found so far,
            // update the maximum element.
            if (arr[i] > max_no)
            {
                max_no = arr[i];
            }
        }
        return max_no;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}