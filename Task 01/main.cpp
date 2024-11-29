#include<iostream>
using namespace std;
int main(){
int A[4][4]={{1,3,4,6},{0,9,7,6},{3,5,4,2},{2,0,6,7}};
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<A[i][j]<<" ";

    }
    cout<<endl;
}
return 0;

}