#include <iostream>

using namespace std;

struct Dublet{
  int val;
  int fr;
};

void CitireX(int& n, int x[])
{ cout<<"da dim sirului:";
  cin >>n;
  for(int i=1; i<=n;i++)
  {  cout<<"x["<<i<<"]=";
     cin >>x[i];
  }
}

int ExistaInY(int m, Dublet y[100], int v)
{   int i=1;
    while(i<=m && v!=y[i].val) i++;
    if(i>m) return 0;
    else    return i;
}

void CreY(int n, int x[], int& m, Dublet y[100])
{ m=0;						///m e lungimea lui y, initial m=0
  for(int i=1;i<=n;i++)
      { int poz=ExistaInY(m,y,x[i]);            ///retur 0 sau pozitia
        if(poz==0) {                            ///se adauga pe pozitia m+1 in Y
            m++;
            y[m].val=x[i];
            y[m].fr =1;                         ///frecventa se pune pe 1
        }

        else       y[poz].fr++;                 ///Y[poz].frecv++; mareste frecventa
      }
}

void AfisY (int m, Dublet y[100])
{
    for(int i=1;i<=m;i++)
        cout<<"("<<y[i].val<<","<<y[i].fr<<") ";
}
int main()
{ int n,m;                //m e lungimea lui y, initial m=0
  int x[100];
  Dublet   y[100];
  CitireX(n,x);
  CreY   (n,x,m,y);
  AfisY  (m,y);
  cout << "Program terminat" << endl;
  return 0;
}
