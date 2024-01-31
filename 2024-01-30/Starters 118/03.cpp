// https://www.codechef.com/problems/JOINSTATE

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
        int n, m, count, sum=0, temp;

        cin >> n >> m;

        count = n;

        for(int i=0; i<n; i++){
            cin >> temp;
            if ((sum < m && sum != 0) || (sum == 0 && temp < m)){
                count--;
                sum += temp;
                
                if(sum >= m){
                    sum = 0;
                    count += 1;
                }
            }
        }

        cout << count << endl;

    }
    return 0;
}