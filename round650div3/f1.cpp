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

    int t;
    cin >> t;

    REP(q, 1, t) {
        int n;
        cin >> n;
        int a1, a2;
        cin >> a1 >> a2;
        int left = 0, right = 0;
        vi array;
        if (a1 > a2) {
            array.PB(a2);
            array.PB(a1);
            left = 1;
        } else {
            array.PB(a1);
            array.PB(a2);
        }
        REP(i, 1, n - 2) {
            int a;
            cin >> a;
            int counter = 0;
            while (a > array[counter] && counter < array.size()) {
                counter++;
            }
            if (counter < array.size() - counter) {
                left += counter + 1;
            } else {
                right += array.size() - counter + 1;
            }
            array.insert(array.begin() + a, counter);
        }
        cout << left + right << "\n";
    }
}
