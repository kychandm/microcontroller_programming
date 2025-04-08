#include <iostream>
#define MAX_STUDENTS 100

struct student
{
    std::string name;
    int id;
    float grade;
};

void addStudent(student *students, int &count)
{
    std::cout << "Enter student name: ";
    std::cin >> students[count].name;
    std::cout << "Enter student ID: ";
    std::cin >> students[count].id;
    std::cout << "Enter student grade: ";
    std::cin >> students[count].grade;
    count++;
}

void displayStudents(student *students, int count)
{
    std::cout << "Student List:\n";
    if(count == 0)
    {
        std::cout << "No students to display.\n";
        return;
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << "\n";
    }
}

void searchStudent(student *students, int count)
{
    int id;
    std::cout << "Enter student ID to search: ";
    std::cin >> id;
    for (int i = 0; i < count; i++)
    {
        if (students[i].id == id)
        {
            std::cout << "Student found: Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << "\n";
            return;
        }
    }
    std::cout << "Student not found.\n";
}

int main() {
    student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    std::cout << "Student Management System\n";
    while(1) {
        std::cout << "\nChoose an option:\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Search Student\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    addStudent(students, count);
                } else {
                    std::cout << "Student list is full.\n";
                }
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
    

}