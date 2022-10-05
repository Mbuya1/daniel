//program to prompt user then add while
#include<iostream>
using namespace std;
int main() 
{
int x,y,z,sum=0;
cout<<"Enter the starting point:";
cin>>x;
cout<<"Enter the ending point:";
cin>>y;
while(x<=y)
{
	cout<<x<<endl;
	sum += x;
	x++;
	
}

cout<<"The sum is :"<<sum;
	
	return 0;	
}