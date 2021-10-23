#include"student.h"
#include<iostream>
using namespace std;

Student::Student():name(){}
Student::Student(string s):name(s){}

void Student::set_name(){
    getline(cin,name);
}
