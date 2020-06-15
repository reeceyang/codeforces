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

    int n, k;
    cin >> n >> k;

    int a[k];
    REP(i, 0, k - 1) {
        a[i] = 0;
    }

    REP(i, 1, n) {
        int ai;
        cin >> ai;
        a[ai - 1]++;
    }

    /*testing input
    REP(i, 0, k - 1) {
        cout << i + 1 << " " << a[i] << "\n";
    }*/

    int odds = 0;
    int total = 0;
    REP(i, 0, k - 1) {
        if (a[i] % 2 == 0) {
            total += a[i];
        } else {
            total += a[i] - 1;
            odds++;
        }
    }
    total += (odds + 1) / 2;
    cout << total;

}
