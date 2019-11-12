#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> a[n];
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int input;
            cin >> input;
            a[i].push_back(input);
        }
    }
    for (int i = 0; i < q; i++) {
        int indexA;
        int indexK;
        cin >> indexA >> indexK;
        cout << a[indexA].at(indexK) << endl;
    }
    return 0;
}
