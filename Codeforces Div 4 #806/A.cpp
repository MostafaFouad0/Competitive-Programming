/*
 * Created By : Mostafa Mahmoud
 */

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 22;


void result() {
    string s;
    cin >> s;
    for (char & i : s) {
        i = tolower(i);
    }
    if (s == "yes") {
        cout << "YES";
        return;
    }
    cout << "NO";
}
int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}