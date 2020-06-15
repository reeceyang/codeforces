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

    ll n, k;
    cin >> n >> k;

    ll discr = 4 * n * n + 12 * n + 9 - 4 * (n + n * n - 2 * k);
    ll eplus = (2 * n + 3 + round(sqrt(discr))) / 2;
    ll eminus = (2 * n + 3 - round(sqrt(discr))) / 2;

    if (eplus >= 0 && eplus <= n) {
        cout << eplus;
    } else {
        cout << eminus;
    }
}
