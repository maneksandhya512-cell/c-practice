# include <iostream>
using namespace std;

int maint(){
    int salary ;

    cout << "enter a salary :";
    cin >> salary;

    if (salary <= 100000){
        int gross_salary = salary + salary * 0.2 +salary * 0.8;
        cout << "gross salary is :" << gross_salary<< endl;
    }

    if (salary <= 20000){
        nt gross_salary = salary + salary * 0.25 +salary * 0.90;
        cout << "gross salary is :" << gross_salary<< endl;
    }
    

    if (salary > 20000){
        nt gross_salary = salary + salary * 0.3 +salary * 0.95;
        
        cout << "gross salary is :" << gross_salary<< endl;
    }
    }

    return 0;
}