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

void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
const int N = 1e6 + 5 ;
int a[N];

int32_t  main()
{
anmol();
int t;
cin>>t;
while(t--)
{

   int n,m;
   cin>>n>>m;
  
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   int dist[m+2][n+2];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
      cin>>dist[j][i];
    }
   }
   
   /*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t){
        t--;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int count =0;
        //bool can=false;
       bool win =false;
      
       vector<int>v;
    
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
               
            }
            else{
             
                if(count>0)
                v.push_back(count);
                
                count=0;
            }
            
        }
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
        if(v.size()==0)
        win =false;
        else if((v[0]%2)==0)
        win =false;
        else if((v.size()==1) || ((v[0]/2)+1>v[1]))
        win=true;
        if(win)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
     
    }
    
    
}*/
   int pre[m+2][n+2];
   memset(pre,0,sizeof(pre));
    for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
 
      if(i==0)
      {
        pre[i][j]=a[j]+dist[i][j];
      }
      else
      {
        pre[i][j]=pre[i-1][j]+dist[i][j];
      }
      
    }
   }


   int peak[n+2];
   memset(peak,0,sizeof(peak));
   for(int i=0;i<n;i++)
   {
    int maxi=INT_MIN;
    for(int j=0;j<m;j++)
    {
      if(pre[j][i]>maxi)
      {
        peak[i]=j;
        maxi=pre[j][i];
      }





    }
   }

   int prank[n+2];
   int pmonth[n+2];

   memset(prank,10000,sizeof(prank));
   memset(pmonth,0,sizeof(pmonth));
    vector<pair<int,int>> v;


/* permute("abacaba");
 bool flag =  false;
 int count1 =0;
 for(int i =0; i<v.size(); i++){
  
if(r.find(v[i])!=string :: npos ){
 
 //cout<<"YES"<<endl;
 res2 = r.substr(0,r.find(v[i]))+"abacaba" + r.substr(r.find(v[i])+7);
 /*out<<"abacaba";
 cout<<s.substr(s.find(v[i])+7)<<endl;
 //cout<<s<<endl;*/
 //count1++;
 //flag = true;
  //break;
 
 
//
 
 
 // cout<<v[i]<<endl;
 //}
 
 //cout<<count<<count3<<endl;
 
 
//cout<<st.size()<<endl;
//cout<<v.size()<<endl;


   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {

      v.push_back({pre[i][j],j});





    }
    sort(v.begin(),v.end());
    vector<int> rank(n+1,0);
    rank[v[n-1].second]=1;
    for(int k=v.size()-2;k>=0;k--)
    {
      if(v[k].first==v[k+1].first)
      {
        rank[v[k].second]=rank[v[k+1].second];
      }
      else
      {
        rank[v[k].second]=n-k;
      }
    }

    for(int k=v.size()-1;k>=0;k--)
    {
      
  
      if(rank[v[k].second]<prank[v[k].second])
      {

        prank[v[k].second]=rank[v[k].second];
        pmonth[v[k].second]=i;
      }
    }
    v.erase(v.begin(),v.end());

  /*int longestPalindromeSubseq(string s) {
        
        int n= s.length();
        
        string s2 = s;
        
         reverse(s.begin(),s.end());
        
        int dp[n+1][n+1];
        
        
        for(int i =0; i<=n; i++){
            
            
            
            for(int j =0; j<=n; j++){
                
                if(i== 0 || j==0){
                    
                    dp[i][j]=0;
                }
                
                else if(s[i-1]==s2[j-1]){
                    
                    dp[i][j] = dp[i-1][j-1]+1;
                    
                    
                }
                
                else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                
                
                
                
                
            }
        }
        
        
        
        
    return dp[n][n];    
        
        
    }*/


   }
   
   int ans=0;
   for(int i=0;i<n;i++)
   {
    if(pmonth[i]!=peak[i])
    {
      ans++;
    }

   }
   cout<<ans<<endl;



    
  }
}