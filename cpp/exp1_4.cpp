#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

class Employee{
    int e_id;
    int e_Age;
    string e_Name;
    float e_salary;

    public:
    void get_data();
    void print_data();

};

void Employee::get_data()
{
    cout<<"Enter Student Id : ";
    cin>>e_id;
    cout<<"Enter Student Name : ";
    cin>>e_Name;
    cout<<"Enter Studen Age : ";
    cin>>e_Age;
    cout<<"Enter salary : ";
    cin>>e_salary;

}

void Employee::print_data()
{
    cout<<"Employee ID : "<<e_id<<endl;
    cout<<"Employee Name : "<<e_Name<<endl;
    cout<<"Employee Age : "<<e_Age<<endl;
    cout<<"Employee Salary : "<<e_salary<<endl;
}

void Read_Data()
{
    Employee e1;
    ifstream fin;
    fin.open("file");
    fin.read((char*)&e1, sizeof(Employee));
    fin.close();
    e1.print_data();
}
void Save_Data()
{
    Employee e1;
    e1.get_data();
    ofstream fout;
    fout.open("file");
    fout.write((char*)&e1, sizeof(Employee));
    fout.close();
}


int main()
{
    int choice;
    bool flag = true;

    do{
       
        //if ( flag )
         //   system("clear");

        flag = true;
        cout<<"\n\n";
        cout<<"Employee Management System"<<endl;
        cout<<"1. Input Data"<<endl;
        cout<<"2. Print Data"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;


        switch (choice)
        {
        case 0:
                exit(0);
            break;

        case 1:
                Save_Data();
            break;
        
        case 2:
                Read_Data();
                flag = false;
            break;
        
        default:
            cout<<"Invalid Choice "<<endl;
            break;
        }


    }while(choice!=0);

    return 0;
}