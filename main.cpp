#include <iostream>
using namespace std;

int main() 
{
   float risp, costoMoto, totRisp, ammanco, rimanenza;
   int cout;
   cout<< "inserisci il costo della moto"
   cin>>costoMoto;
   cout<< "inserisci l'ammontare dei tuoi risparmi iniziali";
   cin>>risp;
   totRisp=risp
   count=0
   while(totRisp<costoMoto)
   {
      ammanco=costoMoto-totRisp;
      cout<<"i risparmi accumulati"<<totRisp<<"non sono sufficenti.Sono necessari altri"<<ammanco;
      cout<<"quanto altro hai risparmiato?";
      cin>>risp
      count=count+1
      totRisp=totRisp+risp;
   }
   cout<<"hai risparmiato"<<totRisp<<"puoicomprare la moto";
   cout<<"numero di volte che sono stati effettuati risparmi"<<cout;
   rimanenza=totRisp-costoMoto
   cout<<"i risparmi rimanenti dopo l' acquisto sono"<<rimanenza;

}
    
