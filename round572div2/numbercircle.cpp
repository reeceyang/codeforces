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

    vi a;
    REP(i, 1, n) {
        int ai;
        cin >> ai;
        a.PB(ai);
    }

    sort(a.begin(), a.end());
    if (a[n - 2] + a[n - 3] > a[n - 1]) {
        cout << "YES\n";
        REP(i, 0, n - 3) {
            cout << a[i] << " ";
        }
        cout << a[n - 1] << " " << a[n - 2];
    } else {
        cout << "NO";
    }
}
