#include <iostream>
using namespace std;
struct Student{
    int num;
    char name[20];
    char gender;
    double score;
};
int main() {
    Student s1;
   // declare and initialize  two student type variables
  /* Student student1={12292001, "Mariana", 'F', 80};
   Student student2={123213,"Andrew",'F',50};
   Student student3={3729,"Juana",'F',67};

   Student s[]={student1,student2,student3};
    for(int x=0;  x<sizeof s; x++){
        cout<<"Student name"<<s[x].name<<": " << s[x].num<<endl;

   }*/
  cout<<"Enter students info: num name gender score";
  cin>>s1.num>>s1.name>>s1.gender>>s1.score;
  cout<<s1.num<<" "<<" "<< s1.name<< " " <<" "<< s1.gender<<" "<<s1.score;

    return 0;
}

