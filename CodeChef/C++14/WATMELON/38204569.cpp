#include<bits/stdc++.h>
using namespace std;
#define int long long

/*int a[190];
bool func(int x, int b, int n){

  if(x==n && b==0){
    return true;
  }


 else if(x==n && b!=0){
    return false;
 }


 else {return func(x+1,(b+a[x+1] + 360)%360 ,n) || func(x+1, (b-a[x+1]+360)%360 , n);
}


}

*/
int32_t main(){

  int t;
  cin>>t;

  while(t--){


    


    int n;
    cin>>n;


    int a[n];

    for(int i =0; i<n; i++){

        cin>>a[i];
    

    }
  
    if(n==1){


        if(a[0]<0){
            cout<<"NO"<<endl;
        }

        else cout<<"YES"<<endl;
    }

   else if(n<=2){

   int sum =0;

  
    if(a[0]>= 0 && a[1]>=0){

    cout<<"YES"<<endl;
   }

   else if(a[0]+a[1]>=0){

    cout<<"YES"<<endl;
   }

   else cout<<"NO"<<endl;
  
  
    }



    else {



    int sum =0;

    for(int i =0; i<n; i++){

        sum+=a[i];
    }

   if(sum>=0){

    cout<<"YES"<<endl;
   }

   else cout<<"NO"<<endl;

    }



  }

  

}





