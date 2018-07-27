#include <iostream>

using namespace std;

int main()
{ int n,path[50][50],node[50],t=0,r=0,s=0;
cout<<"how many nodes ?"<<endl;
cin>>n;
cout<<"enter their numbers"<<endl;
for (int s=0;s<n;s++)       //loop for nodes
    {
    cin>>node[s];
    cout<<endl;
    }

cout<<"As you know that 1 means true and 0 means false"<<endl;

for (int i=0;i<n;i++)       //loop for path
{
    for (int j=0;j<n;j++)
    {
        cout<<"please enter the value of the path ( "<<node[i]<<" to "<<node[j]<<" )"<<endl;
        cin>>path[i][j];

    while(path[i][j]>1 || path[i][j] <0)  //to check the values
        {cout<<"Wrong value, please enter 0 or 1"<<endl;
        cin>>path[i][j];
        }
    }
}

// test
   for (int i=0;i<n;i++)
   {   if (path[i][i]==1)
        ;
       else r++;

        for (int j=0;j<n;j++)
          { if ( path[i][j]==1 &&path[i][j]==1 && (path[j][j+1]==1 || path[j+1][j]) )
               {
                   if (path[i][j]==1 &&path[i][j]==1 && (path[j][j+1]==1 || path[j+1][j]) )
                    ;
                        else
                        t++;
               }
            if (path[i][j]== path[j][i])
              ;
              else
                    s++;
          }
    }
    if (t==0)
        cout<<"the path is transitive"<<endl;
    if (r==0)
        cout<<"the path is relexivity"<<endl;
    if (s==0)
        cout<<"the path is symmetric" <<endl;

    return 0;
}
