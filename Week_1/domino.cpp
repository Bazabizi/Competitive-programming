#include<iostream>
using namespace std;
int domino(int m,int n)
{
	return (m*n)/2;
}
int main()
{
	int x,y,z;
	cin>>x>>y;
	cout<<domino(x,y);
	
}

