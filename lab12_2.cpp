#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int N = 30;
const int M = 70;

double sqrt();
void updateImage(bool [][M],int,int,int);
void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "\nInput your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void updateImage(bool im[][M],int S,int X,int Y){
    for(int i=0;i <= N-1;i++ ){
        for(int j=0;j <= M-1;j++){
            if(sqrt((i-Y)*(i-Y)+(j-X)*(j-X)) <= S-1){
                im[i][j] = 1;
            }      
        }
    }
}

void showImage(const bool im[][M]){
    for(int i=0; i < M+2;i++){
        cout << "-";
    }
    cout << "\n";
    for(int i=0; i < N;i++){
        cout << "|" ;
            for(int j=0; j <= M-1;j++){
                if(im[i][j] == 1){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        cout << "|\n";
    } 
    for(int i=0; i < M+2;i++){
        cout << "-";
    }
}