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
 
int lcm(int x, int y) {
 return (x / __gcd(x, y)) * y;
}
 
int s ( int n){
    int m =0;
    while(n){
        m+=(n%10);
        n/=10;
    }
    return m;
}
 
int32_t main()
{
     anmol();
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         vector<int> v(n,0);
           int mx =INT_MIN;
         for(int i =0; i<n; i++){
             cin>>v[i];
             //mx = max(v[i],mx);
         }
 
         sort(v.begin(),v.end());
         double ans =v[n-1];
         double b =0;
         for(int i =0; i<n-1; i++){
             b+=v[i];
         }
         b/=(n-1);
         cout<<setprecision(10)<<double(ans+b)<<endl;
 
 
       
         
     }
     
 
   
 
}
 
 
 