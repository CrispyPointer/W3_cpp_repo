#include"club.h"
#include<iostream>
using namespace std;

StudentClub::StudentClub(Student* p, Student* v, Student* s,
    Student* t, vector<Student*> m) :President(p), Vice_President(v), Secretary(s), Treasuser(t), Member(m){}

Student* StudentClub::get_president() const{ return President; }

Student* StudentClub::get_vice_president() const{ return Vice_President; }

Student* StudentClub::get_secretary() const{ return Secretary; }

Student* StudentClub::get_treasurer() const{ return Treasuser; }

vector<Student*> StudentClub::get_members() const{ return Member; }

size_t StudentClub::number_members() const{ return Member.size();}

void StudentClub::add_member(Student* s){
    for(size_t i =0; i<Member.size();i++)
    {
        if (Member[i]->get_name() == s->get_name()) return;
    }
    Member.push_back(s);
}