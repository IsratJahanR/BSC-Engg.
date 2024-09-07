 #include<iostream>
 //#include<conio.h>
 using namespace std;
class Employee
       {
        int Id;
        char Name[25];
        int Age;
        long Salary;
              public:
        void GetData() //Statement 1 : Defining GetData()
              {
                cout<<"Enter Employee Id : ";
                cin>>Id;
                cout<<"Enter Employee Name : ";
                cin>>Name;
                cout<<"Enter Employee Age : ";
                cin>>Age;
                cout<<"Enter Employee Salary : ";
                cin>>Salary;
              }

              void PutData() //Statement 2 : Defining PutData()
              {
                  cout<<Id<<" "<<Name<<" "<<Age<<" "<<Salary<<endl;
              }
    };
int main(){
       int i;
       Employee E[3];//Statement 3:Creating Array of 3 Employees
       for(i=0;i<3;i++){
            cout<<"\nEnter details of "<<i+1<<" Employee"<<endl;
            E[i].GetData();
                       }
       cout<<"Details of Employees"<<endl;
              for(i=0;i<3;i++)
              E[i].PutData();

          }

