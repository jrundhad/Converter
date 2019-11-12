#include <stdio.h>
#include <string.h>
//created functions for all conversions
double KmToMiles(double inputvalue) {
  double miles=inputvalue*0.62137;
  return(miles);

}

double MilesToKm (double inputvalue){
  double km= inputvalue*1.609344;
  return(km);
}

double MeterToFt (double inputvalue){
  double ft= inputvalue*3.28084;
  return(ft);
}

double FtToMeter (double inputvalue){
  double meter=inputvalue * 0.3048;
  return(meter);
}

double CmtoInch (double inputvalue){
  double Inch= inputvalue*0.393701;
  return(Inch);
}

double InchToCm(double inputvalue){
  double Cm= inputvalue*2.54;
  return(Cm);
}

double CelsiusToFarenheit (double inputvalue){
  double Farenheit=(inputvalue*1.8)+32;
  return(Farenheit);
}

double FarenheitToCelsius (double inputvalue){
  double Celsius= (inputvalue - 32)*0.55555556;
  return(Celsius);
}

int main()
{
  char userInput[5];
  char conversionInput[5];
  float valueInput;

  do{
    // tells user what each input does
    printf("What would you like to convert\nPress 1 for conversion between kilometer and miles\n");
    printf("Press 2 for conversion between meters and feet \nPress 3 for conversion between Centimetre and inch\n");
    printf("Press 4 for conversion between celsius and farenheit \nPress 5 to exit application\n");
    printf("Process will continue to repeat until valid input is entered.\n");
    // takes user input between 1-5 invalid input will cause program to restart
    scanf(" %s", userInput );
    // uses string compare to see what the user entered and compares it with all the valid inputs
    if (strcmp("1",userInput)==0) {
      // tells user what each input does
      printf("Press K for conversion between kilometer to mile\n");
      printf("Press M for conversion between mile to kilometer\n");
      // takes user input for direction of conversion
      scanf(" %s", conversionInput );
      if (strcmp("K",conversionInput)==0) {
        // asks user for input value
        printf("Please enter a value:\n");
        // take input value
        scanf(" %f", &valueInput);
        // using the functions created above it produces the result
        float result=KmToMiles(valueInput);
        // prints the result onto the screen
        printf("Your result is %f miles\n \n",result);
      }
      else if(strcmp("M",conversionInput)==0){
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput);
        float result=MilesToKm(valueInput);
        printf("Your result is %f kilometers\n \n",result);
      }
      // if user did not enter a valid conversion input the program restarts from the beginening
      else continue;

    }
    else if (strcmp("2", userInput)==0){
      printf("Press M for coversion from meter to feet\n");
      printf("Press F for conversion from feet to meter\n");
      scanf(" %s", conversionInput );
      if (strcmp("M",conversionInput)==0) {
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput );
        float result= MeterToFt(valueInput);
        printf("Your result is %f feet\n \n",result);

      }
      else if(strcmp("F",conversionInput)==0){
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput);
        float result=FtToMeter(valueInput);
        printf("Your result is %f meters\n \n",result);
      }
      else continue;
    }
    else if (strcmp("3", userInput)==0){
      printf("Press C for coversion from centimeter to inch\n");
      printf("Press I for conversion from Inch to Centimetre\n");
      scanf(" %s", conversionInput );
      if (strcmp("C",conversionInput)==0) {
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput );
        float result= CmtoInch(valueInput);
        printf("Your result is %f Inchs\n \n",result);

      }
      else if(strcmp("I",conversionInput)==0){
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput);
        float result=InchToCm(valueInput);
        printf("Your result is %f Centimetres\n \n",result);
      }
      else continue;
    }
    else if (strcmp("4", userInput)==0){
      printf("Press C for coversion from Celsius to Farenheit\n");
      printf("Press F for conversion from Farenheit to Celsius\n");
      scanf(" %s", conversionInput );
      if (strcmp("C",conversionInput)==0) {
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput );
        float result= CelsiusToFarenheit(valueInput);
        printf("Your result is %f degrees farenheit\n \n",result);

      }
      else if(strcmp("F",conversionInput)==0){
        printf("Please enter a value:\n");
        scanf(" %f", &valueInput);
        float result=FarenheitToCelsius(valueInput);
        printf("Your result is %f degrees celsius\n \n",result);
      }
      else continue;
    }
  // if user enters 5 the program will stop running and return 0
  }while(strcmp("5",userInput)!=0);
  printf("Thank You for using the application, hope it helped. :) \n");
  return 0;
  }
