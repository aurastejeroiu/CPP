#include <iostream>

using namespace std;

struct Cuplu{
  int val;		/// valoarea
  int fr;		/// frecventa
};

void CitireX(int& n, int x[])
{ cout<<"da dim sirului:";
  cin >>n;
  for(int i=1; i<=n;i++)
  {  cout<<"x["<<i<<"]=";
     cin >>x[i];
  }
}

int ExistaInY(int m, Cuplu y[100], int v)
{   int i=1;
    while(i<=m && v!=y[i].val) i++;
    if(i>m) return 0;
    else    return i;
}

void AdaugInY(int& m, Cuplu y[100], int v)
{ int j=m;
  while(j>0 && v<y[j].val)
  {   y[j+1]=y[j];
      j--;
  }
  y[j+1].val=v;
  y[j+1].fr =1;
  m++;
}
void CreY(int n, int x[], int& m, Cuplu y[100])
{for(int i=1;i<=n;i++)
      { int poz=ExistaInY(m,y,x[i]);            //retur 0 sau pozitia
        if(poz==0) AdaugInY(m,y,x[i]);          //frecventa se pune pe 1
        else       y[poz].fr++;                 //Y[poz].frecv++; mareste frecventa
      }
}

void AfisY (int m, Cuplu y[100])
{
    for(int i=1;i<=m;i++)
        cout<<"("<<y[i].val<<","<<y[i].fr<<") ";
}
int main()
{ int n,m;
  int     x[100];
  Cuplu   y[100];
  CitireX(n,x);
  m=0;			//lungimea lui Y e 0 initial
  CreY   (n,x,m,y);
  AfisY  (m,y);
  cout << "Program terminat" << endl;
  return 0;
}
