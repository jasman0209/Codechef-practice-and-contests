#include<bits/stdc++.h>

using namespace std;

int countswaps(int arr[], int n)
{/*
3
3 1
2 3 1
2 3
5 10
2 4 5 1 3
1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5
4 1
3 1 4 2
1 2
    */

	pair<int, int> pairarray[n];
	for (int i = 0; i < n; i++)
	{
		pairarray[i].first = arr[i];
		pairarray[i].second = i;
	}


	sort(pairarray, pairarray + n);


	vector<bool> vis(n, false);


	int ans = 0;


	for (int i = 0; i < n; i++)
	{

		if (vis[i] || pairarray[i].second == i)
			continue;


		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

			j = pairarray[j].second;
			cycle_size++;
		}

		if (cycle_size > 0)
		{
			ans += (cycle_size - 1);
		}
	}
	for(int i=0;i<5;i++)
    {
        int a=1;
    }
	// Return result
	return ans;
}

// Driver program to test the above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int *arr=new int[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a,b;
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            a=a-1;
            b=b-1;
            if(arr[a]>arr[b]&& a<b)
            {
                swap(arr[a],arr[b]);
            }
        }
    
        count=countswaps(arr,n);
        cout<<count<<endl;
        delete []arr;
    }
	return 0;
}
