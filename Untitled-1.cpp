#include<iostream>
using namespace std;
class students
{
    public:
    int age;
    char arr[20],arr3[20];
    void student()
    {
        cout<<"enter the age"<<endl;
        cin>>age;
        cout<<"enter the name"<<endl;
        cin>>arr;
        cout<<"enter the branch"endl;
        cin>>arr3;
        cout<<"name="<<arr<<endl<<"age="<<age<<endl<<"branch="<<arr3<<endl;
    }
    };
    int main()
    {
        
        students s1;
        s1.students();
       return 0;
}