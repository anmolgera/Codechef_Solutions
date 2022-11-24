
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

int n;
cin>>n;


int k;
cin>>k;

string s;
cin>>s;


int count0 =0;
int count1  =0;


for(int i =0; i<s.length(); i++){

  if(s[i]=='0'){
    count0++;
  }

  else count1++;
}

int sex = n/k;

string ans ="";

if(count0%sex!=0 || count1%sex!=0){

  cout<<"IMPOSSIBLE"<<endl;
}

else {


count0 = count0/sex;
count1 = count1/sex;

while(count0--){

  ans+='0';
}

while(count1--){

  ans+='1';
}


string rev = ans;
reverse(rev.begin(),rev.end());
sex--;

string bj = ans;

int flag =1;

while(sex--){

if(flag){

  bj+=rev;
  flag =0;
}

else {


  bj+=ans;
  flag =1;
}




}

cout<<bj<<endl;



}













}}
 



 


 
    
    
