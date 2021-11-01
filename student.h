#ifndef STUDENT_H
#define STUDENT_H
#include<string>

//Declare a student class
class Student{
    public:
                    Student();
                    Student(std::string s);
                    std::string get_name(){return name;}
                    void set_name();
    protected:
                    std::string name; //This should be declare as a protected variable :D
};

#endif