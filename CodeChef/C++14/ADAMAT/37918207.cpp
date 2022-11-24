#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long 

/*#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define mii             map<int,int>
#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
*/

void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



/*int solve34(){
   
    int n;
    cin>>n;
    
    int ans =0;
    int x=((n*(n+1))/2);
    int s=0;
    if(x%2!=0)
    return 0;
    x=x/2;
    
    int l=1;
    int h=n;
    int a=-1;
    while(l<=h){
        int mid = (l+h)/2;
        if((mid*(mid+1))/2>x){
            h=mid-1;
        }
        else{
            a=mid;
            l=mid+1;
        }
    }
   
    ans+=(n-a);
  
   if((a*(a+1))/2==x){
        int y=((a-1)*(a))/2;
            int z=(n-a);
            ans+=y;
            ans+=((z-1)*z)/2;
            
   }
   return ans;
    
    
}
*/
int32_t main() {
   anmol();
    // A Utility Function to check whether destination cell has 
// been reached or not 
/*bool isDestination(int row, int col, Pair dest) 
{ 
    if (row == dest.first && col == dest.second) 
        return (true); 
    else
        return (false); 
} 

// A Utility Function to calculate the 'h' heuristics. 
double calculateHValue(int row, int col, Pair dest) 
{ 
    // Return using the distance formula 
    return ((double)sqrt ((row-dest.first)*(row-dest.first) 
                        + (col-dest.second)*(col-dest.second))); 
} 

// A Utility Function to trace the path from the source 
// to destination 
void tracePath(cell cellDetails[][COL], Pair dest) 
{ 
    printf ("\nThe Path is "); 
    int row = dest.first; 
    int col = dest.second; 

    stack<Pair> Path; 

    while (!(cellDetails[row][col].parent_i == row 
            && cellDetails[row][col].parent_j == col )) 
    { 
        Path.push (make_pair (row, col)); 
        int temp_row = cellDetails[row][col].parent_i; 
        int temp_col = cellDetails[row][col].parent_j; 
        row = temp_row; 
        col = temp_col; 
    } 

    Path.push (make_pair (row, col)); 
    while (!Path.empty()) 
    { 
        pair<int,int> p = Path.top(); 
        Path.pop(); 
        printf("-> (%d,%d) ",p.first,p.second); 
    } 

    return; 
} 

// A Function to find the shortest path between 
// a given source cell to a destination cell according 
// to A* Search Algorithm 
void aStarSearch(int grid[][COL], Pair src, Pair dest) 
{ 
    // If the source is out of range 
    if (isValid (src.first, src.second) == false) 
    { 
        printf ("Source is invalid\n"); 
        return; 
    } 

    // If the destination is out of range 
    if (isValid (dest.first, dest.second) == false) 
    { 
        printf ("Destination is invalid\n"); 
        return; 
    } 

    // Either the source or the destination is blocked 
    if (isUnBlocked(grid, src.first, src.second) == false || 
            isUnBlocked(grid, dest.first, dest.second) == false) 
    { 
        printf ("Source or the destination is blocked\n"); 
        return; 
    } 

    // If the destination cell is the same as source cell 
    if (isDestination(src.first, src.second, dest) == true) 
    { 
        printf ("We are already at the destination\n"); 
        return; 
    } 

    // Create a closed list and initialise it to false which means 
    // that no cell has been included yet 
    // This closed list is implemented as a boolean 2D array 
    bool closedList[ROW][COL]; 
    memset(closedList, false, sizeof (closedList)); 

    // Declare a 2D array of structure to hold the details 
    //of that cell 
    cell cellDetails[ROW][COL]; 

    int i, j; 

    for (i=0; i<ROW; i++) 
    { 
        for (j=0; j<COL; j++) 
        { 
            cellDetails[i][j].f = FLT_MAX; 
            cellDetails[i][j].g = FLT_MAX; 
            cellDetails[i][j].h = FLT_MAX; 
            cellDetails[i][j].parent_i = -1; 
            cellDetails[i][j].parent_j = -1; 
        } 
    } 

    // Initialising the parameters of the starting node 
    i = src.first, j = src.second; 
    cellDetails[i][j].f = 0.0; 
    cellDetails[i][j].g = 0.0; 
    cellDetails[i][j].h = 0.0; 
    cellDetails[i][j].parent_i = i; 
    cellDetails[i][j].parent_j = j; 

    /* 
    Create an open list having information as- 
    <f, <i, j>> 
    where f = g + h, 
    and i, j are the row and column index of that cell 
    Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1 
    This open list is implenented as a set of pair of pair.*/
    int t;
    cin>>t;
    while(t--){
      
        int n;
        cin>>n;

        /*int arr[n];

        for(int i =0; i<n; i++){

            cin>>arr[i];
        }
        

        sort(arr,arr+n);

        int na =0;
        if(arr[0]!=0){
        na++;

        }

    

      for(int i =1; i<n; i++){

          if(arr[i]-arr[i-1]!=0){
            na++;
          }
      }


      cout<<na<<endl;

      */


        vector<vector<int>> v;

        for(int i =0; i<n; i++){

                    vector<int> v1;


                    for(int k =0; k<n; k++){


                           int x;
                           cin>>x;

                           v1.push_back(x);

                    }

                    v.push_back(v1);

        }

       int sex=0;

      for(int i = n-1; i>0; i--){

         if(v[i][i]!=v[i][i-1]+1){
         
         sex++;
         //cout<<sex<<endl;
         for(int a =0; a<i+1; a++){



            for(int b = a; b<i+1; b++){


                swap(v[a][b],v[b][a]);
            }
         }



         }

         else continue;
    

      }

  cout<<sex<<endl;

        }
    }
    
