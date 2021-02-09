#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main (){


    int mill, cmil, dmil, mil, cent, dec, u, flag = 0;

    string number, roman;
    int conversion, size;
    char * temp  = NULL;

    cout<<"ingresa el numero\n";
    cin>>number;

    conversion = stoi(number);
    size = number.length();

    temp = new char [size];
   
    strcpy (temp, number.c_str());


        if(conversion >= 1){

             char pref;
             pref = temp[(size-1) - flag];

            u = pref - '0';

            switch (u)
            {
            case 1:
                roman += "I";
                break;
            case 2:
                roman += "II";    
                break;

            case 3:
                roman += "III";    
                break;
            case 4:
                roman += "IV";    
                break;
            case 5:
                roman += "V";    
                break;
            case 6:
                roman += "VI";    
                break;
            case 7:
                roman += "VII";    
                break;
            
            case 8:
                roman += "VIII";    
                break;    
            case 9:
                roman += "IX";    
                break;
            case 0:
                break;
            }
        }


    cout<<roman;

   delete [] temp;
    return 0;
}

