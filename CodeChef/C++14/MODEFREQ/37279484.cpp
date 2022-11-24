#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long 


#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 

bool sign(int num){
  return num>0;
}


 

 

 
 



int32_t main() {


   
    anmol();
    int t;
    cin>>t;

    while(t--){


        int n;
        cin>>n;

        int a[n+1];
         map<int,int> mp;
        for(int i =0; i<n; i++){



            cin>>a[i];
            mp[a[i]]++;
        }

       
        map<int,int> mp1;

     
        
        int mx =-1;
        for(auto i : mp){

            mp1[i.second]++;

            if(mp1[i.second]>mx){
                mx = mp1[i.second];
            }
        }

        //cout<<mx<<endl;
        
        int max_element =0;
        int mn = INT_MAX;

        for(auto i : mp1){
           
           if(i.second==mx){

           
            mn =min(i.first,mn);
           }

        }
    
    cout<<mn<<endl;

    }
    
    
}