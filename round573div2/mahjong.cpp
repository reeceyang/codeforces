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

    vi m;
    vi p;
    vi s;
    map<char, vi> deck;
    deck['m'] = m;
    deck['p'] = p;
    deck['s'] = s;

    REP(i, 1, 3) {
        string str;
        cin >> str;
        if (str.at(1) == 'm') {
            deck['m'].PB(str.at(0) - '0');
        } else if (str.at(1) == 'p') {
            deck['p'].PB(str.at(0) - '0');
        } else {
            deck['s'].PB(str.at(0) - '0');
        }
    }

    sort(deck['m'].begin(), deck['m'].end());
    sort(deck['p'].begin(), deck['p'].end());
    sort(deck['s'].begin(), deck['s'].end());

    /*//testing input
    cout << "\nM: ";
    for (auto x : deck['m']) {
        cout << x << " ";
    }
    cout << "\nP: ";
    for (auto x : deck['p']) {
        cout << x << " ";
    }
    cout << "\nS: ";
    for (auto x : deck['s']) {
        cout << x << " ";
    }
    cout << "\n";
    */

    // worst case: all suits have one card: 1, 1, 1 case
    if (deck['m'].size() == 1 && deck['p'].size() == 1) {
        //cout << "1, 1, 1 case\n";
        cout << "2";
    } else {
        // check for 2, 1, 0 case
        char whichdeck = 'x';
        if (deck['m'].size() == 2) {
            whichdeck = 'm';
        }
        if (deck['p'].size() == 2) {
            whichdeck = 'p';
        }
        if (deck['s'].size() == 2) {
            whichdeck = 's';
        }
        if (whichdeck != 'x') { // it is the 2, 1, 0 case
            //cout << "2, 1, 0 case, " << whichdeck << " has 2 cards\n";
            int diff = deck[whichdeck][1] - deck[whichdeck][0];
            //cout << "diff is " << diff << "\n";
            if (diff <= 2) {
                cout << "1";
            } else {
                cout << "2";
            }
        } else { // this must be the 3, 0, 0 case
            if (deck['m'].size() == 3) {
                whichdeck = 'm';
            }
            if (deck['p'].size() == 3) {
                whichdeck = 'p';
            }
            if (deck['s'].size() == 3) {
                whichdeck = 's';
            }
            //cout << "3, 0, 0 case, " << whichdeck << " has 3 cards\n";
            int diff1 = deck[whichdeck][2] - deck[whichdeck][1];
            int diff2 = deck[whichdeck][1] - deck[whichdeck][0];
            //cout << "diff1 is " << diff1 << ", diff2 is " << diff2 << "\n";
            if ((diff1 == 0 && diff2 == 0) || (diff1 == 1 && diff2 == 1)) {
                cout << "0";
            } else if (diff1 == 0 || diff2 == 0 || diff1 == 1 || diff2 == 1 || diff1 == 2 || diff2 == 2 ) {
                cout << "1";
            } else {
                cout << "2";
            }
        }
    }
}
