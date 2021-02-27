#include<iostream>//operator overloading of == operator
#include<conio.h>
using namespace std;
class compare
{
	int a;
	public :
		void getdata()
		{
			int x;
	cout<<"enter value of a"<<endl;
			cin>>x;
			a=x;
		}
		void operator==(compare t)
		{
			if(a==t.a)
			cout<<"equal"<<endl;
			else
		cout<<"not equal"<<endl;
		}
		
	};
	int main()
	{
		compare t1,t2;
		t1.getdata();
		t2.getdata();
		t1==t2;
		getch();
		return 0;
	}
