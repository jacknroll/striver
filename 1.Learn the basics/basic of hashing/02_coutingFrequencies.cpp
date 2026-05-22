#include <bits/stdc++.h>

using namespace std;
/*
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

*/

///////////
// better way using map

/*
int main()
{
    map<string, int> people = {{"John", 12}, {"adi", 69}, {"mehta", 12}};
    cout << people["John"];
    cout << people["adi"];
    cout << people.at("adi");

    for (auto x : people)
    {
        cout << x.first << " " << x.second << endl;
    }
}

*/

// using map for storing

int main()
{

    int arr[] = {1, 2, 0, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto x : map)
    {
        cout << x.first << " " << x.second << endl;
    }
}