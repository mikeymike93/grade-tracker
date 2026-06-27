#include <iostream>
#include <string>
using namespace std;

double calculateAverage(double test1, double test2, double test3, double finalExam)
{
    return (test1 + test2 + test3 + finalExam) / 4;
}
char getLetterGrade(double average)
{
    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else if (average >= 70)
    {
        return 'C';
    }
    else if (average >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
string getPassFailStatus(double average)
{
    if (average >= 60)
    {
        return "Passed";
    }
    else
    {
        return "Failed";
    }
}
int main()
{
    string studentName;
    string className;
    string status;

    double test1;
    double test2;
    double test3;
    double finalExam;
    double average;
    char letterGrade;

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

    average = calculateAverage(test1, test2, test3, finalExam);

    letterGrade = getLetterGrade(average);

    status = getPassFailStatus(average);

    cout<<endl;
    cout<<"Student: "<<studentName<<endl;
    cout<<"Class: "<<className<<endl;
    cout<<"Test 1: "<<test1<<endl;
    cout<<"Test 2: "<<test2<<endl;
    cout<<"Test 3: "<<test3<<endl;
    cout<<"Final Exam: "<<finalExam<<endl;
    cout<<"Average Score: "<<average<<"%"<<endl;
    cout<<"Letter Grade: "<<letterGrade<<endl;
    cout<<"Status: "<<status<<endl;
    return 0;
}