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
const int N = 5e5 + 15;
#define deb(x) cout<<#x<<"="<<x<<"\n";



void result() {
    ll n{};
    cin>>n;
string s;
cin>>s;
    sort(s.begin(),s.end());
    cout<<(s[s.size()-1]-'a')+1;


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
