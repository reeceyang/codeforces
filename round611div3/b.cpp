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

    int t;
    cin >> t;

    REP(i, 1, t) {
        int n, k;
        cin >> n >> k;
        int a = n / k;
        int b = a + 1;
        cout << min((k / 2) * b + (k - k / 2) * a, n) << "\n";
    }
}
