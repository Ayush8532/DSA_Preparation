#include <bits/stdc++.h>
using namespace std;
void printNGE(int a[], int n)
{
	stack<int> s;
	vector<int>v;
	for (int i = n-1; i>=0; i--) {
		if(s.size()==0)
		{
			v.push_back(-1);
		}
		else if(s.size()>0 && s.top()>a[i]){
			v.push_back(s.top());
		}
		else if(s.size()>0 && s.top()<=a[i])
		{
			while(s.size()>0 && s.top()<=a[i])
			{
				s.pop();
			}
			if(s.size()==0)
			{
				v.push_back(-1);
			}
			else
			{
				v.push_back(s.top());
			}
		}
		s.push(a[i]);
	}	
	reverse(v.begin(),v.end());	
	for (int i = 0; i < n; i++)
		cout << a[i] << " --> " << v[i] << endl;
}
// Driver Code
int main()
{
	int a[] = {1,3,2,4};
	int n = 4;

	// Function call
	printNGE(a,4);
	return 0;
}
