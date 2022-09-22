#include <bits/stdc++.h>
using namespace std;
double Theatre(double x,double y,double z)
{
	return ceil(x/z)*ceil(y/z);
}
int main ()
{
	double x,y,z;
	cin>>x>>y>>z;
	cout<<(long long)Theatre(x,y,z);
	return 0;
}
