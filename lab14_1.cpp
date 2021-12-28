#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int N,double y[]){
    double sum = 0 ,avg ,n = N;
    for(int i=0; i < N; i++){
        sum += x[i];
    }
    avg = sum/n;
    y[0] = avg;

    double sd;
    sum = 0;
    for(int i=0; i < N; i++){
        sum += pow(x[i]-avg,2);
    }
    sd = sqrt(sum/n);
    y[1] = sd;

    double geo,mp=1;
    for(int i=0; i < N; i++){
        mp *= x[i];
    }
    geo = pow(mp,1/n);
    y[2] = geo;

    double hm;
    sum = 0;
    for(int i=0; i < N; i++){
        sum += 1/x[i];
    }
    hm = n/sum;
    y[3] = hm;

    double max=x[0],min=x[0];
    for(int i =1; i <N; i++){
        if(x[i] < min) min = x[i];
        if(x[i] > max) max = x[i];
    }
    y[4] = max;
    y[5] = min;

}



        

