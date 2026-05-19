#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> countfrequencies(vector<int> &arr, int n)
{
    int hash[13] = {0};
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < 13; i++)
    {
        ans.push_back({i, hash[i]});
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 2, 1, 3};
    int n = arr.size();
    // countfrequencies(arr, n);
    vector<vector<int>> result = countfrequencies(arr, n);

    for (auto x : result)
    {
        cout << "[" << x[0] << "," << x[1] << "] ";
    }
    return 0;
}