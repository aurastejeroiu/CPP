#include <iostream>

using namespace std;

void CreV (int n, int V[]){
    int i,j,k;
    V[1]=1;
    i=2;                    ///i indice penru V
    k=2;
    while(i<=n)
    {   j=2;                ///j pentru divizori
        V[i++]=k;
        while(i<=n && j<=k/2){
                if(k%j==0)
                {   V[i]=j;
                    i++;
                }
                j++;
            }
        k++;
    }
}

int main()
{   int m,n,V[1000];
    cout<<"da n:"; cin>>n;    ///n este lung. V
    CreV(n,V);
    for(int i=1;i<=n;i++)
        cout<<V[i]<<" ";
    return 0;
}
