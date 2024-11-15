#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string t;

    cin >> n;

    cin >> t;

    int position = 0;
    int step = 1;
    string s;

    while (position < n)
    {

        s += t[position];

        position += step;
        step++;
    }

    cout << s << endl;

    return 0;
}