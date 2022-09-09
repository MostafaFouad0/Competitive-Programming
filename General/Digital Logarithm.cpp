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
const int N = 2e5 + 9;
ll MOD = 600 + 3;
#define deb(x) cout<<#x<<"="<<x<<"\n";


ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);

}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

void result() {
    ll n{};
    cin>>n;
    ll a[n];
    ll b[n];
    priority_queue<ll>q1;
    priority_queue<ll>q2;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        q1.push(a[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
        q2.push(b[i]);
    }
    ll ans{};
    while(!q1.empty()){
//        cout<<"q1: "<<q1.top()<<" q2: "<<q2.top()<<"\n";
        if(q1.top()==q2.top()){
            q1.pop();
            q2.pop();
        }else if(q1.top()>q2.top()){
            ll tmp=(log10(q1.top()))+1;
            q1.pop();
            if(tmp==0){
                q1.push(1);
            }else{
                q1.push(tmp);
            }
            ans++;
        }else if(q1.top()<q2.top()){
            ll tmp=(log10(q2.top()))+1;
            q2.pop();
            if(tmp==0){
                q2.push(1);
            }else{
                q2.push(tmp);
            }
            ans++;
        }
    }
    cout<<ans;




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