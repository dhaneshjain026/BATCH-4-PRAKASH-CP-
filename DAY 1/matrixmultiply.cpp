//matrix muliply

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,p;
        cin>>n>>m>>p;
        int arr[n][m];
        int arr1[m][p];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {
                cin>>arr1[i][j];
            }
        }
        
        int arr2[n][p];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<p;j++)
            {
                arr2[i][j]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<p;j++)
            {
                for(int k=0;k<m;k++)
                {
                    arr2[i][j] += arr[i][k] * arr1[k][j];
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<p;j++)
            {
                cout<<arr2[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
