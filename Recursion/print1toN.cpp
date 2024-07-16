#include <bits/stdc++.h>
using namespace std;

void printNto1(int n)
{
    /*
  solve case1: 1 to n with in Recursion
    if (n > 0)    // base condition
    {
        printNto1(n - 1);
        cout << n;
    }10

    return;
 */
    // solve case2:1 to n with recursion
    if (n < 1)
    {
        return;
    }
    cout << n;
    printNto1(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}