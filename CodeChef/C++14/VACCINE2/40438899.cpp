/* Author : Anmol Gera
NSIT 4th Year */

#include<bits/stdc++.h>
using namespace std;
#define int long long


void anmol()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 

/*
while(lo < hi) {
int mid = lo + (hi - lo) / 2;
if(Special condition passed)(optional):
  return mid; 
if(condition passed)
  hi = mid;
else 
  lo = mid + 1;
}
return lo;
*/

void solve(){
//hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
int n,d;
cin>>n>>d;

vector<int> v;
for(int i =0; i<n; i++){

  int y;
  cin>>y;
  v.push_back(y);
}

int count1 =0;
int count2 =0;

for(int i=0; i<n; i++){

  if(v[i]>=80 || v[i]<=9){
    count1++;
  }
  else {
    count2++;
  }
}

int ans = (count1 + (d-1))/(d);
int ans1 = (count2+(d-1))/d;
cout<<ans+ans1<<endl;


} 













int32_t main(){


  anmol();
  int t;
  //t =1;
  cin>>t;
  while(t--){


        //hhgfhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
        
        //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
        //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    ///  hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh'b'

        
        //int a,b;
        //cin>>a>>b;

    solve();
   //""""""""""""
        //cout<<fact[a] - fact[b];
        // look for base cases always 
       
//lkjgfdsaqwertyuiop.,mnbvcxz=-87564321`()hH" "



  }

}