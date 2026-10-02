#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumSumSubarray(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<long long> v(n);
        v[0] = arr[0];
        for (int i = 1; i < n; i++)
            v[i] = v[i - 1] + arr[i];
        int l = 0, r = k - 1;
        long long sum = v[r];
        for (int i = r + 1; i < n; i++)
        {
            long long wind = v[i] - v[i - k];
            sum = max(sum, wind);
        }
        return sum;
    }
};

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}