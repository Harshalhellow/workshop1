#include <string>
#include "Course.h"

#ifndef UNIVERSITY_H
#define UNIVERSITY_H
class University {
  private:
  std::string name;
  std::string location;
  Course* courses;
  int numCourses;
  public:
  University(std::string name, std::string location){
    this->name = name ;
    this->location = location;
  }  
void addCourse(int id, std::string name);
void addStudentToCouse(int CourseId, std::string studentName);
void addGradesForStudent(int courseId, int studnetId, int grade);
};


#endif