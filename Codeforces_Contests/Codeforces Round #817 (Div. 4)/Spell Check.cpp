#include<bits/stdc++.h>
/*
*
* Created By : Mostafa Mahmoud
*
*/


#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define F first
#define S second
const int N = 1e5 + 9;
ll MOD = 1e3 + 3;
#define deb(x) cout<<#x<<"="<<x<<"\n";

void result() {
    string s,t;
    s="Timur";
    sort(s.begin(),s.end());
    ll n{};
    cin>>n>>t;
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
        return;
    }
    cout<<"NO";




}


int main() {
    sareeeee3
    ll tt = 1;
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        result();
        cout << "\n";
    }
}