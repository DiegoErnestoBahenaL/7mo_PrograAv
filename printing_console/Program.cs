using System;
using static System.Console;
namespace printing_console
{
    class Program
    {
        static void Main(string[] args)
        {

            #region arrayOfInformation
                
                var dataTypes = new dynamic [11];       //An array of dynamic is created allowing to contain any kind of types

                sbyte firstType = 0;
                byte  secondType = 0;
                dataTypes [0] = firstType;
                dataTypes [1] = secondType;
                
               
                    WriteLine($"Soy un sbyte con valor de {dataTypes[0]}\n");
                    WriteLine($"Soy un byte con valor de {dataTypes[1]}\n");

              
                
            #endregion
            
        }
    }
}
