//program to prompt the user then add using do while
#include<iostream>
using namespace std;
int main()
{
int x,y,sum=0;
cout<<"Enter the starting point :";
cin>>x;
cout<<"Enter the ending point :";
cin>>y;
do{
	cout<<x<<endl;
	sum+=x;
	x++;
	}
	while(x<=y);
	cout<<"The sum is :"<<sum;
	return 0;	
}