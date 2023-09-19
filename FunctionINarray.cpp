#include<iostream>
using namespace std;

void printArray(int array[],int size){
    cout<<"Printing array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"Printing Done.";
    cout<<endl;
}

int main(){
    int one[5]={2,3};//1st Array
    printArray(one,5);

    int two[10];//2nd Array
    printArray(two,10);

    int length=sizeof(one)/sizeof(int);//Array Length
    
    cout<<"Length of 1st array is : "<<length;
    cout<<endl;

    char ch[7]={'H','a','r','i','o','m'};//Char Array
    cout<<"Char array is :"<<endl;
    for(int i=0;i<7;i++){
        cout<<ch[i];
    }


    double firstDouble[5];
    float firstFloat[7];
    bool firstBool[1];

    return 0; 
}