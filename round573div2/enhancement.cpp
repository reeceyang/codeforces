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

    int x;
    cin >> x;

    int remainder = x % 4;
    if (remainder == 0) {
        cout << "1 A";
    } else if (remainder == 1) {
        cout << "0 A";
    } else if (remainder == 2) {
        cout << "1 B";
    } else {
        cout << "2 A";
    }

}
