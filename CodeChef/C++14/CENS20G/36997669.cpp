
 #include<iostream>
#include<map>

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
 

 
 
int32_t main() 
{ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 //anmol();
 int t;
 cin>>t;
 while(t--){

 
string s;
cin>>s;

int x,y;
cin>>x>>y;

int m;
cin>>m;




map<char,int> mp;

mp['L'] =0;
mp['R'] =0;
mp['U'] =0;
mp['D'] =0;


for(int i =0; i<s.length(); i++){

  mp[s[i]]++;
}


while(m--){

 int x1,y1;
 cin>>x1>>y1;

 int xdiff =x1-x;
 int ydiff =y1-y;

 //xdiff = x1-x;
 //ydiff = y1-y;
int sum =0;

bool flag = true;

 if(xdiff<0){

 if(mp['L']>=abs(xdiff)){

sum+=abs(xdiff);


 }

 else flag = false;
 }

 else {

if(mp['R']>=abs(xdiff)){

sum+=abs(xdiff);


 }

 else flag = false;
  
 }


 if(ydiff<0){
 
 if(mp['D']>=abs(ydiff)){

sum+=abs(ydiff);


 }

 else flag = false;

  
 }

 else {

   if(mp['U']>=abs(ydiff)){

sum+=abs(ydiff);


 }

 else flag = false;


  
 }



if(flag==false){
  cout<<"NO"<<"\n";


}


else   cout<<"YES"<<" "<<sum<<"\n";
}





 }


}
 
 