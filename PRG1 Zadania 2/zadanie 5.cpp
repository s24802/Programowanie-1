#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;


int main() {
    cout << "podaj zdanie" << endl;
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<string> words(istream_iterator<string>(iss), istream_iterator<string>{});
    cout << "{";
    for (vector<string>::iterator i = words.begin(); i != words.end(); ++i) {
        cout << *i << ", ";
    }
    cout << "}";
    return 0;
}
