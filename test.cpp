#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int n,m,k,a,ans=100000;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a!=0 && a<=k)ans=min(ans,10*abs(m-i));
	}
	cout<<ans<<endl;
	return 0;
}
