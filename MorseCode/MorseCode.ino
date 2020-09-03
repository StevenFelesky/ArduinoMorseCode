int led_pin = 13;

int dot = 500;
int dash = 1000;

String message;
char c;

void setup() {
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //input from arduino ide serial monitor
  while(Serial.available()){
    c = Serial.read();
    
    if(c != '\n'){
      message += c;
    }
  }

  Serial.println(message);
  
  for(int i=0; i<message.length(); i++){
    MorseCode(message.charAt(i));
  }
}

void Dot() {
  digitalWrite(led_pin, HIGH);
  delay(dot);
  digitalWrite(led_pin, LOW);
  delay(dot);
}
void Dash() {
  digitalWrite(led_pin, HIGH);
  delay(dash);
  digitalWrite(led_pin, LOW);
  delay(dot);
}
void MorseCode(char c){
  //alphabet a-z
  if(c == 'a' || c == 'A'){Dot(); Dash();}
  if(c == 'b' || c == 'B'){Dash(); Dot(); Dot(); Dot();}
  if(c == 'c' || c == 'C'){Dash(); Dot(); Dash(); Dot();}
  if(c == 'd' || c == 'D'){Dash(); Dot(); Dot();}
  if(c == 'e' || c == 'E'){Dot();}
  if(c == 'f' || c == 'F'){Dot(); Dot(); Dash(); Dot();}
  if(c == 'g' || c == 'G'){Dash(); Dash(); Dot();}
  if(c == 'h' || c == 'H'){Dot(); Dot(); Dot(); Dot;}
  if(c == 'i' || c == 'I'){Dot(); Dot();}
  if(c == 'j' || c == 'J'){Dot(); Dash(); Dash(); Dash();}
  if(c == 'k' || c == 'K'){Dash(); Dot(); Dash();}
  if(c == 'l' || c == 'L'){Dot(); Dash(); Dot(); Dot();}
  if(c == 'm' || c == 'M'){Dash(); Dash();}
  if(c == 'n' || c == 'N'){Dash(); Dot();}
  if(c == 'o' || c == 'O'){Dash(); Dash(); Dash();}
  if(c == 'p' || c == 'P'){Dot(); Dash(); Dash(); Dot();}
  if(c == 'q' || c == 'Q'){Dash(); Dash(); Dot(); Dash();}
  if(c == 'r' || c == 'R'){Dot(); Dash(); Dot();}
  if(c == 's' || c == 'S'){Dot(); Dot(); Dot();}
  if(c == 't' || c == 'T'){Dash();}
  if(c == 'u' || c == 'U'){Dot(); Dot(); Dash();}
  if(c == 'v' || c == 'V'){Dot(); Dot(); Dot(); Dash();}
  if(c == 'w' || c == 'W'){Dot(); Dash(); Dash();}
  if(c == 'x' || c == 'X'){Dash(); Dot(); Dot(); Dash();}
  if(c == 'y' || c == 'Y'){Dash(); Dot(); Dash(); Dash();}
  if(c == 'z' || c == 'Z'){Dash(); Dash(); Dot(); Dot();}
  
  //numbers 0-9
  if(c == '0'){Dash(); Dash(); Dash(); Dash(); Dash();}
  if(c == '1'){Dot(); Dash(); Dash(); Dash(); Dash();}
  if(c == '2'){Dot(); Dot(); Dash(); Dash(); Dash();}
  if(c == '3'){Dot(); Dot(); Dot(); Dash(); Dash();}
  if(c == '4'){Dot(); Dot(); Dot(); Dot(); Dash();}
  if(c == '5'){Dot(); Dot(); Dot(); Dot(); Dot();}
  if(c == '6'){Dash(); Dot(); Dot(); Dot(); Dot();}
  if(c == '7'){Dash(); Dash(); Dot(); Dot(); Dot();}
  if(c == '8'){Dash(); Dash(); Dash(); Dot(); Dot();}
  if(c == '9'){Dash(); Dash(); Dash(); Dash(); Dot();}

  //space
  if(c == ' '){delay(5*dot);}

  //punctuation
  if(c == ','){Dash(); Dash(); Dot(); Dot(); Dash(); Dash();}
  if(c == '.'){Dot(); Dash(); Dot(); Dash(); Dot(); Dash();}
  if(c == '?'){Dot(); Dot(); Dash(); Dash(); Dot(); Dot();}
  if(c == '&'){Dot(); Dash(); Dot(); Dot(); Dot();}
  if(c == '@'){Dot(); Dash(); Dash(); Dot(); Dash(); Dot();}
  if(c == '('){Dash(); Dot(); Dash(); Dash(); Dot();}
  if(c == ')'){Dash(); Dot(); Dash();Dash(); Dot(); Dash();}
  if(c == ':'){Dash(); Dash(); Dash(); Dot(); Dot(); Dot();}
  if(c == '='){Dash(); Dot(); Dot(); Dot(); Dash();}
  if(c == '-'){Dash(); Dot(); Dot(); Dot(); Dot(); Dash();}
  if(c == '+'){Dot(); Dash(); Dot(); Dash(); Dot();}

  delay(2*dot);
}
