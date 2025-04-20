#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        char grade;
        string group = "2025 group";
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setGrade(char g){
            grade = g;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        char getGrade(){
            return grade;
        }
        void displayInfo() {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Grade: " << getGrade() << endl;
        }
};

int main() {
    Student s;
    s.setName("GI. Joe");
    s.setAge(20);
    s.setGrade('F');
    
    s.displayInfo();
    
    return 0;
}