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
                flag++;
                break;
            case 2:
                roman += "II";   
                  flag++; 
                break;

            case 3:
                roman += "III";
                  flag++;    
                break;
            case 4:
                roman += "IV";
                  flag++;    
                break;
            case 5:
                roman += "V";
                  flag++;    
                break;
            case 6:
                roman += "VI";
                  flag++;    
                break;
            case 7:
                roman += "VII";
                  flag++;    
                break;
            
            case 8:
                roman += "VIII";
                  flag++;    
                break;    
            case 9:
                roman += "IX";
                  flag++;    
                break;
            case 0:
                break;
            }
        }
      if(conversion >= 10){

             char pref;
             pref = temp[(size-1) - flag];

            dec = pref - '0';

            switch (dec)
            {
            case 1:
                roman += "X";
                break;
            case 2:
                roman += "XX";    
                break;

            case 3:
                roman += "XXX";    
                break;
            case 4:
                roman += "XL";    
                break;
            case 5:
                roman += "L";    
                break;
            case 6:
                roman += "LX";    
                break;
            case 7:
                roman += "LXX";    
                break;
            
            case 8:
                roman += "LXXX";    
                break;    
            case 9:
                roman += "LC";    
                break;
            case 0:
                break;
            }
        }

    
    flag = roman.length();

    while (flag>0){


        
        cout<<roman[flag-1];
        flag--;

    }
   delete [] temp;
    return 0;
}

