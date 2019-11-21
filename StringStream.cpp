#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> v;
    stringstream s(str);
    int number;
    char comma;
    while (s >> number >> comma) {
        v.push_back(number);
    }
    s >> number;
    v.push_back(number);
	return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
