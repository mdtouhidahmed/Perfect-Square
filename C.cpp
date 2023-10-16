#include<iostream>
using namespace std;

int perfectSquare(){
    int operation = 0, n;
    cin>>n;
    char a[n][n];

    // getting array input
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i<n/2; i++){
        for(int j = i; j<n-1-i; j++){
            //getting maximum
            int maximum = max(max(a[i][j], a[j][n-1-i]), max(a[n-1-i][n-1-j], a[n-1-j][i]));
            operation = operation + maximum - a[i][j];
            operation = operation + maximum - a[j][n-1-i];
            operation = operation + maximum - a[n-1-i][n-1-j];
            operation = operation + maximum - a[n-1-j][i];
        }
    }

    return operation;

}


int main(){
    int t;
    cin>>t;
    int output[t];

    for(int i = 0; i<t; i++){
        output[i] = perfectSquare();
    }

    for(int i=0; i<t; i++){
        cout<<output[i]<<endl;
    }

    return 0;
}









