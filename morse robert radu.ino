/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 7;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //R  ** Exemple SOS **
  punt();
  ratlla();
  punt();
  espaiL();
  //O
   ratlla();
   ratlla();
   ratlla();
   espaiL();
   // B
    ratlla();
     punt();
     punt();
     punt();
     espaiL();
     //E
     punt();
     espaiL();
     //R
      punt();
      ratlla();
      punt();
      espaiL();
      //T
      ratlla();
      
      espaiP();
      
     //R
       punt();
      ratlla();
      punt();
      espaiL();
      //A
      punt();
      ratlla();
      espaiL();
      //D
       ratlla();
       punt();
        punt();
        espaiL();
        //U
        punt();
        punt();
        ratlla();
        espaiP();
 
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
