#include<iostream>
using namespace std;

int main(){

        int nor1,noc1,nor2,noc2,nor3,noc3;
        cout<<"Enter the number of row of 1st matrix :";
        cin>>nor1;
         cout<<"Enter the number of column of 1st matrix:";
        cin>>noc1;
        cout<<"Enter the number of row of 2nd matrix:";
        cin>>nor2;
         cout<<"Enter the number of column of 2nd matrix:";
        cin>>noc2;

        int MAT1[nor1][noc1] , MAT2[nor2][noc2],MAT3[nor3][noc3];

         cout<<"Enter the elements of 1st matrix : ";
        for(int i=0;i<nor1;i++){
            for(int j=0;j<noc1;j++){
                cin>>MAT1[i][j];
            }
        }
        cout<<"Matrix 1"<<endl;
        cout<<"----------"<<endl;
        for(int i=0;i<nor1;i++){
            for(int j=0;j<noc1;j++){
                cout<<MAT1[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Enter the elements of Matrix 2 : ";
        for(int i=0;i<nor2;i++){
            for(int j=0;j<noc2;j++){
                cin>>MAT2[i][j];
            }
        }

         cout<<"Matrix 2"<<endl;
        cout<<"----------"<<endl;
        for(int i=0;i<nor2;i++){
            for(int j=0;j<noc2;j++){
                cout<<MAT2[i][j]<<" ";
            }
            cout<<endl;
         }
     for(int i=0;i<nor2;i++){
            for(int j=0;j<noc2;j++){
               MAT3[i][j]=MAT1[i][j]+MAT2[i][j];
            } }

             cout<<"Matrix 3"<<endl;
       for(int i=0;i<nor2;i++){
            for(int j=0;j<noc2;j++){
               cout<<MAT3[i][j]<<" ";
            }
            cout<<endl;}


}
