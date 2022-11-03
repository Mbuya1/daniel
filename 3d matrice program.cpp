// program for 3d array
#include <iostream>
using namespace std;
int main()
{
	//variable declaration and definition
	int a[2][3][3]={
		{{1,2,3},{3,4,5},{6,7,8}},
		{{10,11,12},{13,14,15},{16,17,18}}
		};
		int i,j,k;
		for( i=0;i<2;i++)
		{
			// using nested loops to get info from the other groups
			for(j=0;j<3;j++)
			{
				for( k=0;k<3;k++)
				{
					//printing out
					cout<<a[i][j][k]<<" , ";
					}
	       	}
		}
return 0;
  }
