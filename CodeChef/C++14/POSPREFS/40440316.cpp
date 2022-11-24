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
int n;
cin>>n;
int k;
cin>>k;

bool neg = false;
bool pos = false;
bool last = true;


int count =0;
vector<int> v;

for(int i =0; i<n; i++){

 int need = k-count;
 if(neg==true){

  int val = i+1;
  val = -val;
  v.push_back(val);

 }
 else if(pos == true){
   
   v.push_back(i+1);


 }

 else if (need ==n-i){
  v.push_back(i+1);
  pos = true;
 }
 
  else if(last == true){
    v.push_back(i+1);
    last = false;
    count++;
    if(count==k){

      neg = true;
    }
  }
 
  else if(last == false){

    int val = i+1;
    val = -val;
    v.push_back(val);
    last = true;

  }


}
for(int i =0; i<v.size(); i++){
  cout<<v[i]<<" ";
}

cout<<endl;
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