// https://www.codechef.com/problems/SRTO3

#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr \
    if (0)   \
    cerr
#endif

#define MOD 998244353
#define int long long int
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, temp, maxBi = 0;
        cin >> n >> m;

        vector<int> a(n);

        for (auto &i : a)
        {
            cin >> i;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            maxBi = max(maxBi, temp);
        }

        sort(a.end() - maxBi, a.end());

        //----------------------------------PRINT VECTOR------------------------------//
        for(auto z : a){
            cout<<z<<" ";
        }
        cout<<"\n";
        //----------------------------------------------------------------------------//
        
        
    }
    return 0;
}