#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myfile;
    myfile.open("filepath\\one.txt");
    myfile<<"This is Hariom";

    cout<<"File crated !";
    myfile.close();
    return 0;
}