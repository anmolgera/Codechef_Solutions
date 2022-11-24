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



int32_t main(){


anmol();

int t;
cin>>t;

while(t--){

int n,k,x,y;
cin>>n>>k>>x>>y;

int check =x;
bool  flag = false;

while(true){

x = (x+k)%n;

if(y==x){
flag = true;
break;
}

else if(check ==x){
    flag = false;
    break;
}


}


if(flag){
    cout<<"YES"<<endl;
}

else cout<<"NO"<<endl;


}

}






