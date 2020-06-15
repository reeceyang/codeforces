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
    vector<vi> seq;
    vi seq0;
    REP(i, 1, n) {
        int si;
        cin >> si;
        seq0.PB(si);
    }
    seq.PB(seq0);

    int length = n - 1;
    int prevrow = 0;
    int pow2 = 1;
    while (length > 0) {
        vi seqrow;
        REP(i, 0, length - 1) {
            seqrow.PB((seq[prevrow][i] % 10) + (seq[prevrow][i + pow2] % 10));
        }
        seq.PB(seqrow);
        prevrow++;
        pow2 *= 2;
        length -= pow2;
    }

    /* testing input
    for (auto x : seq) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << "\n";
    }*/

    int q;
    cin >> q;
    REP(i, 1, q) {
        int r, l;
        cin >> l >> r;
        int width = r - l + 1;
        int incr = 2;
        int candies = 0;
        int layer = 1;
        while (width != 1) {
            for (int j = l - 1; j < r - 1; j += incr) {
                if (seq[layer][j] >= 10) {
                    candies++;
                }
            }
            width /= 2;
            incr *= 2;
            layer++;
        }
        cout << candies << "\n";
    }
}
