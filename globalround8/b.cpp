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

    ll k;
    cin >> k;
    vll letters;
    vector<char> codeforces = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
    REP(i, 1, 10) {
        letters.PB(1);
    }
    ll product = 1;
    ll nextLetter = 0;
    while (product < k) {
        product /= letters[nextLetter];
        letters[nextLetter]++;
        product *= letters[nextLetter];
        nextLetter = nextLetter == 9 ? 0 : nextLetter + 1;
    }

    REP(i, 0, 9) {
        REP(j, 1, letters[i]) {
            cout << codeforces[i];
        }
    }
}
