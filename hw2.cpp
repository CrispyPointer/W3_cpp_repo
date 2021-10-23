#include"studentclub.h"
#include"student.h"
#include<iostream>

using namespace std;

int main(){
    Student p,v,s,t;
    cout<<"President: ";
    p.set_name();
    cout<<"Vice President: ";
    v.set_name();
    cout<<"Secretary: ";
    s.set_name();
    cout<<"Treasurer: ";
    t.set_name();

    Student n;
    vector<Student* > m;
    do{
            cout<<"New member (Q to quit): ";
            n.set_name();
            if(n.get_name()!="Q") m.push_back(&n);
    }while(n.get_name()!="Q");

    //Declare a new club with the student members above.
    StudentClub club(&p,&v,&s,&t,m);

    //Adding 4 default position to the member number.
    club.add_member(&p);
    club.add_member(&v);
    club.add_member(&s);
    club.add_member(&t);

    //Print detail
    cout<<"Anime team ("<<club.number_members()<<" total members)"<<endl;
    cout<<"     President: "<<club.get_president()->get_name()<<endl;
    cout<<"Vice President: "<<club.get_vice_president()->get_name()<<endl;
    cout<<"     Secretary: "<<club.get_secretary()->get_name()<<endl;
    cout<<"     Treasurer: "<<club.get_treasurer()->get_name()<<endl;
    return 0;
}