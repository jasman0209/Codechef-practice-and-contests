#include <bits/stdc++.h>
using namespace std;
int fun(unsigned long long n, int (&arr)[50]) 
{ 
    int p=0;
    if (n>1) 
    {arr[p]=n&1;p=fun(n>>1,arr);}
    arr[p]=n&1;
    return p+1;
}
int main() {
	// your code goes here
	long t;
	std::cin >> t;
	while(t--)
	{
	    unsigned long long x,y,l,r,maximum=0,ans,i,p=0;
	    cin>>x>>y>>l>>r;
	        if(x!=0&&y!=0)
	        {
	            ans=x|y; //OR of x and y (eg 12 | 7 =15 getting value)
	        }
	        else
	        {
	            ans=0; //if any of x or y is 0 then its ans is 0 only
	        }
	        if(ans>=l&&ans<=r)
	        {
	            std::cout << ans << std::endl; // if ans belongs to the range there is no problem
	        }
	        else
	        {
	            int digits=int(log2(r))+1;
	            //cout<<"aa"<<digits;
	            digits--;
	           unsigned long long sizex=(powl(2,digits))-1; //find the maximum number possible with a number of digits
	           unsigned long long sizey=(powl(2,digits)); // find number jiska and sbse kam hoga numbers ke sath coz of all zeros
	           unsigned long long value1,value2,value3,value4;
	           if(sizex>0){ 
	               value1=x&sizex;
	               
	           }
	           if(sizey>0) {
	               value2=x&sizey;
	               
	           }
	           //all combinations
	           if(sizey>0) {
	               value3=y&sizey;
	               
	           }
	           if(sizex>0) value4=y&sizex;
	           unsigned long long finalvalue=0;
	           if(value1*value4>value3*value2)
	           {
	               finalvalue=sizex;
	           }
	           else if(value1*value4<value3*value2)
	           {
	               finalvalue=sizey;
	           }
	           ans=finalvalue&ans;
	           std::cout << ans << std::endl;
 	        }
 	        
	    
	    
	}
	return 0;
}
