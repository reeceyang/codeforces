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

    int aliceParty;
    cin >> aliceParty;
    int totalSeats = aliceParty;
    int coalitionSeats = aliceParty;
    vi coalition;
    coalition.PB(1);
    REP(i, 2, n) {
        int party;
        cin >> party;
        totalSeats += party;
        if (aliceParty >= party * 2) {
            coalition.PB(i);
            coalitionSeats += party;
        }
    }

    if (2 * coalitionSeats > totalSeats) {
        cout << coalition.size() << "\n";
        for (auto x : coalition) {
            cout << x << " ";
        }
    } else {
        cout << "0";
    }
}
