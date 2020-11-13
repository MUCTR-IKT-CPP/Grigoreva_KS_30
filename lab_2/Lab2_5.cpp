#include <iostream>
#include <ctime>
using namespace std;

void multiply(double **A, double *B, double *C, int n){
    cout << "C:" << endl;
    for(int i = 0; i < n; i++){
        C[i] = 0;
        for(int j = 0; j < n; j++){
            C[i] += A[i][j] * B[j];
        }
        cout << C[i] << endl;
    }
}

int main(){
    int n;
    cin >> n; 
    srand(time(0));
    cout << fixed;
    cout.precision(2);
    double **A = new double* [n];
    for(int i = 0; i < n; i++){
        A[i] = new double [n];
    }
    double *B = new double [n];
    double *C = new double [n];
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            A[i][j] = (double)(rand())/RAND_MAX * 5.0;
        }
        B[i] = (double)(rand())/RAND_MAX * 5.0;
    }
    cout << "A:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "B:" << endl;
    for(int i = 0; i < n; i++){
        cout << B[i] << endl;
    }
    cout << endl;
    multiply(A, B, C, n);

    for(int i = 0; i < n; i++){
        delete[] A[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;
}