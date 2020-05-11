#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n;
	    cin>>n;	    
	    int *diff=new int[n-1];
	    int *arr=new int[n];
	    cin>>arr[0];
	    for(int i=1;i<n;i++)
	    {
	        cin>>arr[i];
	        if(abs(arr[i]-arr[i-1])<=2)
	        {
	            diff[i-1]=1;
	        }
	        else
	        {
	            diff[i-1]=0;
	        }
	    }
	    int count = 0;  
        int result1 = 0,result2=78383;
        for (int i = 0; i < n-1; i++) 
        { 
            if (diff[i] == 0) {
            result2= min(result2,count);
            count = 0; 
            }
            else
            { 
                count++;//increase count 
                result1 = max(result1, count); 
                
            } 
        }
        result2= min(result2,count);
	    
        std::cout << result2+1<<" "<<result1+1 << std::endl;
	   
	    
	}
	return 0;
}
