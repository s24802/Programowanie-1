#include <iostream>
#include "vector"
#include <sstream>
#include "bits/stdc++.h"
using namespace std;
int main(int argc, char** argv)
{
    int number;
    string line;
    vector<int> a;
    cout << "podaj srednia kazdego ze studentow. Oceny musza byc oddzielone spacjami: \n";
    getline(cin, line);
    istringstream stream(line);
    while (stream >> number)
        a.push_back(number);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "\nStudent z najwyzsza srednia = "
         << *max_element(a.begin(), a.end());
    return 0;
}
