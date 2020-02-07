#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

double sqrt();

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double a[],int n,double b[]){
    double t=0;
    double u=0;
    for(int i= 0; i<n;i++){
        t = t + a[i];
    }
    b[0] = t/n;
    for(int i=0; i<n ;i++){
        u = u + (a[i]-b[0])*(a[i]-b[0]);
    }
    b[1] = sqrt(1*u/n);
    for(int i; i<n ;i++){
        if(a[i]>b[2]) b[2]=a[i];
        if(a[i]<b[3]) b[3]=a[i];
    }
}