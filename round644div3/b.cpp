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
        int n;
        cin >> n;
        vi athletes;
        REP (i, 1, n) {
            int s;
            cin >> s;
            athletes.PB(s);
        }
        sort(athletes.begin(), athletes.end());
        int min = athletes[n - 1];

        REP(j, 1, n - 1) {
            if (athletes[j] - athletes[j - 1] < min) {
                min = athletes[j] - athletes[j - 1];
            }
        }

        cout << min << "\n";
        /*if (n % 2 == 0) {
            cout << abs(athletes[n/2] - athletes[n/2 - 1]) << "\n";
        } else {
            if (abs(athletes[n/2] - athletes[n/2 - 1]) > abs(athletes[n/2] - athletes[n/2 + 1])) {
                cout << abs(athletes[n/2] - athletes[n/2 + 1]) << "\n";
            } else {
                cout << abs(athletes[n/2] - athletes[n/2 - 1]) << "\n";
            }
        }*/
    }
}
