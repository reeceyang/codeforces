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
        int h, m;
        cin >> h >> m;
        int hours_left = 24 - h;
        int minutes_left = (hours_left * 60) - m;
        cout << minutes_left << "\n";
    }
}
