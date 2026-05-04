#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    string s2 {"Frank"};
    string s3 {s2};    
    string s4 {"Frank",3};   
    string s5 {s3,0,2};
    string s6 (3, 'X');



    //printing
    cout<<s1<<endl;//empty ...in case of c styel string , will print garbage
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s6<<endl;

    //assignment
    string s7 {"Hello Rocks"};
    string s8 {"c++"};
    
    s8=s7;
    cout<<s8<<endl;

    //concatenation
    string s9 {"c++"};
    string s10 {"is a powerful language"};
    string complete;
    
    complete= s9 + " " + s10;
    cout<<complete<<endl;
    
    //compile time error as cannot use + with c style strings
    string complete2;
    //compile time error as cannot use + with c style strings
    //complete2="c++"+"is a powerful language";

   //acessing string positions
    string s11 {"Frank"};
    cout<<s11[0]<<endl;
    cout<<s11.at(0)<<endl;
    
    s11[0]='f';
    cout<<s11<<endl;
    
    s11.at(0)='P';
    cout<<s11<<endl; 

    return 0;
}