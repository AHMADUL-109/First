#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int mat[r+1][c+1];
        mat[r][c]=0;
        for(int i=0; i<r; i++)
        {
            int vl=0;
            for(int j=0; j<c; j++)
            {
                cin>> mat[i][j];
                vl=vl^(mat[i][j]);
                if(j==c-1)
                {
                    mat[i][j+1] = vl;
                }

            }

        }
        for(int j=0; j<c; j++)
        {
            int vl=0;
            for(int i=0; i<r; i++)
            {
                vl=vl^mat[i][j];
                if(i==r-1)
                {
                    mat [i+1][j] = vl;
                }

            }

        }
        for(int i=0; i<r+1; i++)
        {
            for(int j=0; j<c+1; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        int code[r+1][c+1];
        int f=0;
        for(int i=0; i<r+1; i++)
        {
            for(int j=0; j<c+1; j++)
            {
                cin>>code[i][j];
            }
        }
        for(int i=0; i<c; i++)
        {
            int vl=0;
            for(int j=0; j<r+1; j++)
            {
                vl=vl^code[j][i];
            }
            if(vl!=0)
            {
                f=1;
            }
        }
        for(int i=0; i<r; i++)
        {
            int vl=0;
            for(int j=0; j<c+1; j++)
            {
                vl=vl^code[j][i];
            }
            if(vl!=0)
            {
                f=1;
            }
        }
        if(f!=0)
        {
            cout<<"False"<<endl;
        }
        else
        {
            cout<<"True"<<endl;
        }


    }


}
