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

    int w, h;
    cin >> w >> h;

    int sum = w + h;
    ll tilings = 1;
    REP(i, 1, sum) {
        tilings = (tilings * 2) % 998244353;
    }

    cout << tilings;
}
