#include <iostream>

using namespace std;

int main()
{   long m,n,k,D,cnt;
    cout<<"da numaratorul:";
    cin >>k;
    cout<<"da numitorul:";
    cin >>m;
    cout<<"da numarul de zecimale:";
    cin >>n;
    D=k;
    cnt=1;
    cout<<"0.";
    while(n)
    { D=D*10;
      cout<<D/m;
      D=D%m;
      n--;
    }
    cout <<endl<< "Program terminat" << endl;
    return 0;
}
