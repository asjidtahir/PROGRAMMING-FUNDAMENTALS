#include<iostream>
using namespace std;

int array_sum(int a[], int n) 
{ 
    if (n<=0)
	{
		return 0;
	}
	else
	{
		return (array_sum(a,n-1)+a[n-1]);       
	}
} 

int main() 
{ 
	int a[]={0,1,2,3,4};
	int n=sizeof(a)/sizeof(a[0]);
   
   cout<<array_sum(a,n)<<endl;
	system("pause");
    return 0; 
}

