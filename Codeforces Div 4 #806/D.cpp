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
    ll n{};
    cin>>n;
    vector<string>v(n);
    map<string,int>m;

    for (int i = 0; i < n; ++i) {
        cin>>v[i];
        m[v[i]]=1;
    }
    for (int i = 0; i < n; ++i) {
        bool flag=false;
        for (int j = 1; j <v[i].size() ; ++j) {
            if(m.find(v[i].substr(0,j))!=m.end()&&m.find(v[i].substr(j))!=m.end()){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<1;
        }else{
            cout<<0;
        }
    }

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