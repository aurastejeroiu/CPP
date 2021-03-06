#include <iostream>

using namespace std;
///  Se dau a,n naturale si sirul X de n elemente. Sa se rearanjeze elementele astfel incat
///  toate numerele <a sa fie inaintea tuturor celor >= a, fara a ordona tot sirul.
///

void Schimb (int &a, int &b){
 int aux = a;
     a   = b;
     b   = aux;
}
void Afisare(int n, int a, int X[]){
    cout<<"elementele aranjate in functie de a:";
    for(int i=1; i<=n;i++)
        cout<<X[i]<<" ";
    cout<<endl;
}

void FataDeA(int n, int a,int x[])
{ int i,j;
  i=1;
  while(i<=n) {
    if(x[i]>=a)                         ///daca x[i]>=a atunci se cauta de la
                                        ///el inspre dreapta primul
        { j=i+1;                        ///numar <a, cu care il interschimb
          while(j<=n && x[j]>=a) j++;   ///gaseste primul x[j] < a;
          if(j>n) i=n+1;                ///se termina while dupa i;
          else {Schimb(x[i],x[j]);      ///x[j] < a si trebuie interschimbat cu x[i]
                ///Afisare(n,a,x);
               }
        }
    i++;                           	///se trece la urmatoarea val.
                                        /// a lui i pentru x[i]<a
  }

}

void Citire(int&n, int&a,int X[]){
    cout<<"cate numere dai:";
    cin >>n;                    ///citeste dimensiunea sirului
    for (int i=1;i<=n;i++)      ///citeste elementele sirului
    { cout<<"X["<<i<<"]=";
      cin >>X[i];
    }
    cout << "da reperul a:";    ///citeste valoarea a
    cin  >> a;

}


int main()
{   int X[100];
    int n,a;
    Citire  (n,a,X);
    FataDeA (n,a,X);
    Afisare (n,a,X);
    cout<<endl;
    return 0;
}
