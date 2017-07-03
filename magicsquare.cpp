#include<iostream>
#include<iomanip>
using namespace std;
#define n 3
class magicmatrix
{
    public:
    void takeinput(int matrix[n][n]);
    void display(int matrix[n][n]);
    void find(int matrix [n][n]);
};
void magicmatrix::takeinput(int matrix[n][n])
{
    cout<<"enter values";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
      cin>>matrix[i][j];
    }
    }
}
void magicmatrix::display(int matrix[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(4)<<matrix[i][j]<<setw(6);

        }
    }

}


{
     void magicmatrix::find()

    {//1.diagonal
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
        {
            sum=sum+int matrix[n][n];
        }

        }
    }
//2.row
for(int i=0;i<n;i++)
{
   int sum1=0;
    for (int j=0;j<n;j++)
    {
    int sum1=sum1+int matrix[n][n];
    }
}
//3.column
for(int i=0;i<n;i++)
{
    int sum2=0;
    for(int j=0;j<n;j++)
    {
        int sum2=sum2+int matrix[n][n];
    }
}
    if(sum=sum1=sum2)
         flag=1;
        else
         flag=0;
}
};

int main()
{
    int matrix[n][n];
    magicmatrix a;
    a.takeinput(matrix);
    a.display(matrix);
    return 0;
}
