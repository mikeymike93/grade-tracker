#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentName;
    string className;

    double test1;
    double test2;
    double test3;
    double finalExam;

    cout<<"Grade Tracker"<<endl;

    cout<<"Enter the student's name: ";
    getline(cin, studentName);

    cout<<"Enter the class name: ";
    getline(cin, className);

    cout<<"Enter the score for Test 1: ";
    cin>>test1;
    cout<<"Enter the score for Test 2: ";
    cin>>test2;
    cout<<"Enter the score for Test 3: ";
    cin>>test3;
    cout<<"Enter the score for the Final Exam: ";
    cin>>finalExam;

    cout<<endl;
    cout<<"Student: "<<studentName<<endl;
    cout<<"Class: "<<className<<endl;
    cout<<"Test 1: "<<test1<<endl;
    cout<<"Test 2: "<<test2<<endl;
    cout<<"Test 3: "<<test3<<endl;
    cout<<"Final Exam: "<<finalExam<<endl;

    return 0;
}