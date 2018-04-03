#include<cstdlib>
#include<iostream>
#include<vector> 

using namespace std;

struct Employee {
    string name;
    string id;
    int vacation;
    double salary;
};


template<class Iter, class T, class Op>
T reduce (Iter begin, Iter end, T init, Op operation) {
    T result = init;
    while(begin != end) {
        result = operation(result, *begin);
        begin++;
    }
    return result;
};

int main() {
    vector<Employee> v;
    Employee e1 = {"samuel","231",4,8000};
    Employee e2 = {"Ben","2323",9,10000};
    v.push_back(e1);
    v.push_back(e2);
    double sum_salaries =
    reduce(v.begin(), v.end(), 0.0,
          [](double s, Employee e)
            {return s + e.salary;}  );
    int result =  reduce(v.begin(), v.end(), 0, [](int vacation, Employee e) {return vacation + e.vacation; } );
    cout << result << endl;

    


}
