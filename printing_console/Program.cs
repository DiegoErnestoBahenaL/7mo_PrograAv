using System;
using static System.Console;
namespace printing_console
{
    class Program
    {

        static void Main(string[] args)
        {

            #region arrayOfInformation
            
                string [] nameOfTypes;
                nameOfTypes = new string [11];

                nameOfTypes [0] = "sbyte";
                nameOfTypes [1] = "byte";
                nameOfTypes [2] = "short";
                nameOfTypes [3] = "ushort";
                nameOfTypes [4] = "int";
                nameOfTypes [5] = "uint";
                nameOfTypes [6] = "long";
                nameOfTypes [7] = "ulong";
                nameOfTypes [8] = "float";
                nameOfTypes [9] = "double";
                nameOfTypes [10] = "decimal";
    
            #endregion

            #region printingContents


            WriteLine($"{"Type",-10}{"Byte(s) of memory",-10}{"Min",24}{"Max",31}");
    

            for (int i = 0; i < 11; i++){

                WriteLine($"{nameOfTypes[i],-10}{InfoOfType(i)}");

            }
        
            #endregion





        }

        private static string InfoOfType (int counter){

                string information = string.Empty;
                int decision = counter;

                switch (decision)
                {

                    case 0:
                     information = $"{sizeof(sbyte), -10}{sbyte.MinValue, 31}{sbyte.MaxValue, 31}";
                     break;

                    case 1:
                     information = $"{sizeof(byte), -10}{byte.MinValue, 31}{byte.MaxValue, 31}";
                     break;

                    case 2:
                     information = $"{sizeof(short), -10}{short.MinValue, 31}{short.MaxValue, 31}";
                     break;

                    case 3:
                     information = $"{sizeof(ushort), -10}{ushort.MinValue, 31}{ushort.MaxValue, 31}";
                     break;

                     case 4:
                     information = $"{sizeof(int), -10}{int.MinValue, 31}{int.MaxValue, 31}";
                     break;

                     case 5:
                     information = $"{sizeof(uint), -10}{uint.MinValue, 31}{uint.MaxValue, 31}";
                     break;

                     case 6:
                     information = $"{sizeof(long), -10}{long.MinValue, 31}{long.MaxValue, 31}";
                     break;

                     case 7:
                     information = $"{sizeof(ulong), -10}{ulong.MinValue, 31}{ulong.MaxValue, 31}";
                     break;

                     case 8:
                     information = $"{sizeof(float), -10}{float.MinValue, 31}{float.MaxValue, 31}";
                     break;

                     case 9:
                     information = $"{sizeof(double), -10}{double.MinValue, 31}{double.MaxValue, 31}";
                     break;

                     case 10:
                     information = $"{sizeof(decimal), -10}{decimal.MinValue, 31}{decimal.MaxValue, 31}";
                     break;

                    default:
                    break;
                }

                 return information;
          
        } 

    }
}
