#include <P1AM.h>

/******************************************************************************************
 * Automationdirect.com Ardublock Revision: 1.0.0
 * This version supports P1AM.h Library V0.2.0
 * For information on the P1AM-1xx hardware, please visit https://www.automationdirect.com
 * TODO: Add 'ABOUT' information
 ******************************************************************************************/

boolean __ardublockDigitalRead(int pinNumber)
{
  pinMode(pinNumber, INPUT);
  return digitalRead(pinNumber);
}



void setup()
{
  Serial.begin(115200);
  while(!P1.init())
  {

  }

  P1.printModules();
}

void loop()
{
  if (__ardublockDigitalRead(31))
  {
    delay( 1000 );
    P1.writeDiscrete(0, 2, 1);	
    delay( 1000 );
    P1.writeDiscrete(1, 2, 1);
  }
  else
  {
    P1.writeDiscrete(0, 2, 1);	
    while ( bitRead(P1.readDiscrete(1, 0),1-1) )
    {
      P1.Base_Controller_FW_Update(45724);	
    }

  }
}
