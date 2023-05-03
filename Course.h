#include <string>
#include "Person.h"

class Course {
private:
    int id;
    std::string name;
    Person** persons;
    int numPersons;

public:
    Course(int id, std::string name);
    void addStudent(std::string studentName);
    void addGradeForStudent(int studentId, int grade);
};