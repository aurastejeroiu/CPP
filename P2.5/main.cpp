#include <iostream>
#include <iomanip>
using namespace std;

void TrPascal(int m, long P[][30]){
   for(int n=0;n<=m;n++)               ///initializare matrice,
     for(int k=0;k<=m;k++)
        P[n][k]=0;

   for(int n=0;n<=m;n++)               ///creere trunghi Pascal
     for(int k=0;k<=n;k++)
        if(k==0 || n==k) P[n][k]=1;
        else             P[n][k]=P[n-1][k-1]+P[n-1][k];///creare element P[n][k]
}

void Afisare(int m, long P[][30]){
    for(int n=0;n<=m;n++)
    { for(int k=0;k<=n;k++)
         cout<<setw(7)<<P[n][k];
      cout<<endl;
    }
}
void Citire(int &m){
        cout <<"da dim Triunghiului:";
        cin  >>m;
}

int main()
{   int     m;
    long    P[30][30];
    Citire(m);
    TrPascal(m,P);
    Afisare (m,P);
    cout     <<"Program terminat:";
    return 0;
}

