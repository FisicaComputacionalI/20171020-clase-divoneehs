//Diana Ivonee Huitzil Sosa
//20 de octubre, 2016
//lo que hace es darnos el factorial del numero N que damos cuando nos pregunta "dame un numero" 
#include<iostream>
using namespace std;
int main ()
{
 int N=0; 
 cout<<"Dame un numero entero"<<endl; 
 cin>> N;
 int M=1;
 int F=1;
  while (M!=N)
{ M=M+1; F=F*M;
 }

cout<<"Valor final"<<F<<endl;
 return 0;

}
