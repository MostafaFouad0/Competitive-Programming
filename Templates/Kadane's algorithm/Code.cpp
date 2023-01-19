ll Kadanes(ll *a,ll n){
    ll mxh{},mxsf=INT64_MIN;
    for (int i = 0; i < n; ++i) {
        mxh+=a[i];
        if(a[i]>mxh){
            mxh=a[i];
        }
        if(mxsf<mxh){
            mxsf=mxh;
        }
    }
    return mxsf;
}
