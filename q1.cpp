
    #include <bits/stdc++.h>
    using namespace std;
    struct Student{
            string name ;
            int Rollno ;
            float marks[3];
    };
    int main()  {
        Student* student= new Student;
        getline(cin,student->name);
        cin>>student->Rollno;

        for(int  i=0 ; i<3 ; i++){
            cin>>student->marks[i];
        }
        float sum=0;

        for( int i=0; i<3 ; i++){
            sum+= student->marks[i];
        }
        float avgMarks=sum/3;
        cout<< "Details of the student "<<endl;
        cout<<"Name : "<<student->name<<endl;
        cout<<"Rollno : "<<student->Rollno<<endl;

        for(int i=1; i<=3 ; i++){
            cout<<"Marks in subject "<<i<< " :"<< student->marks[i-1]<<endl;
        }
        cout<<"Average marks : "<<avgMarks<<endl;
        return 0;
    }