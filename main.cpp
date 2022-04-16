
#include<iostream>
#include<conio.h>
#include<fstream>
#include <iomanip>
#include <string>
#include <windows.h>

/////////function declaration////////
void menu();
void pascode();
void cpascode();
using namespace std;

////////////////class one///////

class one
{
public:
   virtual void get()=0;
   virtual void show()=0;
};

////////// class information///////////

class info : public one
{
public:
    char name[50],time[50];
    int num, age;
    void get()
    {
     system("cls");
     cin.sync();
     cout<<"\n Enter the Patient Name= ";
     cin.getline(name,50);
     cout<<"\n Enter the Appointment time = ";
     cin.getline(time,50);
     cout<<"\n Enter Age = ";
     cin>>age;
     cout<<"\n Enter Appointment no = ";
     cin>>num;
    }
    void show()
    {
        cout<<"\n Name = "<<name;
        cout<<"\n Age = "<<age;
        cout<<"\n No = "<<num;
        cout<<"\n Time = "<<time;
    }
};

//////class rana ///////

class rana : public info
{
public:
    info a1;
    void get()
    {
     system("cls");
     ofstream out("rana.txt",ios::app|ios::binary);
     a1.get();
     out.write((char*)&a1, sizeof(info));
     out.close();
     cout<<"\n\nYour Entry has been saved ";
     cout<<"\n\n\t\t Press any key to continue :";
     cout<<
     getch();
     menu();
    }
    void show()
    {
     ifstream in("rana.txt");
     if(in==NULL)
     {
      cout<<"\n\n No data in the file ";
      cout<<"\n\n\t\t Press any key to continue :";
      getch();
      menu();
     }
     else {
      while (!in.eof())
      {
       in.read((char*)&a1, sizeof(a1));
       a1.show();
      }
      in.close();
      getch();
      menu();
     }
    }
};

////////////////// class Dr Waqar /////

class waqar: public info
{
public:
    info a1;
    void get()
    {
     system("cls");
     ofstream out("waqar.txt",ios::app|ios::binary);
     a1.get();
     out.write((char*)&a1, sizeof(info));
     out.close();
     cout<<"\n\nYour Entry has been saved ";
     cout<<"\n\n\t\t Press any key to continue :";
     getch();
     menu();
    }
    void show()
    {
     ifstream in("waqar.txt");
     if(in==NULL)
     {
      cout<<"\n\n No data in the file ";
      cout<<"\n\n\t\t Press any key to continue :";
      getch();
      menu();
     }
     else {
      while (!in.eof())
      {
       in.read((char*)&a1, sizeof(a1));
       a1.show();
      }
      in.close();
      cout<<"Press enter to continue =";
      getch();
      menu();
     }
    }
};

//////////// class Dr. Ahmad //////////

class ahmad:public info
{
public:
    info a1;
    void get()
    {
     system("cls");
     ofstream out("ahmad.txt",ios::app|ios::binary);
     a1.get();
     out.write((char*)&a1, sizeof(info));
     out.close();
     cout<<"\n\nYour Entry has been saved ";
     cout<<"\n\n\t\t Press any key to continue :";
     getch();
     menu();
    }
    void show()
    {
     ifstream in("ahmad.txt");
     if(in==NULL)
     {
      cout<<"\n\n No data in the file ";
      cout<<"\n\n\t\t Press any key to continue :";
      getch();
      menu();
     }
     else {
      while (!in.eof())
      {
       in.read((char*)&a1, sizeof(a1));
       a1.show();
      }
      in.close();
      cout<<"Press enter to continue =";
      getch();
      menu();
     }
    }
};

///////////// class staff ////////////

class staff:public one
{
public:
    char all[999];
    char name[50],age[20],sal[50],pos[20];

    void get()
    {
     ofstream out("staff.txt",ios::app);
     {
      system("cls");
      cin.sync();
      cout<<"\n enter Name :";
      cin.getline(name,50);
      cout<<"\n enter Age :";
      cin.getline(age,20);
      cout<<"\n Enter Salary :";
      cin.getline(sal,30);
      cout<<"\n Enter working Position :";
      cin.getline(pos,20);
     }
     out<<"\n Name : "<<name<<"\n Age : "<<age<<"\n Salary : "<<sal<<"\n working position : "<<pos;
     out.close();
     cout<<"\n\n your information has been saved : \n\t\t Press any key to continue ";
     getch();
     menu();
    }
    void show()
    {
     ifstream in("staff.txt");
     if(!in)
     {
      cout<<"File open Error ";
     }
     while(!(in.eof()))
     {
      in.getline(all,999);
      cout<<all<<endl;
     }
     in.close();
     cout<<"\n\n\t\t Press any key to continue :";
     getch();
     menu();
    }
};


/////////// class information ///////////////

class information
{
public:
    void drinfo()
    {
     system("cls");
     system("color F3");
     cout<<"\n==================================\n";
     cout<<"\n\n\t\t(Three doctors available) \n\n \t\t [information and timing are given below]\n";
     cout<<"====================================\n";
     cout<<"\t\t Dr available:\n";
     cout<<"\t\t Dr. Rana (skin specialist)\n\n";
     cout<<"\t\t\t [Timing]: \n\n";
     cout<<"\tMonday to Friday \t\t 9AM to 5PM\n";
     cout<<"\tSaturday         \t\t 9AM to 1PM\n";
     cout<<"\tSunday           \t\t off\n";
     cout<<"\n------------------------------------\n";
     cout<<"\t\tDr.Waqar (child specialist)\n\n";
     cout<<"\t\t\t [Timing]: \n\n";
     cout<<"\tMonday to Friday \t\t 2PM to 10PM\n";
     cout<<"\tSaturday         \t\t 8AM to 1PM\n";
     cout<<"\tSunday           \t\t 12PM to 9PM\n";
     cout<<"\n------------------------------------\n";
     cout<<"\t\t Dr. Ahmad (DVM)\n\n";
     cout<<"\t\t\t [Timing]: \n\n";
     cout<<"\tMonday to Friday \t\t 8AM to 5PM\n";
     cout<<"\tSaturday         \t\t 10AM to 1PM\n";
     cout<<"\tSunday           \t\t off\n";
     cout<<"\n------------------------------------\n";
     cout<<"\nPress any key to continue :";
     getch();
     menu();
    }
};

void call_dr()
{
 system("cls");
 int choice;
 cout<<"\n\n\n\t\t Press 1 for Dr Rana \n\n\t\t Press 2 for Dr Waqar \n\n\t\t Press 3 for Dr Ahmad ";
 cout<<"\n\n\t\t Enter the choice :";
 cin>>choice;

 one *ptr;
 rana s3;
 waqar s4;
 ahmad s5;
 if(choice==1)
 {
  ptr=&s3;
  ptr->get();
 }
 if(choice==2)
 {
  ptr=&s4;
  ptr->get();
 }
 if(choice==3)
 {
  ptr=&s5;
  ptr->get();
 } else
 {
  cout<<"Sorry Invalid Choice :";
 }
}

void pinfoshow()
{
 system("cls");
 int choice;
 cout<<"\n\n\t 1 -Press 1 for Dr.Rana \n\n\t 2- Press 2 for Dr.Waqar \n\n\t 3- Press 3 for Dr.Ahmad ";
 cout<<"Please enter your choice :";
 cin>>choice;
 one *ptr;
 rana s3;
 waqar s4;
 ahmad s5;
 if(choice==1)
 {
  ptr=&s3;
  ptr->show();
 }
 else if(choice==2)
 {
  ptr=&s4;
  ptr->show();
 }
 else if(choice==3)
 {
  ptr=&s5;
  ptr->show();
 }
 else
 {
  cout<<"Sorry invalid choice ";
  getch();
  menu();
 }
}
void menu()
{
  system("cls");
  system("color Fc");
  cout<<"\n";
  cout<<"\n";
  cout<<"\t\t  | ******** MAIN MENU ******** | \n";
  cout<<"\t\t  |  Hospital Management system | \n";
  cout<<"\t\t  |=============================| \n";

  cout<<"\n------------------------------------\n";
  cout<<"\t\t    Please select Any Option      \n";

  cout<<"\n\n\t1-\t\t Press 1 for available Doctor Information\n\n";
  cout<<"\t2-\t\t Press 2 for Doctor Appointment\n\n";
  cout<<"\t3-\t\t Press 3 for Saving staff information\n\n";
  cout<<"\t4-\t\t Press 4 for Checking patient Appointment Menu\n\n";
  cout<<"\t5-\t\t Press 5 for checking staff Information Menu\n\n";
  cout<<"\t6-\t\t Press 6 for change password or create password\n\n";
  cout<<"\t7-\t\t Press 7 for Logout\n\n";

  cout<<"\n=====================================\n";
  cout<<"\n\n\t\tPlease enter your choice : ";
  information a1;
  one *ptr;
  staff a2;
  int a;
  cin>>a;
  if(a==1)
  {
   a1.drinfo();
  }
  else if(a==2)
  {
   call_dr();
  }
  else if(a==3)
  {
   ptr=&a2;
   ptr->get();
  }
  else if(a==4)
  {
   pinfoshow();
  }else if(a==5)
  {
   ptr=&a2;
   ptr->show();
  }
  else if(a==6)
  {
   cpascode();
  }else if(a==7)
  {
   pascode();
  }
  else
   cout<<"sorry Invalid Choice : ";

}

void pascode()
{
 system("cls");
 char p1[50],p2[50],p3[50];

 system("color Fc");

 ifstream in("password.txt");
 {
  cin.sync();
  cout<<"\n\n\n\n\n\n\n\t\tEnter the Password :";
  cin.getline(p1,50);
  in.getline(p2,50);
  if(strcmp(p2,p1)==0)
  {
   menu();
  }
  else
  {
   cout<<"\n\n\t\t\tIncorrect Pascode please try again\n";
   Sleep(999);
   pascode();
  }
 }
 in.close();
}

void cpascode()
{
 char n[50];
 system("cls");
 ofstream out("password.txt");
 {
  cin.sync();
  cout<<"\n\n\n\n\t\t Enter the New Password ";
  cin.getline(n,50);
  out<<n;
 }
 out.close();
 cout<<"\n\nYour Password has been saved :";
 getch();
 menu();
}

int main()
{
 pascode();
 system("pause");
}
