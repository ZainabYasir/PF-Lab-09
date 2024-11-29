#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int A[3][3];
    cout<<"Enter a Two dimensional array(3*3):";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+A[i][j];
        }
    }
    cout<<"The sum is "<<sum;
    return 0;
}
