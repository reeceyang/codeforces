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

ll pow10(int n) {
    ll p = 1;
    REP(i, 1, n) {
        p = (p * 10) % 998244353;
    }
    return p % 998244353;
}

ll f(string a, string b) {
    int max =  a.length() > b.length() ? a.length() : b.length();
    ll number = 0;;
    REP(i, 0, max - 1) {
        if (i < b.length()) {
            number = ((b.at(b.length() - 1 - i) - '0') * pow10(i * 2) + number) % 998244353;
        }
        if (i < a.length()) {
            number = ((a.at(a.length() - 1 - i) - '0') * pow10(i * 2 + 1) + number) % 998244353;
        }
        cout << number << " ";
    }
    return number % 998244353;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string a[n];

    REP(i, 0, n - 1) {
        string ai;
        cin >> ai;
        a[i] = ai;
    }

    //testing input
    REP(i, 0, n - 1) {
        cout << a[i] << "\n";
    }

    ll sum = 0;
    REP(i, 0, n - 1) {
        REP(j, 0, n - 1) {
            cout << f(a[i], a[j]) << " ";
            sum += f(a[i], a[j]) % 998244353;
        }
        cout << "\n";
    }

    cout << sum;
}
