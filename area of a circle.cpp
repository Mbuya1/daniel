//program to calculate the area of a circle using a function
#include<iostream>
using namespace std;
float circle(int r);//function prototype
int main()
{
int radius;
cout<<"enter radius :";
cin>>radius;
float area=circle(radius);//calling function 
cout<<"the area is :"<<area<<endl;
return 0;
}
// function definition
float circle(int r){
	float area;
	area=3.142*r*r;
	return area;	
}