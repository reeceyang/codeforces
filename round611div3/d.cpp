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

    ll n, m;
    cin >> n >> m;

    set<ll> trees;
    REP(i, 1, n) {
        ll tree;
        cin >> tree;
        trees.insert(tree);
    }
    //sort(trees.begin(), trees.end());

    /*REP(i, 0, n - 1) {
        cout << trees[i] << " ";
    }
    cout << "\n";*/

    set<ll> people;
    ll people_left = m;
    ll res = 0;
    ll current_distance = 1;
    while (people_left != 0) {
        for (auto tree : trees) {
            if ((trees.find(tree - current_distance) == trees.end()) && (people.find(tree - current_distance) == people.end())) {
                people.insert(tree - current_distance);
                res += current_distance;
                people_left--;
            }
            if ((people_left != 0) && (trees.find(tree + current_distance) == trees.end()) && (people.find(tree + current_distance) == people.end())) {
                people.insert(tree + current_distance);
                res += current_distance;
                people_left--;
            }
        }
        current_distance++;
    }

    cout << res << "\n";
    for (auto x : people) {
        cout << x << " ";
    }
}
