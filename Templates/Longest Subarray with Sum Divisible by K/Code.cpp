int LongestSubarrayWithSumDivisibleByK(vector<ll> &arr, int n, ll k) {
    unordered_map<ll, int> mp;
    ll ans = 0;
    ll curr_sum = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
        ll md = s % k;
        if (md == 0)
        {
          ans = i + 1;
         }
        else if (mp.find(md) == mp.end())
        {
          mp[md] = i;
        }
        else if (ans < (i - mp[md]))
        {
          ans = i - mp[md];
        }
    }
    return ans;
}
