#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 3e3 + 7;
string s, t;
ll mem[N][N];

ll dp(int i = 0, int j = 0) {
    if (i == s.size() || j == t.size()) {
        return 0;
    }
    if (mem[i][j] != -1) {
        return mem[i][j];
    }
    if (s[i] == t[j]) {
        mem[i][j] = dp(i + 1, j + 1) + 1;
    } else {
        mem[i][j] = max(dp(i, j + 1), dp(i + 1, j));
    }
    return mem[i][j];
}


void dp2(int i = 0, int j = 0) {//printing 
    if (i == s.size() || j == t.size()) {
        return;
    }
    if (s[i] == t[j]) {
        cout << s[i];
        dp2(i + 1, j + 1);
        return;
    }
    ll choice_1{}, choice_2{};
    choice_1 = dp(i + 1, j);
    choice_2 = dp(i, j + 1);
    // choosing the longest subtree  
    if (choice_2 > choice_1) {
        dp2(i, j + 1);
    } else {
        dp2(i + 1, j);
    }


}


void result() {
    cin >> s >> t;
    memset(mem, -1, sizeof mem);
    dp2();


}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}