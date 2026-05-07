// STANDARD TEMPLATE LIBRARY

// // #include <iostream>
// // #include <math.h>
// // #include <string.h>
// #include <bits/stdc++.h>
// using namespace std;

// void print()
// {
//     cout << "raj";
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     // int a;
//     // cin >> a;
//     print();
//     int s = sum(1, 5);
//     cout << s;

//     return 0;
// }\


////Containers
// algorithms
// containers
// functions
// iterators

///////////////pair/////////////////

// #include <bits/stdc++.h>
// using namespace std;

// /// pair

// void explainPair()
// {
//     // pair<int, int> p = {1, 3};
//     // cout << p.first << endl;
//     // cout << p.second << endl;

//     // nested property to store 3 variables
//     pair<int, pair<int, int>> p = {1, {3, 4}};
//     cout << p.first << endl;
//     cout << p.second.first << endl;
//     cout << p.second.second << endl;

//     // pair array
//     pair<int, int>
//         arr[] = {{1, 2}, {2, 5}, {5, 1}};
//     cout << arr[1].second << endl;
// }

// int main()
// {
//     explainPair();

//     return 0;
// }

////////////////////////VECTORS////////////////////////////

/*

#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    // vector as a int storing container
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // vector used to store pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    // vectors size and values defining
    vector<int> v1(5, 100);
    // vector size without value so all 0
    vector<int> v2(5);

    vector<int> v3(5, 20);
    vector<int> v4(v3);
    /////// ACCESSING VECTORS ELEMENT/////////////////////////
    cout << v[0] << endl;
    cout << v.at(0) << endl;

    // ITERATORS///
    vector<int>::iterator it = v.begin();
}

int main()

{
    explainVector();
    return 0;
}

*/

/*
// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    return 0;

}

*/

/*

////pairs
#include <iostream>
using namespace std;

void explainPair()
{
    pair<int, int> pOne = {1, 3};

    cout << pOne.first << " " << pOne.second << endl;

    pair<int, pair<int, int>> pTwo = {4, {5, 6}};
    cout << pTwo.first << " " << pTwo.second.first << " " << pTwo.second.second << endl;

    pair<int, int> arr[] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}};
    cout << arr[2].first << endl;
    cout << arr[0].first << endl;

    pair<int, string> pThree = {1, "Me"};
    cout << pThree.first << " " << pThree.second;
}


int main()
{
    explainPair();
    return 0;
}

*/

/*

//////////////VECTOR////////////////////////////////
1.resizable array
2.to store only similar data type
3.array size fixed while vector size can be modified
*/

#include <iostream>
#include <vector>
using namespace std;

int explainVector()
{
    vector<string> cars = {"bmw", "volvo", "suzuki"};
    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(0) << endl;
    cout << cars.at(1) << endl;
    cout << cars.at(2) << endl;
    cout << cars.at(5) << endl;
}

int main()
{
    explainVector();
    return 0;
}