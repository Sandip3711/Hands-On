#include <iostream>
using namespace std;

struct student
{
    int roll_no;
    string name;
    float marks[3];
    string grade;
};

class student_data
{
public:
    void take_data(student &obj)
    {
        cout << "Enter the roll number of student " << endl;
        cin >> obj.roll_no;
        cout << "Enter the name of student " << endl;
        cin >> obj.name;
        cout << "Enter the marks 3 subject one by one of student. " << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> obj.marks[j];
        }
        obj.grade = cal_grade(obj);
    }

    void print_data(student &obj)
    {

        cout << obj.roll_no << " ";
        cout << obj.name << " " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << obj.marks[i] << " ";
        }
        cout << endl;
        cout << obj.grade << endl;
    }
     string cal_grade(student &obj)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += obj.marks[i];
        }
        if (sum >= 75 && sum < 100)
            return "Total marks is " + to_string(sum) + " Grade A";
        else if (sum >= 65 && sum < 75)
            return "Total marks is " + to_string(sum) + " Grade B";
        else if (sum >= 40 && sum < 65)
            return "Total marks is " + to_string(sum) + " Grade C";
        else if (sum < 40)
            return "Total marks is " + to_string(sum) + " Failed..";
    }
};

int main()
{
    student_data s1;
    int num_students;
    cout << "Enter number of student!! " << endl;
    cin >> num_students;
    student student1, student2, student3;
    for (int i = 0; i < num_students; i++)
    {
        if (i == 0)
        {
            s1.take_data(student1);
        }
        if (i == 1)
        {
            s1.take_data(student2);
        }
        if (i == 2)
        {
            s1.take_data(student3);
        }
    }
    cout << "Enter Roll number to see student result" << endl;
    int Roll_no;
    cin >> Roll_no;

    switch (Roll_no)
    {
    case 100:
        s1.print_data(student1);
        break;
    case 101:
        s1.print_data(student2);
        break;
    case 102:
        s1.print_data(student3);
        break;
    default:
        cout << "Invalid Roll Number!!!";
        break;
    }

    return 0;
}
