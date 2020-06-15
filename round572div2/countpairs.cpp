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

    int n, p, k;
    cin >> n >> p >> k;

    vi a;
    REP(i, 1, n) {
        int ai;
        cin >> ai;
        a.PB(ai);
    }

    int pairs = 0;
    REP(i, 0, n - 1) {
        REP(j, i + 1, n - 1) {
            if ((a[i] + a[j]) * (a[i] * a[i] + a[j] * a[j]) % p == k) {
                pairs++;
            }
        }
    }
    cout << pairs;
}
