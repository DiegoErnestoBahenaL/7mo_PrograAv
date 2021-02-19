using System;
using static System.Console;
namespace printing_console
{
    class Program
    {

        static void Main(string[] args)
        {

            #region arrayOfInformation
            
                string [] nameOfTypes;              //Declaration of a string array
               
                nameOfTypes = new string [11];      //The size of the string is assigned

                nameOfTypes [0] = "sbyte";          //The names of the types will be assigned to
                nameOfTypes [1] = "byte";           //each position of the collection
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
            

            //In order to print a divisor line, the Line mehod is invocated
            Line();         

            WriteLine($"{"Type",-10}{"Byte(s) of memory",-10}{"Min",24}{"Max",31}"); //this prints the titles of the table
             
            Line ();
           
            //the cycle will print the table with the information of the array nameOfTypes and the method InfoOfType

            for (int i = 0; i < 11; i++){

                WriteLine($"{nameOfTypes[i],-10}{InfoOfType(i)}");

            }

            Line ();
            #endregion





        }
    #region methodOfTable


        // The method InfoOfType returns a string with the number of bytes,
        // the min value & the max value of the corresponding type
        private static string InfoOfType (int counter){

                string information = string.Empty;  //declaration of the string information as empty
               
                int decision = counter;             //the int decision will receive the value of the
                                                    //current position in the nameOfTypes Array 

                //decision will switch with the position of the 
                //array
                switch (decision)                 
                {
                    //In every case, information will return a string with the memory, min & max value
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
        #endregion
   
    #region methodOfDivison

        //this method prints a line made with the "-" character       
        private static void Line (){

             for (int i = 0; i < 82; i++){

                Write("-");

            }
            WriteLine();



        }


    #endregion
   
    }
}
