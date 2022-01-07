#include <iostream>
#include <iomanip>
using namespace std;

int x[20],cif[10],cod,k,n,nr,NrCopie,nsol;

long Prim(long i){   //returneaza 1 daca i e prim
  long j;            //si         0  daca i e compus
  if (i<2)     return 0;
  j=2;
  while ((j*j<=i) && ((i % j)!=0))
    if (j==2)  j=3;
    else j+=2;
  if (j*j>i) return 1;
             return 0;
}

int verifica(int k)
{ int i,cod;	  //  daca cod=1 conditiile de continuare sunt indeplinite
  cod=1;
                  //  daca cod=0 conditiile de continuare nu sunt indeplinite
  if (k>1)
      for(i=1;i<=k-1;i++) if (x[k]==x[i]) cod=0;
  return cod;
}

int Scrie_Solutie(void)
{ int i,nou;
  cout<<setw(3)<<(++nsol)<<".";
  nou=0;                        //creare numar de verificat (ca e prim sau nu)
  for (i=1; i<=n; i++)
   {cout<<setw(1)<<cif[x[i]];
    nou=nou*10+cif[x[i]];
   }
  if(!Prim(nou)) return 0;
                return 1;
  cout<<endl;
}

void Citeste_Date(void)
{ nsol=0;
  cout<<"da numarul:";
  cin >>nr;
  NrCopie=nr;
  n=0;
  while(nr>0)            // se retin cifrele si numarul lor(in n)
  {
     cif[++n]=nr % 10;
     nr/=10;
  }
  cout<<"numarul de cifre e:"<<n<<endl;
  nr=NrCopie;
}

void bk (int k)
{ for(int i=1;i<=n;i++)
   { x[k]=i;
     cod=verifica(k);
     if (cod)
       if (k==n)
            if(Scrie_Solutie()==0) cout <<endl<<"nu e prim permutabil";
            else                    cout <<"";
		  else  bk(k+1);
   }
}

int main ()
{ Citeste_Date();
  bk(1);
  cout<<"\nprogram terminat";
  return 0;
}



