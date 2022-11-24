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
    // t--;   
    int n;
    cin>>n;


    int a[n+1];
    for(int i =0; i<n;i++){

        cin>>a[i];
    }
    int count =0;

    bool flag= false;

    //std::vector<char> v;
    vector<int> v;


    

    for(int i =0; i<n; i++){

        if(a[i]==0){

            count++;
        }


        else {


            if(count>0){

                v.push_back(count);
               
            }

             count =0;
        }
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    if(v.size()==0){
       flag = false;
    }

    else if(v[0]%2==0){

        flag = false;
    }

    else if(v.size()==1 || ((v[0]/2)+1) > v[1]){

        flag = true;
    }

    if(flag){

        cout<<"Yes"<<endl;

    }

    else cout<<"No"<<endl;


    }
    
    
}