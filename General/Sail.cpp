/*
 *
 * Created By : Mostafa Mahmoud
 *
 */
#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 2e5 + 9;


void result() {
    ll n{},x1{},y1{},x2{},y2{};
    cin>>n>>x1>>y1>>x2>>y2;//taking input
    string s;
    cin>>s;
    ll ans{};
    for (int i = 0; i < n; ++i) {
        if(x1<x2){ // need to go right
            if(s[i]=='E'){
                x1++;
            }
        }
        if(x1>x2){//need to go left
            if(s[i]=='W'){
                x1--;
            }
        }
        if(y1>y2){// need to go down
            if(s[i]=='S'){
                y1--;
            }
        }
        if(y1<y2){// need to go up
            if(s[i]=='N'){
                y1++;
            }
        }
        ans++;
        if(x1==x2&&y1==y2){// reached the destination there is no need to continue
            break;
        }

    }
    if(x1==x2&&y1==y2){
        cout<<ans;
        return;
    }
    // did not reach the destination
    cout<<-1;

}


int main() {
    sareeeee3
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}
