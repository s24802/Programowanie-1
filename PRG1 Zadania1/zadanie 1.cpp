#include <iostream>

bool tablica[20];
int main()
{
    int n,licznik=0;
    n = 20;

    n--;
    for(int i=0; i<=n; i++)
    {
        tablica[i]=1;
    }
    for(int j=2; j<=n; j++)
    {
        int k=j;
        while(k<n)
        {
            k=k+j;
            tablica[k]=0;
        }
    }
    for(int m=2; m<=n; m++)
    {
        if (tablica[m]==1)
        {
            std::cout << m << " ";
            licznik++;
        }

    }
    std::cout << std::endl;
    for(int m=2; m<=n; m++)
    {
        if (tablica[m]==1)
        {
            std::cout << m << " ";
            licznik++;
        }

    }
    return 0;
}
