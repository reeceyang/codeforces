#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define TRAV(a, x) for (auto& a : x)

void setIO(string name) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}

void setIO() {
    ios_base::sync_with_stdio(0); cin.tie(0);
}

int main() {
    setIO();

    int t;
    cin >> t;

    REP(i, 1, t) {
        int a, b;
        cin >> a >> b;

        if (b <= a && 2 * b >= a) {
            cout << 4 * b * b << "\n";
        }
        if (b < a && 2 * b < a) {
            cout << a * a << "\n";
        }
        if (b > a && 2 * a >= b) {
            cout << 4 * a * a << "\n";
        }
        if (b > a && 2 * a < b) {
            cout << b * b << "\n";
        }
    }
}
