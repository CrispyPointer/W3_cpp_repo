#ifndef STUDENT_H
#define STUDENT_H
#include<string>

class Student{
    public:
                    Student();
                    Student(std::string s);
                    std::string get_name(){return name;}
                    void set_name();
    protected:
                    std::string name;
};

#endif