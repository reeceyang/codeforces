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

    ll row1[n];
    ll row2[n];

    REP(i, 0, n - 1) {
        ll player;
        cin >> player;
        row1[i] = player;
    }
    REP(i, 0, n - 1) {
        ll player;
        cin >> player;
        row2[i] = player;
    }

    /* testing input
    REP(i, 0, n - 1) {
        cout << row1[i] << " ";
    }
    cout << "\n";
    REP(i, 0, n - 1) {
        cout << row2[i] << " ";
    }*/

    ll maxsum1[n];
    ll maxsum2[n];
    ll currentmax1 = 0;
    ll currentmax2 = 0;

    REP(i, 0, n - 1) {
        maxsum1[i] = currentmax2 + row1[i];
        maxsum2[i] = currentmax1 + row2[i];
        if (maxsum1[i] > currentmax1) {
            currentmax1 = maxsum1[i];
        }
        if (maxsum2[i] > currentmax2) {
            currentmax2 = maxsum2[i];
        }
    }
    /* testing solution
    REP(i, 0, n - 1) {
        cout << maxsum1[i] << " ";
    }
    cout << "\n";
    REP(i, 0, n - 1) {
        cout << maxsum2[i] << " ";
    }*/

    if (maxsum1[n - 1] > maxsum2[n - 1]) {
        cout << maxsum1[n - 1];
    } else {
        cout << maxsum2[n - 1];
    }
}
