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
const int N = 1e3 + 9;
ll MOD = 1e3 + 3;
#define deb(x) cout<<#x<<"="<<x<<"\n";


void result() {
    ll n{};
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>m;
    for (int i = 0; i < s.size(); ++i) {
        m[s[i]]++; // occurrence of every char in the string 
    }
    ll ans=INT64_MAX;
    for(auto it:m){
        if(it.second!=0){
            // calculating the answer if we delete that specific char 
            char tmp=it.first;
            ll l{},r=n-1,mn{};
            bool f=false;
            while(l<=r){
                // maintaing two pointers on the string
                if(s[l]==s[r]){
                    r--;
                    l++;
                }else if(s[l]==tmp){
                    mn++;
                    l++;
                }else if(s[r]==tmp){
                    mn++;
                    r--;
                }else{
                    f=true;
                    break;
                }
            }
            if(f){
                continue;
            }else{
                ans=min(ans,mn);
            }
        }
    }
    if(ans==INT64_MAX){
        cout<<-1;
        // no solution 
        return;
    }
    cout<<ans;


}


int main() {
    sareeeee3
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        result();
        cout << '\n';
    }
}
