#include<bits/stdc++.h>

/*
 * Created By : Mostafa Mahmoud
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 4000+9;
long    double a[N];
long double memo[N][N];
ll n{};

long  double dp(ll i,ll head){
    if(i==n) {
        if (head >= n / 2 + 1) {
            return 1;
        }else{
            return 0;
        }
    }
    long  double &ret=memo[i][head];
    if(ret!=-1){
        return ret;
    }
     long double op1= a[i]*dp(i+1,head+1);
    long  double op2 =(1-a[i])* dp(i+1,head);
    ret=op1+op2;
   // cout<<ret<<"\n";
    return ret;
}

void result() {
    cin>>n;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            memo[i][j]=-1;
        }
    }
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<dp(0,0);




}


int main() {
    cout<<fixed<<setprecision(10);
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}