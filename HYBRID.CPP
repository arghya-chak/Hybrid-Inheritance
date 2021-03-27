#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
class student
   {
      int roll_no;
      char name[50];
      public:
      void acc_data();
      void disp_data();
   };
void student::acc_data()
   {
      cout<<"\nEnter Roll No.: ";
      cin>>roll_no;
      cout<<"\nEnter Name: ";
      gets(name);
   }
void student::disp_data()
   {
      cout<<"\nRoll No. "<<roll_no;
      cout<<"\nName: "<<name;
   }
class result:public student
   {
      int mks[5];
      public:
      int s;
      void acc_mks();
      void disp_mks();
   };
void result::acc_mks()
   {
      s=0;
      m:
      for (int j=0; j<5; j++)
	 {
	    cout<<"\nEnter Marks of the Subject "<<j+1<<" (out of 100): ";
	    cin>>mks[j];
	    s+=mks[j];
	 }
   }
void result::disp_mks()
   {
      for (int i=0; i<5; i++)
	 cout<<"\nMarks in Subject "<<i+1<<": "<<mks[i];
   }
class sports
   {
      int sp_mks;
      public:
      void acc_sp();
      void disp_sp();
   };
void sports::acc_sp()
   {
      cout<<"\nEnter Sports Marks: ";
      cin>>sp_mks;
   }
void sports::disp_sp()
   {
      cout<<"\nSports Marks: "<<sp_mks;
   }
class final:public result, public sports
   {
      int percent;
      char grade[2];
      public:
      void acc();
      void disp();
   };
void final::acc()
   {
      acc_data();
      acc_mks();
      acc_sp();
   }
void final::disp()
   {
      cout<<"\n_________________________RESULT_________________________";
      disp_data();
      disp_mks();
      disp_sp();
      percent=s/5;
      if (percent<33)
      strcpy(grade, "D");
      else if (percent>=33 && percent<60)
      strcpy(grade, "C");
      else if (percent>=60 && percent<75)
      strcpy(grade, "B");
      else if (percent>=75 && percent<90)
      strcpy(grade, "A");
      else if (percent>=90 && percent<=100)
      strcpy(grade, "A+");
      cout<<"\nPercentage: "<<percent<<"%\nGrade: "<<grade;
     }
void main()
   {
      clrscr();
      final f;
      f.acc();
      f.disp();
      getch();
   }