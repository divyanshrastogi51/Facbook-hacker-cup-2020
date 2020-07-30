#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileIO(in, out) freopen(in, "r", stdin); freopen(out, "w", stdout)
using namespace std;


int T;
int n;
string shards;
void solution()
{
    cin >> n;
    cin >> shards;
    pair<int, int> ct = {0,0};
    for(int i = 0; i < n; ++i)
        if(shards[i] == 'A')
            ct.first++;
        else
            ct.second++;
    if(abs(ct.first-ct.second) == 1)
        cout << "Y";
    else
        cout << "N";
    cout << endl;
    return;
}

int main()
{
    fastIO();
    freopen ("alchemy_input.txt", "r", stdin);
    freopen("alchemy_output.txt", "w", stdout);
    T = 1;
    cin >> T;
    for(int i = 1; i < T+1; ++i)
    {
        cout << "Case #" << i << ": ";
        solution();
    }
    return 0;
}
