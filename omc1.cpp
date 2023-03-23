#include <iostream>

using namespace std;

int main()
{
    int L=1,j,n,state=0;
    cin >> n;
    while(L!=0)
    {
        for(j=1;j<=n-L;j++)
            cout << " " ;

        for(j=1;j<=2*L-1;j++)
        {

            cout << "*";
        }
        cout << "\n";

        if(L==n) state++;

        if(state==0) L++;

        else L--;
    }
}

