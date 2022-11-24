
 #include<bits/stdc++.h>
#include<map>

using namespace std;
 
#define int long long
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inpu1t.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 

 
 
int32_t main() 
{ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 //anmol();
 int t;
 cin>>t;
 //int j =1;
 while(t--){

int n,k;
cin>>n>>k;


int a[n];

for(int i =0; i<n; i++){

  cin>>a[i];
}

int sum =0;
bool flag = true;
int count =1;
for(int i = n-1; i>=0; i--){
 
 if(a[i]>k){
  flag = false;
  break;
 }

 sum+=a[i];
 if(sum<k){
  //count++;
 }

 else if(sum>k){
  sum =a[i];
  count++;

 }

}

if(!flag){

  cout<<-1<<endl;
}

else cout<<count<<endl;
}
}

 



 


 
    
    
