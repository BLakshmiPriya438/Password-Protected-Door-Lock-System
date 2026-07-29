//door locking sysytaem using password
#include<LiquidCrystal.h>
#include<Keypad.h>
#include<Servo.h>
LiquidCrystal lcd(13,12,11,10,9,8);//rs,e,db4,db5,db6,db7;
Servo door;
const byte rows=4;
const byte cols=4;
  char keys[rows][cols]={
  {'1','2','3','A'},
    {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}};
byte rowpins[rows]={A0,A1,A2,A3};//pins assign
byte colpins[cols]={A4,A5,2,3};
//mapping
Keypad keypad=Keypad(makeKeymap(keys),rowpins,colpins,rows,cols);
//password
String pass="123A";
String input="";
void setup()
{
  lcd.begin(16,2);
 lcd.setCursor(0,0);
  door.attach(7);
  door.write(0);
  lcd.print("Enter password:");
  lcd.setCursor(0,1);
}
void loop()
{
  char key=keypad.getKey();
  if(key)
  {
    lcd.print("*");//hode pass
    input+=key;
  }
  if(input.length()==4)
  {
    lcd.clear();
    if(input==pass)
    {
      lcd.print("ACESS");
    door.write(90);
      delay(3000);
    }
    else
    {
      lcd.print("wrong password");
      delay(2000);
    }
    input="";
    lcd.clear();
    lcd.print("Enter password:");
    lcd.setCursor(0,1);
  }
}