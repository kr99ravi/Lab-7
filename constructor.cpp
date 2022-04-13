#include <iostream>
using namespace std;

//A class with few datamembers and constructors or member functions 
class Employee
{
    //Data members -to store Employee details such as Employee name,id,age,designation etc;  
    int Eid;     
    string Ename;
    int Eage;
    string Edesignation;
    double Esalary;

public:
    Employee() // Default constructor
    {
        Ename = "David";
        Eid = 6254;
        Edesignation = "clerk";
        Esalary = 41000;
        Eage = 28;
    }
    
    Employee(string EmpName, int EmpNo, int EmpID, string EmpDesig, double Empsalary, int EmpAge = 25) 
    {   
        // Parameterized constructor and constructor overloading.
        Ename = EmpName;
        Eid = EmpID;
        Edesignation = EmpDesig;
        Esalary = Empsalary;
        Eage = EmpAge;
    }
    
    Employee(const Employee &obj) // copy constructor..
    {
        Ename = obj.Ename;
        Eid = obj.Eid;
        Eage = obj.Eage;
        Edesignation = obj.Edesignation;
        Esalary = obj.Esalary;
    }
    
    Employee(double EmpSalary)  //constructor overloading.
    {
        Ename="Smith";
        Eid=1486;
        Edesignation="Head";
        Eage=45;
        Esalary = EmpSalary * 2;
    }
    //A display function to display all the details of an Employee ..
    void displayData(void)
    {
        cout << "Employee's Name : " << Ename << endl;
        cout << "Employee's ID : " << Eid << endl;
        cout << "Employee's Designation : " << Edesignation << endl;
        cout << "Employee's Salary : " << Esalary << endl;
        cout << "Employee's Age : " << Eage << endl;
        cout<<"_____________________________________\n";
    }
};

//Driver function
int main(void)
{
    Employee e1;
    e1.displayData();  //prints the default values.. -default constructor is called;
    Employee e2("Hema", 117, 289, "Programmer", 30000);  // parameterized constructor is called;
    e2.displayData();  //prints the passed values..
    Employee e4(e2);  //copy constructor is called   -copies the 'e2' to 'e4' ..
    e4.displayData();  //prints same result as 'e2' ..
    Employee e5(59999.99); //constructor overloading..
    e5.displayData();

    return 0;
}
