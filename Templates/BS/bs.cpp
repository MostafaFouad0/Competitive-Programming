int have[3]; //0->b, 1->s, 2->c
int cost[3]; //0->b, 1->s, 2->c
int money;
int count_ing[3]; // 0->cnt_b, 1->cnt_s, 2->cnt_c

bool ok(int cnt) {
    int need_B = cnt * count_ing[0];
    int need_S = cnt * count_ing[1];
    int need_C = cnt * count_ing[2];
    int total_cost{};
    if (have[0] < need_B) {
        int diff = need_B - have[0];
        total_cost += diff * cost[0];
    }
    if (have[1] < need_S) {
        int diff = need_S - have[1];
        total_cost += diff * cost[1];
    }
    if (have[2] < need_C) {
        int diff = need_C - have[2];
        total_cost += diff * cost[2];
    }
    if (total_cost > money)return false;
    return true;
}


void solve() {
    // Hamburgers
    // https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H
    string s;
    cin >> s;
    for (auto &c: s) {
        if (c == 'B') {
            count_ing[0]++;
        } else if (c == 'S')count_ing[1]++;
        else count_ing[2]++;
    }
    for (int i = 0; i < 3; ++i) {
        cin >> have[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin >> cost[i];
    }
    cin >> money;
    int l = 0, r = 1e15, mid, ans = 0;
    while (l <= r) {
        mid = ((r - l) / 2) + l;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans;

    // upper built in
//    while (q--) {
//        int target;
//        cin >> target;
//        auto ans = upper_bound(a.begin(), a.end(), target) - a.begin();
//        cout << ans << "\n";
//    }

    // lower built in
//    while (q--) {
//        int target;
//        cin >> target;
//        auto ans = lower_bound(a.begin(), a.end(), target) - a.begin();
//        cout << ans << "\n";
//    }


//    lower bound
//    while (q--) {
//        int target;
//        cin >> target;
//        int l = 0, r = n - 1, idx, ans = -1;
//        while (l <= r) {
//            idx = ((r - l) / 2) + l;
//            if (a[idx] >= target) {
//                ans = idx;
//                r = idx - 1;
//            } else {
//                l = idx + 1;
//            }
//        }
//        cout << ans << "\n";
//    }


//    upper bound
//    while (q--) {
//        int target;
//        cin >> target;
//        int l = 0, r = n - 1, idx, ans = -1;
//        while (l <= r) {
//            idx = ((r - l) / 2) + l;
//            if (a[idx] <= target) {
//                l = idx + 1;
//            } else {
//                ans = idx;
//                r = idx - 1;
//            }
//        }
//        cout << ans << "\n";
//    }

}
