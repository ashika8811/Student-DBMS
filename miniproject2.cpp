#include <bits/stdc++.h>
using namespace std;

class student
{
public:
   string name;
   string usn;

   void nameandusn()
   {
      cin >> name >> usn;
   }

   void displaynameandusn()
   {
      cout << name << ":" << usn << endl;
   }

   float calculate_marks(int a, int b, int c);

   bool pf(float d)
   {
      if (d >= 40.00)
         return true;
      else
         return false;

     
   }
   void entrance_exam();
};
float student::calculate_marks(int a, int b, int c)
{
   float percentage = ((a + b + c) / 3.00) ;
   cout << "the marks are: " << a << " " << b << " " << c << endl;
   return percentage;
}

void student:: entrance_exam()
{
int rank;
cin>>rank;

if(rank>=5000 && rank<=15000)
cout<<"student is alloted with cs seat"<<endl;
else if(rank >15000&& rank <=30000)
cout<<"student is alloted with IS seat"<<endl;
else
cout<<"student is alloted with Ec seat"<<endl;

}

int main()
{

   cout << "WELCOME TO STUDENT DATA BASE MANAGEMENT SYSTEM" << endl;
   student s;
   int num = 2;
   while (num--)
   {
      cout << "enter your name and usn" << endl;
      s.nameandusn();
      s.displaynameandusn();
      cout << "enter the marks of 3 subject" << endl;
      int m1, m2, m3;
      cin >> m1 >> m2 >> m3;
      float res = s.calculate_marks(m1, m2, m3);

      if (s.pf(res))
         cout << "pass" <<" "<<"percentage is :"<<" "<<res<< endl;
      else
         cout << "fail" << endl;

      cout << "enter your entrance exam marks" << endl;
      s.entrance_exam();
     
   }

   return 0;
}