#include<iostream>
using namespace std;
int main(){    
int A[3][4];
cout<<"Enter a Two Dimensional array(3*4):";
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>A[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<A[i][j]<<" ";

    }
    cout<<endl;
}
return 0;
}
