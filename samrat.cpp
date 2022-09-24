#include <iostream>
#define max 100
using namespace std;
class Employee
{
     int emp_code, emp_age;
     char emp_design[max], emp_name[max];
     double base_salary, gross_salary, net_salary, ta, da, hra;

public:
     void emp_input()
     {
          cout << "\n Enter employee details:\n";
          cout << "\n Enter employee code:\n";
          cin >> emp_code;
          cout << "\n Enter emp_name:";
          cin >> emp_name;
          cout << "\n Enter emp_age:";
          cin >> emp_age;
          cout << "\n Enter emp_design:";
          cin >> emp_design;
          cout << " Enter employee base salary:";
          cin >> base_salary;
          cout << " Enter employee travelling allowence:";
          cin >> ta;
          cout << " Enter employee daily allowence:";
          cin >> da;
          cout << " Enter employee housing and rent allowence:";
          cin >> hra;
     }
     void salary_cal()
     {
          gross_salary = base_salary + ta + da + hra;
          net_salary = gross_salary - (gross_salary * 0.1);
          cout << "\n gross salary:" << gross_salary;
          cout << "\n net salary is:" << net_salary;
     }
     void emp_output()
     {
          cout << "\n\n showing employee detail:";
          cout << " code:" << emp_code;
          cout << "\n name:" << emp_name;
          cout << "\n age:" << emp_age;
          cout << "\n design:" << emp_design;
          cout << "\n salary:" << base_salary;
          salary_cal();
     }
};
int main()
{

     Employee E;
     E.emp_input();
     E.emp_output();
     return 0;
}
