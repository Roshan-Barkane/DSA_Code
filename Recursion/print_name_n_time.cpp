#include <bits/stdc++.h>
using namespace std;
void print_n_time(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Roshan" << endl;
    print_n_time(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    print_n_time(1, n);
    return 0;
}