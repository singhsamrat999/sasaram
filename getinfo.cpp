#include<iostream>
using namespace std;
class student
{
	public:
		int age,rollno;
		char name[40];
		void getinfo()
		{
			cout<<"Enter your name:"<<endl;
			cin>>name;
			cout<<"Enter your age:"<<endl;
			cin>>age;
			cout<<"Enter your roll number:"<<endl;
			cin>>rollno;
		}
		};
		class marks:public student
		{
			public:
				int p,c,m,t;
				//float a;
				int showdata()
				{
					cout<<"enter your physich marks"<<endl;
					cin>>p;
					cout<<"enter your chemistry marks"<<endl;
					cin>>c;
					cout<<"enter your maths marks"<<endl;
					cin>>m;
					t=p+c+m;
					//a=(t/300)*100;
					cout<<"your total marks is:"<<t<<endl;
					cout<<"your percentage is:"<<(t/3)<<"%"<<endl;
				}
			};
			int main()
			{	
			marks m1;
			m1.getinfo();
			m1.showdata();
			return 0;
	
}


