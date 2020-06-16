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
    REP(w, 1, t) {
        int n, k;
        cin >> n >> k;
        bool isEdge = true;
        bool foundOne = false;
        int freeTables = 0;
        int currentFree = 0;
        REP(i, 0, n - 1) {
            char table;
            cin >> table;
            if (table == '0') {
                currentFree++;
                if (i == n - 1) {
                    // we're at the right edge
                    freeTables += foundOne ? currentFree / (1 + k) : (currentFree + k) / (1 + k);
                }
            }
            if (table == '1') {
                foundOne = true;
                if (isEdge == true) {
                    // end of the left edge
                    freeTables += currentFree / (1 + k);
                    isEdge = false;
                } else {
                    freeTables += (currentFree - k) / (1 + k);
                }
                currentFree = 0;
            }
        }
        cout << freeTables << "\n";
    }
}
