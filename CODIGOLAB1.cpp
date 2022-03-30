#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*definimos las variables*/
int nota = 0;
int coleg=610;
int descuento=0;
int total=0;

  cout<<("¿Cual fue tu promedio?: ");
  cout<<("ingrese la nota:  ")<<endl;
  cin>>nota;
  cout<<("Tu colegiatura es: Q.");
  if(nota>=90)
  {
    descuento=0.2;
    descuento=coleg*0.2;
  }
  else
  {
    if(nota>=80 && nota <90)
    {
      descuento=0.1;
        descuento=coleg*0.1;
    }
    else
    {
      if(nota>=70 && nota <80)
      {
        descuento=0.05;
          descuento=coleg*0.5;
      }
      else
      {
        descuento=0;
      }
    }
  }
  total=coleg-descuento;
  cout<<("Tu colegiatura seran Q.",total);

system("pause");
	return 0;
}
