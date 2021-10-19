/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=100;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int count=0;
            while(n%i==0)
            {
                count++;
                n/=i;
            }
            cout<<i<<"^"<<count<<endl;
        }
    }

    return 0;
}
