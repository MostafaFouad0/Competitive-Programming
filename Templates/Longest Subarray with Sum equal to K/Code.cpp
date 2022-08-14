int Longest_Subarray_with_Sum_equal_to_K(vector<ll> &arr, ll k) {
    int n = arr.size();
    map<ll, int> mp;
    mp[0] = 0;
    int ret = 0, s = 0;
    for (int i = 1; i <= n; ++i) {
        s += arr[i];
        int need = s - k;
        if (mp.count(need)) 
        {ret = max(ret, i - mp[need]);
        }
        if (mp.count(s) == 0)
        {
          mp[s] = i;
        }
    }
    return ret;
}
