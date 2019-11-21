#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    cin >> q;
    cin >> a >> b;
    v.erase(v.begin()+(q-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        if (i != v.size()-1) {
            cout << v.at(i) << " ";
        } else {
            cout << v.at(i) << endl;
        }

    }
    return 0;
}
