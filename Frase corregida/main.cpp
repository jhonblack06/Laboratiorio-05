#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    str1="abcdefghijklmnopqrstuvwxyz";  //Creamos dos listas para comparar los caracteres de lo que ingresara el usuario
    str2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";  //Estos son los caracteres que deben ser aceptados
    string frase;
    string fraseFin;   //Creamos un nuevo string donde se guardara la frase ya terminada
    cout<< "Ingrese caracteres: " << endl;
    cin>>frase;

    for(int i=0;i<frase.length();i++){
        for(int j=0;j<str1.length();j++){  //Creamos dos for uno que recorra toda la frase y el otro que recorra las listas de
                if(frase[i]==str1[j]){   //caracteres para ver si son iguales usando condicionales
                fraseFin+=frase[i];
                }
                if(frase[i]==str2[j]){
                fraseFin+=" ";   //Creamos un espacio para separar las palabras en caso encuentre una mayuscula
                fraseFin+=frase[i];
                }
        }
    }
    cout<<"La frase retocada es: "<<endl;
    cout<<fraseFin<<endl; //Imprimimos la frase terminada y retornamos 0 para verificar que todo este correcto

    return 0;
}

