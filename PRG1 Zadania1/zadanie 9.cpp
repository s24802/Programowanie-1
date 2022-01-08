#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        cout << "jest palindromem.\n";
    else
        cout << "nie jest palindromem.\n";
}
