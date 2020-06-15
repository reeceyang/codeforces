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

    string s;
    cin >> s;

    vector<size_t> os;
    vector<size_t> vvs;

    int ssize = s.size();
    REP(i, 0, ssize - 2) {
        if (s.at(i) == 'o') {
            os.PB(i);
        } else {
            if (s.at(i + 1) == 'v') {
                vvs.PB(i);
            }
        }
    }

    /*REP(i, 0, vvs.size() - 1) {
        cout << vvs[i] << " ";
    }*/

    ll osize = os.size();
    ll vvsize = vvs.size();
    ll wowfactor = 0;
    REP(i, 0, osize - 1) {
        auto pos = upper_bound(vvs.begin(), vvs.end(), os[i]);
        wowfactor += (vvsize - (pos - vvs.begin())) * (pos - vvs.begin());
    }

    cout << wowfactor;
}
