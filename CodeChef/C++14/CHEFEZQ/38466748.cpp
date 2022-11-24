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

int n,k;
cin>>n>>k;


int a[n];
for(int i =0; i<n; i++){

    cin>>a[i];
}



int carry =0;
int sum =0;
int ans =0;
bool flag = false;
for(int i =0; i<n; i++){

 sum+=a[i];
 sum+=carry;

 if(sum<k){

    ans =i+1;
    flag = true;
    break;

 }

 carry = sum-k;
 sum =0;
   


}

//cout<<carry<<endl;
if(flag){

cout<<ans<<endl;

}

else if(!flag) cout<<(n+(carry+k)/(k))<<endl;

}

}






