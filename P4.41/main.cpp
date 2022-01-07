#include <iostream>
#include <iomanip>
using namespace std;

void CreMat(int n, int A[10][10])
{ int i,j,k;
  for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
          A[i][j]=0;

  k=0;
  for(i=1;i<=n;i++)
     if(i%2==0) for(j=1;j<=i;j++) A[j][i-j+1]=++k;        //paralelele deasupra diag. secundare
        else    for(j=i;j>=1;j--) A[j][i-j+1]=++k;

  for(i=n-1;i>=1;i--)                                   //paralele de sub diag. secundara
     if(i%2==0) for(j=n-i+1;j<=n;j++) A[j][2*n-i-j+1]=++k;
     else       for(j=n;j>=n-i+1;j--) A[j][2*n-i-j+1]=++k;
}

int main()
{   int n=6;
    int A[10][10];
    CreMat(n,A);
    for(int i=1;i<=n;i++)
    {
        for (int j=1 ; j<=n;j++) cout<<setw(3)<<A[i][j];
        cout<<endl;
    }
    return 0;
}
