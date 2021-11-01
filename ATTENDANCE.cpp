#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fstream>
int main()
{   sn:;
   double h;  
  cout<<"enter the password: ";
  cin>>h;
  if(h!=2003)
  {cout<<"retry:\n";
     goto sn;
  } 
   double n;
    int c,d,D,R,q=0,w=0,Q=0;
    char L,s,k[15],m[15]; 
    ofstream fout("ATTENDANCE.TXT");
    cout<<"\t\t\tATTENDANCE REPORT:\n";
    cout<<"enter the date of that day:\n";
    cin>>d; cout<<"-"; cin>>D; cout<<"-"; cin>>n;
    cout<<"you have entered this: ";
    cout<<"DATE: "<<d<<"/"<<D<<"/"<<n<<"\n";
    cout<<"enter the class and section:\t";
    cin>>c;
    cout<<"\t";
    cin>>s;
    cout<<"enter the total strength of the class:\n";
    cin>>R;
    fout<<"DATE: "<<d<<"/"<<D<<"/"<<n<<"\nClass: "<<c<<"\t\tSection: "<<s<<"\ttotal strength: "<<R;
    for(int i=0;i<R;++i)
    {
	 cout<<"\nenter the student "<<i+1<<" start name:\t";
     cin>>k;
     cout<<"\nenter the student "<<i+1<<" sur name:\t";
     cin>>m;
     cout<<"\t\tenter the (present/absent) of this student:\t";
     cin>>L;
     fout<<"\nROLL No. :"<<i+1<<"\tSTUDENT'S NAME: "<<k<<" "<<m<<"\tRECORD: "<<L;
      if(L=='p'||L=='P')
        q=q+1;
         if(L=='A'||L=='a')
           w=w+1;
           if(L!='p'&&L!='P'&&L!='A'&&L!='a')
           Q=Q+1;
    } 
    cout<<"\n\nTOTAL:\n\t"<<"PRESENT: "<<q<<"\n\tABSENT: "<<w<<"\n\tUNKNOWN SYMBOLS: "<<Q<<"\n\nEND";
	fout<<"\n\nTOTAL:\n\t"<<"PRESENT: "<<q<<"\n\tABSENT: "<<w<<"\n\tUNKNOWN SYMBOLS: "<<Q;
    fout<<"\n\nEND";
    fout.close();
    cout<<"\npress any key to continue: ";
    char Y;
    cin>>Y;
	return 0;
}

