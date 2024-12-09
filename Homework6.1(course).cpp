/*1)
#include <iostream>
using namespace std;


long long Func(int num, int exp);

int main() {
    int num, exp;


    cout << "Enter the num: ";
    cin >> num;
    cout << "Enter the exponent: ";
    cin >> exp;


    if (exp < 0) {
        cout << "Error" << endl;
    }
    else {
        long long result = Func(num, exp);
        cout << num << " raised to " << exp << " is: " << result << endl;
    }

    return 0;
}


long long Func(int num, int exp) {

    if (exp == 0) {
        return 1;
    }


    return num * Func(num, exp - 1);
}*/

/*2)-6)
#include <iostream>
#include <vector>
using namespace std;

class Employee {
private:
    int age;               
    int yearsOfService;    
    double salary;         

public:
    
    Employee() : age(0), yearsOfService(0), salary(0.0) {}

    Employee(int a, int y, double s) : age(a), yearsOfService(y), salary(s) {}

    
    void setAge(int a) { age = a; }
    void setYearsOfService(int y) { yearsOfService = y; }
    void setSalary(double s) { salary = s; }

    int getAge() const { return age; }
    int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }

    
    void displayInfo() const {
        cout << "Age: " << age << ", Years in Service: " << yearsOfService << ", Salary: $" << salary << endl;
    }
};

int main() {
    int numberOfEmployees;

    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    vector<Employee> employees;

    
    for (int i = 0; i < numberOfEmployees; i++) {
        int age, yearsOfService;
        double salary;

        cout << "\nEnter info for employee " << i + 1 << ":\n";
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter years of service: ";
        cin >> yearsOfService;
        cout << "Enter salary: ";
        cin >> salary;

        
        employees.push_back(Employee(age, yearsOfService, salary));
    }

    cout << "\nEmployee Information:\n";
    for (int i = 0; i < employees.size(); i++) {
        cout << "Employee " << i + 1 << ": ";
        employees[i].displayInfo();
    }

    return 0;
}*/

/*3)-6)
#include <iostream>
#include <vector>
using namespace std;


class Employee {
private:
    int age;               
    int yearsOfService;    
    double salary;         

public:
    
    Employee() : age(0), yearsOfService(0), salary(0.0) {}

    Employee(int a, int y, double s) : age(a), yearsOfService(y), salary(s) {}

   
    int getAge() const { return age; }
    int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }

    void setAge(int a) { age = a; }
    void setYearsOfService(int y) { yearsOfService = y; }
    void setSalary(double s) { salary = s; }

    void displayInfo() const {
        cout << "Age: " << age << ", Years of Service: " << yearsOfService << ", Salary: $" << salary << endl;
    }
};

int main() {
    int numberOfEmployees;
    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    vector<Employee> employees;

    for (int i = 0; i < numberOfEmployees; i++) {
        int age, yearsOfService;
        double salary;

        cout << "\nEnter information for employee " << i + 1 << ":\n";
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter years of service: ";
        cin >> yearsOfService;
        cout << "Enter salary: ";
        cin >> salary;

  
        Employee emp(age, yearsOfService, salary);
        employees.push_back(emp);
    }

    cout << "\nEmployee Information:\n";
    for (int i = 0; i < employees.size(); i++) {
        cout << "Employee " << i + 1 << ": ";
        employees[i].displayInfo();
    }

    return 0;
}
*/
/*4)
#include <iostream>
using namespace std;

class Employee {
private:
    int age;               
    int yearsOfService;    
    double salary;         

public:
    
    Employee() : age(0), yearsOfService(0), salary(0.0) {}

    Employee(int a, int y, double s) : age(a), yearsOfService(y), salary(s) {}

  
    int getAge() const { return age; }
    int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }

    
    void setAge(int a) { age = a; }
    void setYearsOfService(int y) { yearsOfService = y; }
    void setSalary(double s) { salary = s; }

    
    void displayInfo() const {
        cout << "Age: " << age << ", Years of Service: " << yearsOfService << ", Salary: $" << salary << endl;
    }
};

int main() {
   
    Employee emp1, emp2;

    
    emp1.setAge(25);
    emp1.setYearsOfService(3);
    emp1.setSalary(40000);

    
    emp2.setAge(30);
    emp2.setYearsOfService(5);
    emp2.setSalary(50000);

    cout << "Employee 1 Information:" << endl;
    emp1.displayInfo();

    cout << "\nEmployee 2 Information:" << endl;
    emp2.displayInfo();

    return 0;
}
*/
/*5)-6)
#include <iostream>
#include <cmath>  
#include <vector>
using namespace std;


class Employee {
private:
    int age;               
    int yearsOfService;    
    double salary;         

public:
    
    Employee() : age(0), yearsOfService(0), salary(0.0) {}

    
    Employee(int a, int y, double s) : age(a), yearsOfService(y), salary(s) {}

    
    int getAge() const { return age; }
    int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }

    
    void setAge(int a) { age = a; }
    void setYearsOfService(int y) { yearsOfService = y; }
    void setSalary(double s) { salary = s; }

    
    void displayInfo() const {
        cout << "Age: " << age << ", Years of Service: " << yearsOfService << ", Salary: $" << salary << endl;
    }

    
    double GetRoundedSalary() const {
        return round(salary / 10.0) * 10.0;  
    }
};

int main() {
    int numberOfEmployees;
    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    vector<Employee> employees;

    for (int i = 0; i < numberOfEmployees; i++) {
        int age, yearsOfService;
        double salary;

        cout << "\nEnter information for employee " << i + 1 << ":\n";
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter years of service: ";
        cin >> yearsOfService;
        cout << "Enter salary: ";
        cin >> salary;


        Employee emp(age, yearsOfService, salary);
        employees.push_back(emp);
    }

    cout << "\nEmployee Information:\n";
    for (int i = 0; i < employees.size(); i++) {
        cout << "Employee " << i + 1 << ": ";
        employees[i].displayInfo();
    }

    return 0;
}
*/