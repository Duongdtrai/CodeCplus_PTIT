#include<bits/stdc++.h>
using namespace std;

class Student
{   
public:
    string rollNo, name, classroom, email;
    void input(){
        scanf("\n");
        getline(cin,rollNo);
        getline(cin,name);
        getline(cin,classroom);
        getline(cin,email);
    }
    void display(){
        cout << rollNo << " " << name << " " << classroom << " " << email << endl;
    }
};

bool can_swap(Student a, Student b){
    if(a.classroom.compare(b.classroom) == 0) return a.rollNo < b.rollNo;
    return a.classroom < b.classroom;
}

int main(){
    int n;
    cin >> n;
    vector<Student> ds(n);
    for (int i = 0; i < n; i++)
    {
        ds[i].input();
    }
    sort(ds.begin(),ds.end(),can_swap);
    for (int i = 0; i < n; i++)
    {
        ds[i].display();
    }
}