#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> adj(10009,0);

/*bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i< n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

*/
int32_t main(){

  int t;
  cin>>t;

  while(t--){


    


    int n;
    cin>>n;

    
//int b[n+1];


    for(int i =1; i<=n; i++){

        adj[i] =0;
    }


    for(int i =1; i<n; i++){

       int u,v;
       cin>>u>>v;


       //adj[u]++;
       adj[v]--;


    } 
   
   int count =0;
   

   //int mn = INT_MAX;
   for(int i =1; i<=n; i++){
    
     if(adj[i]==0){
        count++;
     }
   }


   cout<<count-1<<endl;

  }

  

}





