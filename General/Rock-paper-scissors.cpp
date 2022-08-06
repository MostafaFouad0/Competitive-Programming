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
    string a[3];
    for (auto & i : a) {
        cin>>i;
    }
    for (int i = 0; i < 3; ++i) {
        ll c{};
        for (int j = 0; j < 3; ++j) {
            if(i!=j){
                if(a[i]=="rock"&&a[j]!="scissors"){
                    //can't beat the Jth person so we break (Not possible to beat all of them)
                    break;
                }else if(a[i]=="scissors"&&a[j]!="paper"){
                    //can't beat the Jth person so we break (Not possible to beat all of them)
                    break;
                }else if(a[i]=="paper"&&a[j]!="rock"){
                    //can't beat the Jth person so we break (Not possible to beat all of them)
                    break;
                }else {
                    // can beat the Jth person so we increase the counter and continue checking 
                    c++;
                    continue;
                }
            }
        }
        if(c==2){
            if(i==0){
                cout<<"F";
                return;
            }
            if(i==1){
                cout<<"M";
                return;
            }
            if(i==2){
                cout<<"S";
                return;
            }
        }
    }
    cout<<"?";



}


int main() {
    sareeeee3
    ll tc = 1;
    //cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}
