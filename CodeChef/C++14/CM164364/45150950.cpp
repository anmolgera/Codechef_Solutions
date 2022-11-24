#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define int long long
//typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;
ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}

void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}






int32_t main()
{
     anmol();
     int t;
     cin>>t;
     while(t--){
        
        int n,x;
        cin>>n>>x;
        int a[n];

        map<int,int> mp;
        for(int i =0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        int ans = mp.size();

        vector<int> v;
        for(auto i : mp){
            v.push_back(i.second);
        }

        sort(v.begin(),v.end());

        int ex =0;
        for(int i =0; i<v.size(); i++){
            if(v[i]>1) {ex+=(v[i]-1); v[i]=1;}
        }

        if(ex>=x){
            cout<<ans<<endl;
            //return 0;
        }
        
        else {

            cout<<ans-(x-ex)<<endl;
        }
      /*  for(int i = v.size()-1; i>=0; i--){

            if(v[i]<=x){
              x-=v[i];
              ans--;

              if(x==0){
                  break;
              }
            }
            else {
                break;
            }
        }


      cout<<ans<<endl;
      */


        
     }
     
}
