#include <iostream>
using namespace std;
char stack[10];
int n=100,top=-2;
int leave=2,index=0;
class stackcl{
	char Sval;
	public:
		
string leave_2nd_print_reverse()
{
	S:
	cout<<"Enter string:"<<endl;
	cin>>Sval;
	if (top==n-1)
	{
		cout<<"stack is overflow:"<<endl;
	}
	else
	{
		
		
		for(int i=0;i<10;i++)
		{
			if(Sval==stack[i])
			{
				cout<<"you have already entered this:"<<endl;
				goto S;
			}	
		}
		cout<<Sval<<":is added"<<endl;
		top++;
		stack[top]=Sval;
	    index++;
	}
	cout<<index<<": index is added"<<endl;
	system("pause");
	return "NULL";
}
int pop()
{
	if (top<=-2)
	{
		cout<<"Empty"<<endl;
	}
	else 
	{
		cout<<"The top SSSvaluse is removerd:"<<stack[top]<<endl;
		top--;
		index--;
	}
	system("pause");
}
 int count_after_specific()
 {
 	for(int i=index;i>=-1;i=i-leave)
   	 {
		cout<<stack[i];
		leave=1+leave;
 	    }
	 cout<<endl;
	 	for(int i=index;i>=0;i--)
 	{
 		cout<<i;
 		cout<<",";
	 }
	 cout<<endl;
 	// code of stack
 	for(int i=top;i>=-1;i--)
 	{
 		cout<<stack[i];
 		cout<<",";
	 }
	 cout<<endl;
	 	 system("pause");
 }
	
	
};
int main()
{
	stackcl S;
	int ch,n=0,a=0;
	for(int i=0;i<1;)
	{ 
	system("cls");
    cout << endl <<"You run this program #"<<a<<" Times"<<endl;
	cout << endl <<"\t\t1.Push";
    cout << endl <<"\t\t2.Pop";
    cout << endl <<"\t\t3.Stack";
    cout << endl <<"\t\t4.Exit";
	cout << endl <<"Enter_\t:";
    cin>>ch;
    if(ch==1)
    {
    	S.leave_2nd_print_reverse();
	}
	else if(ch==2)
	{
		S.pop();
	}
	else if (ch==3)
	{
	S.count_after_specific();
	}
	else if (ch==4)
	{
		i++;
	}
	a++;
   }
   return 0;
}

