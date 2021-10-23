#ifndef STUDENTCLUB_H
#define STUDENTCLUB_H
#include"student.h"
#include<vector>

class StudentClub{
    public:
                StudentClub(Student* p, Student* v, Student* s, Student* t, std::vector<Student*>m);
                Student* get_president() const;
                Student* get_vice_president() const;
                Student* get_secretary() const;
                Student* get_treasurer() const;
                std::vector<Student*> get_members() const;
                void add_member(Student* s);
                size_t number_members() const;
    private:
                Student* President = new Student();             //Declare 4 default position using pointer.
                Student* Vice_President = new Student();
                Student* Secretary = new Student();
                Student* Treasuser = new Student();
                std::vector<Student* > Member;                   //Remember to pass the Member value with &value because we use pointer to declare its datatype
};

#endif