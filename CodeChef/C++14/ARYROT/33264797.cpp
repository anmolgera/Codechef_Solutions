 #include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5 ;
int arr[N] , dp[N] , brr[N] ;



void leftRotatebyOne(int arr[], int n) 
{ 
  int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
} 
  
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n) 
{ 
    for (int i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
} 

int main(){

int t;
cin>>t;

while(t--){
 
 int n,b;
 cin>>n>>b;

 for(int i =0; i<n; i++){
    cin>>arr[i];
 }
  
  int d = (b%n);
  leftRotate(arr,d,n);

  for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
  }

}




}




