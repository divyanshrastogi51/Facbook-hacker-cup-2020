#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileIO(in, out) freopen(in, "r", stdin); freopen(out, "w", stdout)
using namespace std;


int T;
int n;
const int maxn = 8e5+7;
pair<long long int, long long int> a[maxn];

void solution()
{
    cin >> n;
    long long int ans=0;
    map<long long int, long long int> map_dp;
    for(int i = 0; i < n; ++i)
     {
        cin >> a[i].first >> a[i].second;
     }
     sort(a, a+n);
     for(int i = 0; i < n; ++i)
     {
        map_dp[a[i].first+a[i].second] = max(map_dp[a[i].first+a[i].second], map_dp[a[i].first] + a[i].second);
        map_dp[a[i].first] = max(map_dp[a[i].first], map_dp[a[i].first-a[i].second] + a[i].second);
        ans = max({ans, map_dp[a[i].first+a[i].second], map_dp[a[i].first]});
     }

     cout << ans << endl;
}

int main()
{
    fastIO();
    freopen ("timber_input.txt", "r", stdin);
    freopen("timber_output.txt", "w", stdout);
    T = 1;
    cin >> T;
    for(int i = 1; i < T+1; ++i)
    {
        cout << "Case #" << i << ": ";
        solution();
    }
    return 0;
}
