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




    if(conversion >= 100){

             char pref;
             flag = 3;
             pref = temp[size - flag];

            cent = pref - '0';

            switch (cent)
            {
            case 1:
                roman += "C";
              
                break;
            case 2:
                roman += "CC"; 
             
   
                break;

            case 3:
                roman += "CCC";
              
    
                break;
            case 4:
                roman += "CD";
                
                break;
            case 5:
                roman += "D";
           
                break;
            case 6:
                roman += "DC";
                
                break;
            case 7:
                roman += "DCC";
            
                break;
            
            case 8:
                roman += "DCCC";
              
                break;    
            case 9:
                roman += "CM";
               
                break;
            case 0:
                break;
            }
        }
    
        if(conversion >= 10){

             char pref;
             flag = 2;
             pref = temp[size - flag];

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
                roman += "XC";
                
                break;
            case 0:
                break;
            }
        }

    
        if(conversion >= 1){

             char pref;
             flag = 1;
             pref = temp[size - flag];

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

