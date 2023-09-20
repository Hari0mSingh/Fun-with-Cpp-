#include<iostream>
using namespace std;

int main(){
    //array initalization 
    int number[5];

    //array initialization with values
    int number1[5]={4,57,3,5,9};
    cout<<"4th index element is = "<<number1[4]<<endl<<endl;//accessing element

    //array all location initialization with zero's
    int number2[10]={0};
    for(int i=0;i<10;i++){
        cout<<"Array with zero's : "<<number2[i]<<endl;
    }
    cout<<endl<<endl;
    //array all location initialization with one's{Not poassible with this mathod}
    int number5[10]={1};
    for(int i=0;i<10;i++){
        cout<<"Array with one's : "<<number5[i]<<endl;
    }
    cout<<endl<<endl;

    //array with user values
    int number4[10];
    int val=10;
    for(int i=0;i<10;i++){
        number4[i]=val;
        cout<<number4[i]<<endl; //accessing array 
        
    }
     cout<<endl<<endl;
    //array
    int num[15]={2,6};
    for(int i=0;i<15;i++){
        cout<<num[i]<<endl;
    }
    cout<<endl<<endl;
    cout<<"Everything is fine!";
    
}