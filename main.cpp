#include <iostream>

using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    string w[n];
    for (string &i : w) {
        cin >> i;
    }
    
    int s = 0;
    for (int i = 0; i < n - 1; ++i) {
        cout << w[i];

        s += w[i].size();
        if (k >= s + w[i + 1].size()) {
            cout << " ";
        }
        else {
            cout << endl;
            s = 0;
        }
    }
    cout << w[n - 1] << endl;

    return 0;
}
