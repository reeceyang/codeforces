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

    int numQueries;
    cin >> numQueries;

    REP(i, 1, numQueries) {
        ll n;
        cin >> n;
        ll d = n;
        vll thing;
        while (d > 1) {
            ll b = (ll) floor(sqrt(2 * d));
            thing.PB(b);
            d = d - (b * (b - 1) / 2);
        }
        /*for (auto x : t`hing) {
            cout << x << " ";
        }*/
        ll thingsize = thing.size();
        for (int i = 0; i < thingsize - 1; i++) {
            cout << "1";
            REP(j, 1, thing[i] - thing[i + 1]) {
                cout << "3";
            }
        }
        if (d == 1) {
            if (n != 1) {
                cout << "1";
                REP(j, 1, thing[thingsize - 1] - 2) {
                    cout << "3";
                }
            }
            cout << "1337\n";
        } else {
            cout << "1";
            REP(j, 1, thing[thingsize - 1] - 2) {
                cout << "3";
            }
            cout << "7\n";
        }
    }

}
