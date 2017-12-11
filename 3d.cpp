#include <iostream>
using namespace std;
int main()
{
int myArray[5]={20,34,3,20,45};
int x=20;
int counter=0;
for(int i=0; i<5; i++)
{
	if(myArray[i]==x)
	{
		counter++;
	}
}
if(counter>0)
{
	cout<<x<<"was found in the array"<<counter<<"times";
}
else
{
	cout<<x<<"was not found in the array";
}
return 0;	
}




