#include<iostream>
#include"student.h"
using namespace std;
void student::input(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter roll no:";
    cin>>rn;
    cout<<"enter Age:";
    cin>>age;
    cout<<"enter course:";
    cin>>course;
    cout<<"enter marks:";
    cin>>marks;


}
void student::display(){
    cout<<"---------Student Details-----------"<<endl;
    cout<<"Name=  "<<name<<endl;
    cout<<"roll no=  "<<rn<<endl;
    cout<<"Age=  "<<age<<endl;
    cout<<"course=  "<<course<<endl;
    cout<<"marks=  "<<marks<<endl;
    cout<<"------------------------------------"<<endl;
}