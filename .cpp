#include<iostream>
int main()
{
    int n;
    cout<<"size of square matrix"<<endl;
    cin>>n;
    vector<vector<int>mat(n,vector<int>(n));
    cout<<"input matrix elements"<<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];

        }
    }
    for(i=0;i<n;i++)
    {
        reverse(mat[i].begin().mat[i].end());
        
    }


}