#include <iostream>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    
    for(int i=0;i<t;i++)
    { 
      cin>>m>>n;    
      int ru=0;
	  int rd=m-1;
	  int cl=0;
	  int cr=n-1;
      int arr[m][n];
      for(int i=0;i<m;i++)
      {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
      }
	  while(cl<=cr&&ru<=rd)
      {
          for(int j=cl;j<=cr;j++)
          {
              cout<<arr[ru][j]<<" ";
          }
          ru++;
          for(int i=ru;i<=rd;i++)
          {
              cout<<arr[i][cr]<<" ";
          }
          cr--;
          if(ru<=rd)
          {
              for(int j=cr;j>=cl;j--)
              {
                  cout<<arr[rd][j]<<" ";
              }
              rd--;
          }
          if(cr>=cl)
          {
              for(int i=rd;i>=ru;i--)
              {
                  cout<<arr[i][cl]<<" ";
              }
              cl++;
          }
      }
     cout<<endl; 
    }
	
    return 0; 
}  