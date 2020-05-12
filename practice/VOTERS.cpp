#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long n1,n2,n3;
	std::cin >> n1>>n2>>n3;
	map<int,int> m;
	long element;
	int count=0;
	for(long i=0;i<n1+n2+n3;i++)
	{
	    std::cin >> element;
	    m[element]++;
	    if(m[element]==2) count++;
	}
	map<int,int>::iterator it;
	std::cout << count << std::endl;
	for(it=m.begin();it!=m.end();it++)
	{
	    if(it->second >=2)
	    {
	        std::cout << it->first << std::endl;
	    }
	}
	
	return 0;
}
