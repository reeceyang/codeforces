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

    int k = 0;
    int point = 0;
    string s = "";
    REP(i, 1, n + 1) {
        s += to_string(point) + " " + to_string(point) + "\n";
        s += to_string(point + 1) + " " + to_string(point) + "\n";
        s += to_string(point) + " " + to_string(point + 1) + "\n";
        point++;
        k += 3;
    }
    cout << k + 1 << "\n" << s << point << " " << point << "\n";
}
