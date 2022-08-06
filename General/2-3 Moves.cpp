/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 1e5 + 9;

void result() {
    ll n{};
    cin>>n;
    if(n==1){
        // special case
        cout<<2;
        return;
    }
    if(n%3==0){
        // optimal solution
        cout<<n/3;
        return;
    }
    // number of times i need to increase my position by 3 (n/3)
    // the remaining will be the number of times i need to increase or decrease my position by 2
    cout<<n/3+1;

}


int main() {
    sareeeee3
    ll tc = 1;
    cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}