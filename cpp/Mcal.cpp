#include<iostream>
using namespace std;
void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);


int main()
{

int num1,num2,choice,i;
cout<<"\n Enter 1st Number:";
cin>>num1;
cout<<"\n Enter 2nd Number:";
cin>>num2;

do{
cout<<"\n 1. Addition";
cout<<"\n 2. Subtraction";
cout<<"\n 3. Multiplication:";
cout<<"\n 4. Division";
cout<<"\n Enter your choice:";
cin>>choice;
switch(choice)
{

case 1: addition(num1,num2);
            break;
case 2: subtraction(num1,num2);
            break;
case 3: multiplication(num1,num2);
            break;
case 4: division(num1,num2);
             break;
case 5: 
default: printf("\n wrong choice");
}
printf("\n Do you want to continue?(1/0)\n");
scanf("\n %d",&i);
if(i==1)
{
cout<<"\n Enter 1st Number:";
cin>>num1;
cout<<"\n Enter 2nd Number:";
cin>>num2;
}
}while(i == 1);
}


void addition(int a,int b)
{
    cout<<a<<"+"<<b<<"="<<a+b;
}

void subtraction(int a,int b)
{
    cout<<a<<"-"<<b<<"="<<a-b;
}

void multiplication(int a,int b)
{
    cout<<a<<"*"<<b<<"="<<a*b;
}

void division(int a,int b)
{
    if(b==0)
    cout<<"\n Denominator can't be zero";
    else
    cout<<a<<"/"<<b<<"="<<a/b;
}