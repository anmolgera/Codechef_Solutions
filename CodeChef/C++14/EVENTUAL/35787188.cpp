#include <bits/stdc++.h>
using namespace std;
int ans;
int main()
{  

  int n;
  cin>>n;
  
  while(n--){

  int t;
  cin>>t;
  string s;
  cin>>s;

  map<char,int> mp;



  for(int i =0; i<s.length(); i++){

     
   mp[s[i]]++;
 


  }


  bool flag = false;
  for(int i =0; i<s.length(); i++){


    if(mp[s[i]]%2){

     flag = true;
     break;
    }

  }
 

 if(flag){

  cout<<"NO"<<endl;
 }

 else cout<<"YES"<<endl;
 
}

}



  
    


    
  



  











  
 






   

  
  

   
   





  










 
 





  



 
 
    

  
 
 
 
 
 


 

   

 
 



  
  












 
 





  



 
 
    

  































 
 



  
  












 
 





  



 
 
    

  
 
 
 
 
 


 

   

 
 



  
  












 
 





  



 
 
    

  
