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

    set<int> temp;
    REP(i, 0, n - 1) {
        temp.insert(i);
    }

    vi friends;
    REP(i, 0, n - 1) {
        int f;
        cin >> f;
        friends.PB(f - 1);
        if (f != 0) temp.erase(f - 1);
    }

    vi need_presents;
    for (auto x : temp) {
        need_presents.PB(x);
    }

    /*for (auto x : need_presents) {
        cout << x + 1 << " ";
    }
    cout << "\n";*/

    int num_need = need_presents.size();
    for (int i = 0; i < num_need; i++) {
        if (friends[need_presents[i]] == -1) {
            for (int j = 0; j < num_need; j++) {
                if (i != j) {
                    friends[need_presents[i]] = need_presents[j];
                    need_presents.erase(need_presents.begin() + j);
                    num_need--;
                    if (j < i) i--;
                    /*for (auto x : need_presents) {
                        cout << x + 1 << " ";
                    }
                    cout << "\n";*/
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (friends[i] == -1) {
            friends[i] = need_presents[0];
            need_presents.erase(need_presents.begin());
        }
        cout << friends[i] + 1 << " ";
    }
}
