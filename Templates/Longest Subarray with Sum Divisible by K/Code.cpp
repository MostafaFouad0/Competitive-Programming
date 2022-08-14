int LongestSubarrayWithSumDivisibleByK(vector<ll> &a, int n, ll k) {
    map<ll, ll> m;
    ll ans = 0;
    ll curr_sum = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        ll md = s % k;
        if (md == 0)
        {
          ans = i + 1;
         }
        else if (m.find(md) == m.end())
        {
          mp[md] = i;
        }
        else if (ans < (i - m[md]))
        {
          ans = i - m[md];
        }
    }
    return ans;
}
