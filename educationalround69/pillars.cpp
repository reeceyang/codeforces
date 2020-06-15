
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

    vi pillars;
    vi discs;

    int n;
    cin >> n;

    int max = 0;
    int maxIndex = 0;
    REP(i, 1, n) {
        int a;
        cin >> a;
        if (a > max) {
            max = a;
            maxIndex = i - 1;
        }
        pillars.PB(a);
        discs.PB(a);
    }

    sort(discs.begin(), discs.end());

    bool possible = true;
    int current = n - 1;
    while (possible && current > 0) {
        //cout << current << "\n";
        if (maxIndex + 1 < pillars.size() && pillars[maxIndex + 1] == discs[current - 1]) {
            // move the disc
            pillars[maxIndex] = pillars[maxIndex + 1];
            pillars.erase(pillars.begin() + maxIndex + 1);
            current--;
        } else if (maxIndex - 1 >= 0 && pillars[maxIndex - 1] == discs[current - 1]) {
            // move the disc
            pillars[maxIndex] = pillars[maxIndex - 1];
            pillars.erase(pillars.begin() + maxIndex - 1);
            maxIndex--;
            current--;
        } else {
            possible = false;
        }
    }

    if (possible) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
