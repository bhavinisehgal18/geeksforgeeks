#include<iostream>
using namespace std; 
  
void segregate(int arr[], int n) 
{ 
    int count = 0; 
  
    for (int i = 0; i < n; i++) { 
        if (arr[i] == 0) 
            count++; 
    } 
  
    
    for (int i = 0; i < count; i++) 
        arr[i] = 0; 
  
    
    for (int i = count; i < n; i++) 
        arr[i] = 1; 
} 
   
void print(int arr[], int n) 
{ for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout<<endl;    
} 
int main() 
  { 
    int t;
	cin>>t;
	while(t!=0)
	{   
        int n;
        cin>>n;
	    int arr[n];
	  for(int i=0; i<n;i++)
	    {
	        cin>>arr[i];
	    }
     segregate(arr, n); 
     print(arr, n); 
      t--;
      
	}
  return 0; 
} 
  