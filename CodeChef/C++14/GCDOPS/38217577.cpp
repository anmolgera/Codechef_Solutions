#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n) 
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
int32_t main(){

  int t;
  cin>>t;

  while(t--){


    


    int n;
    cin>>n;

    
    int b[n+1];

    for(int i =1; i<=n; i++){

        cin>>b[i];
    

    } 
   
   bool flag = true;

   if(b[1]!=1){
    cout<<"NO"<<endl;
   }

   else if(b[1]==1){

     
       for(int i =2; i<=n; i++){


             if(isPrime(i)){
              
                if(b[i]==i || b[i]==1){
                   flag = true;
                   //cout<<b[i]<<endl;
                }

                else { 
               // cout<<b[i]<<endl;
                flag = false;
                break;
                }
             }

             else if(!isPrime(i)){

                   if(b[i]==i || b[i] ==1 || (__gcd(b[i],i)==b[i])){
                    flag = true;
                    //cout<<b[i]<<endl;
                   }

                   else {
                    //cout<<b[i]<<endl;
                    flag = false;
                    break;
                   }


             }



       }





 








   }


  if(flag){

    cout<<"YES"<<endl;
  }


  else cout<<"NO"<<endl;


  }

  

}





