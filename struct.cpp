#include <iostream>
using namespace std;

struct perso{
    char name[20];
    int age;
    char gender;
};
int main(){
    struct perso p1;
    cout<<"Enter name: ";
    cin.getline(p1.name,20);
    cout<<"Enter age: ";
    cin>>p1.age;
    cout<<"Enter gender: ";
    cin>>p1.gender; 
    cout<<endl;
    cout<<"Person Details: "<<endl;
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Gender: "<<p1.gender<<endl;
    return 0;
}