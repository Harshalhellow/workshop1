#include "Course.h"
#include "Student.h"

Course::Course(int id, std::string name) : id(id), name(name), numPersons(0), persons(nullptr) {}

void Course::addStudent(std::string studentName) {
    Person** newPersons = new Person*[numPersons + 1];
    for (int i = 0; i < numPersons; i++) {
        newPersons[i] = persons[i];
    }
    newPersons[numPersons] = new Student(numPersons + 1, studentName);
    delete[] persons;
    persons = newPersons;
    numPersons++;
}

void Course::addGradeForStudent(int studentId, int grade) {
    for (int i = 0; i < numPersons; i++) {
        if (persons[i]->getId() == studentId) {
            // Add logic for adding grade for the student
            break;
        }
    }
}
