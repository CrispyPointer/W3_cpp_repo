#include"studentclub.h"
#include<iostream>
using namespace std;

StudentClub::StudentClub(Student* p, Student* v, Student* s,
    Student* t, vector<Student*> m) :President(p), Vice_President(v), Secretary(s), Treasuser(t), Member(m){} //Using field initializer list

Student* StudentClub::get_president() const{ return President; }

Student* StudentClub::get_vice_president() const{ return Vice_President; }

Student* StudentClub::get_secretary() const{ return Secretary; }

Student* StudentClub::get_treasurer() const{ return Treasuser; }

vector<Student*> StudentClub::get_members() const{ return Member; }

size_t StudentClub::number_members() const{ return Member.size();}

//Pass each student in to the club. If student name already registered, move on!!
//We declared a pointer "s" to the student class in order to let 1 student hold more than 1 offices.
void StudentClub::add_member(Student* s){
    for(size_t i =0; i<Member.size();i++)
    {
        if (Member[i]->get_name() == s->get_name()) return; //Distinguish office members with regular members
    }
    //Remember to push back  the right value.
    Member.push_back(s); 
}