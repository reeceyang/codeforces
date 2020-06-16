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

    REP(q, 1, t) {
        int n;
        cin >> n;
        int oddBad = 0, evenBad = 0;
        REP(i, 0, n - 1) {
            int a;
            cin >> a;
            if (i % 2 == 0 && a % 2 != 0) {
                evenBad++;
            }
            if (i % 2 != 0 && a % 2 == 0) {
                oddBad++;
            }
        }
        if (evenBad == 0 and oddBad == 0) {
            cout << "0\n";
        } else if (evenBad == oddBad) {
            cout << evenBad << "\n";
        } else {
            cout << "-1\n";
        }
    }
}
