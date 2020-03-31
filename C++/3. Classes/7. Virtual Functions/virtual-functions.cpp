#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
    int age;
    string name;
    virtual void getdata(){
        cin >> name >> age;
    }
    virtual void putdata(){
        cout << name << age <<endl; 
    }
};

class Professor: public Person{
    public:
    int publications;
    static int id;
    int cur_id;

    Professor(){
        cur_id = id;
        id = id + 1;
    }
    void getdata()override{
        cin >> name >> age >> publications;
    }
    void putdata()override{
        cout << name <<" "<< age <<" "<< publications <<" "<< cur_id <<endl; 
    }
};
int Professor :: id =1;
class Student: public Person{
    public:
    int marks[6];
    static int id;
    int cur_id;

    Student(){
        cur_id = id;
        id = id + 1;
    }
    void getdata()override{
        cin >> name >> age >> marks[0] >>marks[1] >>marks[2] >>marks[3] >>marks[4] >>marks[5] ;
    }
    int getMarks(){
        return marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
    }
    void putdata()override{
        cout << name <<" "<< age <<" "<< getMarks() <<" "<< cur_id <<endl; 
    }
};
int Student :: id = 1;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
