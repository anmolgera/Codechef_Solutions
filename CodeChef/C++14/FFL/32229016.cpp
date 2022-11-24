#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


int n;
cin>>n;
while(n--){

int a,b;
cin>>a>>b;

int* p = new int[a];
int *q = new int[a];

for(int i =0; i<a; i++){
	cin>>p[i];
}

for(int i =0; i<a; i++){
    cin>>q[i];
}

int Max1 = INT_MAX;
int Max2 = INT_MAX;
int count =0;
int count1 =0;

for(int i =0; i<a; i++){

if(q[i]==0) {

   Max1=  min(p[i],Max1);   
   count++;

}

else{ Max2 = min(p[i],Max2);
	count1++;
}
}

if(count1&&count){

if(Max1 +  Max2 + b <= 100){
	cout<<"yes"<<endl;
}

else cout<<"no"<<endl;

}

else cout<<"no"<<endl;
}}