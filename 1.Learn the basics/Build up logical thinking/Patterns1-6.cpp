// //1.Pattern 1
// Subscribe to TUF+

// Hints
// Company
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *****

// *****

// *****

// *****

// *****

// Print the pattern in the function given to you.

/*

#include <iostream>
using namespace std;

int printPattern(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 3;
    printPattern(n);
}

*/

//////////////////////// Pattern 2////////////////////////////////////

// Hints
// Company
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *

// **

// ***

// ****

// *****

// Print the pattern in the function given to you.

/*
#include <iostream>
using namespace std;

int printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPattern(n);
}
*/

////PATTERN3/////////////////
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1

// 12

// 123

// 1234

// 12345

/*

#include <iostream>
using namespace std;

int printPatternThree(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPatternThree(n);
}


*/

////////////////PATTERN4//////////////////////

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1

// 22

// 333

// 4444

// 55555
/*

#include <iostream>
using namespace std;

int printPatternFour(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPatternFour(n);
}

*/

//////////////////////////////////PATTERN5////////////////////////

// Pattern 5

// Company
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *****

// ****

// ***

// **

// *
/*
#include <iostream>
using namespace std;

int printPatternFive(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)

        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPatternFive(n);
}
*/

/////////////////////PATTERN6///////////////////////////////

/*

Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



12345

1234

123

12

1



Print the pattern in the function given to you.

*/
/*
#include <iostream>
using namespace std;

int printPatternFive(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)

        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPatternFive(n);
}
*/

//////////////////PATTERN6//////////////////

#include <iostream>
using namespace std;

void patternSix(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << n - j + 1;
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    patternSix(n);
    return 0;
}

//////////////////PATTERN7////////////////////////

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//     *
//    ***
//   *****
//  *******
// *********

/*
// Print the pattern in the function given to you.
#include <iostream>
using namespace std;

void printPatternSeven(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 ^ i + 1; k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 2;
    printPatternSeven(n);
}

*/