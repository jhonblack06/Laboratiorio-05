#include <iostream>

using namespace std;

int main()
{
    int m[3][3];
    float suma=0;
    int cont=0;
    float prom;
    int mediana;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int a;
            cout<<"Ingrese un numero para la matriz"<<endl;
            cin>>a;
            m[i][j]=a;
        }
    }
    int MAX=m[0][0];
    int MIN=m[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            suma=suma+m[i][j];
            cont++;
            if(m[i][j]>MAX){
                MAX=m[i][j];
            }
            if(m[i][j]<MIN){
                MIN=m[i][j];
            }
        }
    }
    int menor;
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
                menor=m[a][b];
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                        if(m[i][j]>m[a][b]){
                            menor = m[i][j];
                            m[i][j] = m[a][b];
                            m[a][b] = menor;
                        }
                }
            }
        }
    }
    mediana = m[1][1];
    prom=suma/cont;
    cout<<"El promedio de la matriz es: "<<prom<<endl;
    cout<<"El maximo de la matriz es: "<<MAX<<endl;
    cout<<"El minimo de la matriz es: "<<MIN<<endl;
    cout<<"La mediana es: "<<mediana<<endl;
    cout<<"La matriz ordenada es: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
        }
    cout<<suma<<endl;
    cout<<cont<<endl;


    return 0;
}
