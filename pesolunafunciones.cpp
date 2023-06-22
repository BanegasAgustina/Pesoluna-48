#include <iostream>

using namespace std;
float GravedadLuna(float peso);
int main()
{   float pso=0;
    cout<<"ingresar peso en la tierra";
    cin>>pso;
    cout<<"el peso ingresado en la luna seria de : "<< GravedadLuna(pso);
    return 0;
}
float GravedadLuna(float peso){
  float pesoluna;
    pesoluna=(peso/9.81) * 1.622;
    return pesoluna;
}