#include<iostream.h>
#include<conio.h>
class father
{
  char name[30];
  int age;
  public:
  void getdata()
  {
    cout<<"enter father name";
    cin>>name;
    cout<<"enter father age";
    cin>>age;
  }
  void display()
  {
    cout<<"father name"<<name<<endl;
    cout<<"father age"<<age<<endl;
   }
};
class son:public father
{
   char name[30];
   int marks;
   public:
   void getdata()
   {
     cout<<"enter son name";
     cin>>name;
     cout<<"enter son marks";
     cin>>marks;
    }
    void display()
    {
      cout<<"son name and marks"<<name<<endl<<marks<<endl;
    }
};
class daughter:public father
{
   char name[30];
   int marks;
   public:
   void getdata()
   {
     cout<<"enter daughter name";
     cin>>name;
     cout<<"enter daughter marks";
     cin>>marks;
    }
    void display()
    {
      cout<<"daughter name and marks"<<name<<endl<<marks<<endl;
    father::getdata();
      father::display();

    }
};
void main()
{
  clrscr();
  daughter d1;
  d1.getdata();
  d1.display();
  son s1;
  s1.getdata();
  s1.display();
  getch();
}
