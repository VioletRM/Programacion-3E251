#include<iostream>
#include <string>
#include <thread>
using namespace std;

int main(){

int a = 74;
int b = 185;
int* direccion=&a;

cout<<"int"<<sizeof(int)<<"byte"<<endl;
cout<<"float"<<sizeof(float)<<"byte"<<endl;
cout<<"char"<<sizeof(char)<<"byte"<<endl;
cout<<"bool"<<sizeof(bool)<<"byte"<<endl;
cout<<"double"<<sizeof(double)<<"byte"<<endl;

cout<<"operador direccion:"<<sizeof(a)<<&a<<endl;
cout<<"operador direccion:"<<sizeof(b)<<&b<<endl;
cout<<*direccion<<sizeof(direccion)<<endl;
cout<<*direccion<<endl;
cout<<direccion<<endl;
cout<<&direccion<<endl;
return 0;
};
