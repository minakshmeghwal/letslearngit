/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

bool isSafe(vector<vector<int>> ret,int x,int y,int n)
{
    int row=x,column=y;
    while(row>=0 && column>=0)
    {
        if(ret[row][column]==1)
            return false;
        row--;
        column--;
    }
    row=x,column=y;
    while(row>=0 && column<n)
    {
        if(ret[row][column]==1)
            return false;
        row--;
        column++;
    }
    for(int i=0;i<=x;i++)
    {
        if(ret[i][y])
            return false;
    }
    return true;
}
bool setqueen(vector<vector<int>> &ret,int x,int n)
{
    if(x==n)
        return true;
    for(int i=0;i<n;i++)
    {
        if(isSafe(ret,x,i,n))
        {
            ret[x][i]=1;
            if(setqueen(ret,x+1,n))
            {
                return true;
            }
            ret[x][i]=0;
        }
    }
    return false;
}

int main()
{
    
    int n;
    cout<<"Enter chess size where u wanna place queen=";
    cin>>n;
    vector<vector<int>> sol(n,vector<int>(n,0));
    setqueen(sol,0,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j];
        }
        cout<<endl;
    }
    return 0;
}

