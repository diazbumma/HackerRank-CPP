#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (i != n-1) {
            cout << v.at(i) << " ";
        } else {
            cout << v.at(i) << endl;
        }
    }
    return 0;
}
