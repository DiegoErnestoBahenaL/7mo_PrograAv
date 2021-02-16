#include <iostream>

using namespace std;

int main (){

    int number1, number2, external, iterator = 2, flag = 0, flag1= 0, counting1=0, counting2=0, mul = 1;
    int primal_f1[50], primal_f2[50];

    cout<<"enter number 1\n";
    cin>>number1;
    cout<<"enter number 2\n";
    cin>>number2;

   /// caso en que alguno de los dos numeros sea 1 ///
    if (number1 <  2 || number2 < 2){

        cout<<"MCD es 1 "<<"\n";
        return 0;
    }

    ///se limpian los arreglos para evitar datos basura ///
    for (int i = 0; i < 50; i++){

       primal_f1[i] = 0;

    }
     for (int i = 0; i < 50; i++){

       primal_f2[i] = 0;

    }

    //// factores primos del primer numero ///////

    external = number1;

    ///algoritmo para extraer los factores primos del primer numero ////
    while (external != 1){

        if (external % iterator !=0 ){

            iterator++; 
        }
        else{
            external = external / iterator;

             
            primal_f1[flag] = iterator;  
            flag ++;   
        }

       
    }  

    /////factores primos numero 2 /////
     external = number2;
     iterator = 2;
     
      while (external != 1){

        if (external % iterator !=0 ){

            iterator++; 
        }
        else{
            external = external / iterator;

             
            primal_f2[flag1] = iterator;  
            flag1 ++;   
        }
        
    }  
    //comparacion de los factores primos //
    if (flag1 > flag){

        for (int i = 0; i<flag; i++){

            for (int j = 0; j<flag1; j++){

                if (primal_f1[i] == primal_f2[j]){

                    mul = mul * primal_f1[i];
                    primal_f2 [j] = 0;
                    primal_f1[i] = 0;
                    cout<<mul<<"\n";
                   
                }
            }
        }
    }
    else{

        for (int i = 0; i<flag1; i++){

            for (int j = 0; j<flag; j++){

                if (primal_f2[i] == primal_f1[j]){

                    mul = mul * primal_f2[i];
                     primal_f1 [j] = 0;   
                     primal_f2 [i] = 0;

                }

            }
        }
    }
      cout<<"MCD es "<<mul<<"\n";

    return 0;    
}
