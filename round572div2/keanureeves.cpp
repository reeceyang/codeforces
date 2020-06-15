#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<char> s;
    int ones = 0, zeros = 0;
    REP(i, 1, n) {
        char c;
        cin >> c;
        if (c == '1') {
            ones++;
        } else {
            zeros++;
        }
        s.PB(c);
    }
    if (ones != zeros) {
        cout << "1\n";
        for (auto c : s) {
            cout << c;
        }
    } else {
        cout << "2\n";
        REP(i, 0, n - 2) {
            cout << s[i];
        }
        cout << " " << s[n - 1];
    }
}
