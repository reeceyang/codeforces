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

    int n;
    cin >> n;

    vll a;
    REP(i, 1, n) {
        int ai;
        cin >> ai;
        a.PB(ai);
    }

    ll sum = 0;
    REP(i, 0, n - 1) {
        REP(j, i + 1, n - 1) {
            if ((a[i] | a[j]) > a[i] && a[i] > a[j]) {
                ll temp = a[i];
                a[i] = a[i] | a[j];
                a[j] = temp & a[j];
            } else if ((a[i] | a[j]) > a[j] && a[j] > a[i]) {
                ll temp = a[j];
                a[j] = a[i] | a[j];
                a[i] = temp & a[i];
            }
            // break if all bits are set
            if (((a[i] + 1) & a[i]) == 0) {
                //cout << a[i] << "breaking" << "\n";
                break;
            }
        }
        //cout << i << " " << a[i] << "\n";
        sum += a[i] * a[i];
    }

    cout << sum;
}
