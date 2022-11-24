#include <bits/stdc++.h>
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


bool check(int n){
   bool flag = false;
    int m = n;
 while(m!=1){

    
    if(m%2){
        flag = true;
        break;
    }
    m =  m/2;


 }


 return !flag;



}


int32_t main(){


anmol();

int t;
cin>>t;

while(t--){

 int n;
 cin>>n;


 int m =n;
 

 bool flag = false;
 while(m!=1){

    
    if(m%2){
        flag = true;
        break;
    }
    m =  m/2;


 }

  if(n==1)
{
  cout<<1<<endl;
  
}
else if(n==2)
{
  cout<<-1<<endl;

}
else if(n==3)
{
  cout<<2<<" "<<3<<" "<<1<<endl;
  
}
else if(!flag)
{
  cout<<-1<<endl;
 // continue;
}

else {

cout<<2<<" "<<3<<" "<<1<<" ";
int i=4;
while(i<=n)
{
  if(check(i))
  {
    cout<<i+1<<" "<<i<<" ";
    if(i+2<=n)
    {
      cout<<i+2<<" ";
    }

    i+=3;
  }
  else
  {
    cout<<i<<" ";
  i+=1;
  }

}
cout<<endl;
}

}
   cout<<endl;



 }











