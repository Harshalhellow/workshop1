#include "University.h"
#include "Course.h"

  University(std::string name, std::string location){
    this->name = name ;
    this->location = location;
    numCourses = 0;
    courses = nullptr;
  }
  void University::addCourse(int id, std::string name) {
    Course* newCourses = new Course[numCourses + 1];
    for (int i = 0; i < numCourses; i++) {
        newCourses[i] = courses[i];
    }
    newCourses[numCourses] = Course(id, name);
    delete[] courses;
    courses = newCourses;
    numCourses++;
}

void University::addStudentToCourse(int courseId, std::string studentName) {
    for (int i = 0; i < numCourses; i++) {
        if (courses[i].getId() == courseId) {
            courses[i].addStudent(studentName);
            break;
        }
    }
}

void University::addGradeForStudent(int courseId, int studentId, int grade) {
    for (int i = 0; i < numCourses; i++) {
        if (courses[i].getId() == courseId) {
            courses[i].addGradeForStudent(studentId, grade);
            break;
        }
    }
}