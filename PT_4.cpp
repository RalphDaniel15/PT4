#include <iostream>
#include<string>
#include<fstream>

using namespace std;
const int SIZE =5;

void getData(string course[], float One[], float Two[], float Three[]);


int main (){

    ifstream fin;
    ofstream fout;

    fout.open("PT_4.txt", ios::app);
    fin.open("PT_4.txt", ios::app);

    string course[SIZE];
    float One[SIZE];
    float Two[SIZE];
    float Three[SIZE];

    getData(course,One,Two,Three);


    cout<<"\n\n\n";

    for (int i = 0; i <SIZE; i++){
        cout<< course[i]<<"    "<<One[i]<<"    "<<Two[i]<<"     "<<Three[i]<<"   " << endl;

        fout << "Course : " <<course[i] << endl;
        fout << "1st Exam : " <<One[i] << endl;
        fout << "2nd Exam : " <<Two[i] << endl;
        fout << "3rd Exam : " <<Three[i] << endl;

    }  

    fout.close();
    fin.close();

    return 0;
}



void getData(string course[],float One[],float Two[],float Three[]){

    for (int i = 0; i <SIZE; i++){
    cout<<"Enter Course Name: "; 
    cin >> course[i];
    cout<<"Enter First Exam Grade: ";
    cin>>One[i];
    cout<<"Enter Second Exam Grade: ";
    cin>>Two[i];
    cout<<"Enter Third Exam Grade: ";
    cin>>Three[i];

    }   
}