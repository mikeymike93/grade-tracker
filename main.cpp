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
double getValidScore(string prompt)
{
    double score;

    cout<<prompt;
    cin>>score;

    while(score < 0 || score > 100)
    {
        cout<<"Invalid score. Please enter a score between 0 and 100: ";
        cin>>score;
    }
    return score;
}
int main()
{
    int choice;

    string studentName;
    string className;
    string status;

    double test1;
    double test2;
    double test3;
    double finalExam;
    double average;
    char letterGrade;

   do
   {
    cout<<"Grade Tracker Menu"<<endl;
    cout<<"1. Enter Student Grades"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"choose an option: ";
    cin>>choice;
    cin.ignore(); // Ignore the newline character left in the input buffer

    if(choice==1)
    {
        cout<<"Enter Student Name: ";
        getline(cin, studentName);

        cout<<"Enter Class Name: ";
        getline(cin, className);

        test1 = getValidScore("Enter Test 1 Score (0-100): ");
        test2 = getValidScore("Enter Test 2 Score (0-100): ");
        test3 = getValidScore("Enter Test 3 Score (0-100): ");
        finalExam = getValidScore("Enter Final Exam Score (0-100): ");

        average = calculateAverage(test1, test2, test3, finalExam);
        letterGrade = getLetterGrade(average);
        status = getPassFailStatus(average);

        cout<<"\nStudent Name: "<<studentName<<endl;
        cout<<"Class Name: "<<className<<endl;
        cout<<"Test 1 Score: "<<test1<<endl;
        cout<<"Test 2 Score: "<<test2<<endl;
        cout<<"Test 3 Score: "<<test3<<endl;
        cout<<"Final Exam Score: "<<finalExam<<endl;
        cout<<"Average Score: "<<average<<endl;
        cout<<"Letter Grade: "<<letterGrade<<endl;
        cout<<"Status: "<<status<<endl;
    }
    else if(choice==2)
    {
        cout<<"Goodbye!"<<endl;
    }
    else
    {
        cout<<"Invalid option."<<endl;
    }
   }
   while (choice!= 2);
    return 0;
}