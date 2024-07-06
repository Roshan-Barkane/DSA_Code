#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin >> day;

    // problem no 1 : enter the any 1 to 7 no find day name
    switch (day)
    {
    case 1:
        cout << "Today its Monday";
        break;
    case 2:
        cout << "Today its Tuesday";
        break;
    case 3:
        cout << "Today its Wednesday";
        break;
    case 4:
        cout << "Today its Thursday";
        break;
    case 5:
        cout << "Today its Friday";
        break;
    case 6:
        cout << "Today its Saturday";
        break;
    case 7:
        cout << "Today its Sunday";
        break;

    default:
        cout << "your wrong enter no";
        break;
    }
}