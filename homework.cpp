#include<iostream>
 #include<string>
 using namespace std;

 class Employee
 {

 //private data member
 string Employee_Name,Work_Position;
 int Age,Employee_ID,Salary;

 // public methodes
 public:
 // Get Employee's data 
 void Get_Data(){
 cout<<"Enter Employee Name:";
 cin>>Employee_Name;
 cout<<"Enter Emplopee's Age(In number):";
 cin>>Age;
 cout<<"Enter Employee ID(In number):";
 cin>>Employee_ID;
 cout<<"Enter Employee's Work Position:";
 cin>>Work_Position;
 cout<<"Enter Salary(In number):";
 cin>>Salary;
 cout<<"\n\n";
 }
 

 //Display Employee's Information
 void DisPlay(){
 cout<<"************Employee's Information**************"<<endl;
 cout<<"Employee Name: "<<Employee_Name<<endl;
 cout<<"Age:"<<Age<<endl;
 cout<<"Employee ID: "<<Employee_ID<<endl;
 cout<<"Work_Position: "<<Work_Position<<endl;
 cout<<"Salary: "<<Salary<<"\n\n";
 }
 };

 class Company{
 // private member of Company
 string Company_Name, Address;
 int Licence_No;
 Employee employee[10]; // declear Employee array

 public:
 
 void Get_Company_Data(string company_name,string address,int licences_no){
 Company_Name = company_name;
 Address = address;
 Licence_No = licences_no;

}


 void Get_Empoloyee(int Empoloy_number){
 for(int a=0;a<Empoloy_number;a++){
 cout<<"Input Employee No: "<<a+1<<" Information:"<<"\n";
 employee[a].Get_Data();
 }
 }

 void Display_Company_Data(int employee_number){
 cout<<"**********COMPANY INFORMATION*********"<<"\n\n";
 cout<<"Company Name:"<<Company_Name<<endl;
 cout<<"Licence No:"<<Licence_No<<endl;
 cout<<"Address:"<<Address<<endl;
 cout<<"Total Employee: "<<employee_number<<endl<<"\n\n";
 }

 void Display_Employee_Data(int n){
 for(int a=0;a<n;a++){
 cout<<"*********Employee:1 "<<a+1<<" Information**********"<<"\n\n";
 employee[a].DisPlay();
 }
 }
 };

 int main(){

 string name,address;
 int l_no,num;
 Company company; // creating an object of Company Function

 // input Company information from user
 cout<<"Enter Company name: ";
 cin>>name;
 cout<<"Address: ";
 cin>>address;
 cout<<"Licence No(In number):";
 cin>>l_no;

 //insert information to Company class
 company.Get_Company_Data(name,address,l_no);

 cout<<"Total Employee Number: ";
 cin>>num;

 // function calling for input employee information
 company.Get_Empoloyee(num);


 // Show all data
 company.Display_Company_Data(num);
 company.Display_Employee_Data(num);

 return 0;
 }