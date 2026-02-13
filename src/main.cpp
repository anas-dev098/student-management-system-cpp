#include<iostream>
#include"student.h"
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number of students";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++){
        cout<<"Enter details of student "<<i+1<<endl;
        s[i].input();
    }
    for(i=0;i<n;i++){
        s[i].display();
    }
}