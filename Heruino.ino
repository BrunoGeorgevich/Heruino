#include <LiquidCrystal.h>

#define NOTE_A1  55
#define NOTE_A2  110
#define NOTE_A3  220
#define NOTE_A4  440
#define NOTE_A5  880
#define NOTE_A6  1760
#define NOTE_A7  3520
#define NOTE_AS1 58
#define NOTE_AS2 117
#define NOTE_AS3 233
#define NOTE_AS4 466
#define NOTE_AS5 932
#define NOTE_AS6 1865
#define NOTE_AS7 3729
#define NOTE_B0  31
#define NOTE_B1  62
#define NOTE_B2  123
#define NOTE_B3  247
#define NOTE_B4  494
#define NOTE_B5  988
#define NOTE_B6  1976
#define NOTE_B7  3951
#define NOTE_C1  33
#define NOTE_C2  65
#define NOTE_C3  131
#define NOTE_C4  262
#define NOTE_C5  523
#define NOTE_C6  1047
#define NOTE_C7  2093
#define NOTE_C8  4186
#define NOTE_CS1 35
#define NOTE_CS2 69
#define NOTE_CS3 139
#define NOTE_CS4 277
#define NOTE_CS5 554
#define NOTE_CS6 1109
#define NOTE_CS7 2217
#define NOTE_CS8 4435
#define NOTE_D1  37
#define NOTE_D2  73
#define NOTE_D3  147
#define NOTE_D4  294
#define NOTE_D5  587
#define NOTE_D6  1175
#define NOTE_D7  2349
#define NOTE_D8  4699
#define NOTE_DS1 39
#define NOTE_DS2 78
#define NOTE_DS3 156
#define NOTE_DS4 311
#define NOTE_DS5 622
#define NOTE_DS6 1245
#define NOTE_DS7 2489
#define NOTE_DS8 4978
#define NOTE_E1  41
#define NOTE_E2  82
#define NOTE_E3  165
#define NOTE_E4  330
#define NOTE_E5  659
#define NOTE_E6  1319
#define NOTE_E7  2637
#define NOTE_F1  44
#define NOTE_F2  87
#define NOTE_F3  175
#define NOTE_F4  349
#define NOTE_F5  698
#define NOTE_F6  1397
#define NOTE_F7  2794
#define NOTE_FS1 46
#define NOTE_FS2 93
#define NOTE_FS3 185
#define NOTE_FS4 370
#define NOTE_FS5 740
#define NOTE_FS6 1480
#define NOTE_FS7 2960
#define NOTE_G1  49
#define NOTE_G2  98
#define NOTE_G3  196
#define NOTE_G4  392
#define NOTE_G5  784
#define NOTE_G6  1568
#define NOTE_G7  3136
#define NOTE_GS1 52
#define NOTE_GS2 104
#define NOTE_GS3 208
#define NOTE_GS4 415
#define NOTE_GS5 831
#define NOTE_GS6 1661
#define NOTE_GS7 3322

//Mario main theme melody
int mario_main_notes[] = {

  0, 0, 0, 0,
  0, 0, 0, 0,
  0, 0, 0, 0,
  0, 0, 0, 0,

  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
  0
};
//Mario main them tempo
int mario_main_duration[] = {
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  111, 111, 111,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  111, 111, 111,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  111, 111, 111,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,

  111, 111, 111,
  84, 84, 84, 84,
  84, 84, 84, 84,
  84, 84, 84, 84,
  0
};

byte top_mid[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
  0b00000,
  0b11111,
  0b11111
};
byte mid_bot[8] = {
  0b11111,
  0b11111,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};
byte bot[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};
byte top[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};
byte mid_1[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111
};
byte mid_2[8] = {
  0b11111,
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};
byte blank[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

/*

   0 = TOP_MID
   1 = MID_BOT
   2 = TOP
   3 = BOT
   4 = MID_1
   5 = MID_2
   6 = BLANK

*/
int data[] = {
  6, 3, 6, 3, 2, 6, 6, 3, 2, 6, 4, 5, 6, 3, 2, 6, 6, 3, 2, 6, 2, 6, 2, 6, 4, 5, 2, 6, 2, 6, 2, 6,
  4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 2, 6, 4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6,
  6, 3, 4, 5, 6, 3, 4, 5, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6, 6, 3, 4, 5, 6, 3, 2, 6, 2, 6,
  4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 2, 6, 4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6,
  6, 3, 4, 5, 6, 3, 4, 5, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6, 6, 3, 4, 5, 6, 3, 2, 6, 2, 6,
  6, 3, 6, 3, 2, 6, 6, 3, 2, 6, 4, 5, 6, 3, 2, 6, 6, 3, 2, 6, 2, 6, 2, 6, 4, 5, 2, 6, 2, 6, 2, 6,
  4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 2, 6, 4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6,
  6, 3, 4, 5, 6, 3, 4, 5, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6, 6, 3, 4, 5, 6, 3, 2, 6, 2, 6,
  4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 2, 6, 4, 5, 2, 6, 2, 6, 6, 3, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6,
  6, 3, 4, 5, 6, 3, 4, 5, 2, 6, 4, 5, 6, 3, 2, 6, 4, 5, 2, 6, 6, 3, 4, 5, 6, 3, 2, 6, 2, 6,
  //Ending State
  6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6
};

int currentState[] = {
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6,
  6, 6
};

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int dataIndex = 0;
int bottomButtonPin = 7;
int midButtonPin = 8;
int topButtonPin = 9;

int redLedPin = 13;
int greenLedPin = 10;

int bottomButtonValue = 0;
int midButtonValue = 0;
int topButtonValue = 0;

const int buzzerPin = 6;
const int songspeed = 1;

int matches = 0;
int errors = 0;

bool inited = false;

int delaySize = 60;
int dataSize = (sizeof(data) / sizeof(int)) / 2;
int upperLimit = (dataSize % 16);

int checker = 0;
int prescaler = 2;
int counter = 0;

int *notes = mario_main_notes;
int *duration = mario_main_duration;

// 00 10
// 01 11
void swap(int i00, int i01, int i10, int i11) {
  currentState[i10] = currentState[i00];
  currentState[i11] = currentState[i01];
}

void step(int a, int b) {
  for (int i = 31; i > 2; i -= 2) {
    swap(i - 3, i - 2, i - 1, i);
  }
  currentState[0] = a;
  currentState[1] = b;

  int count = 0;
  for (int i = 0; i < 32; i += 2, count++) {
    lcd.setCursor(count, 0);
    lcd.write(currentState[i]);
    lcd.setCursor(count, 1);
    lcd.write(currentState[i + 1]);
  }
}

int nextNum() {
  int a = data[dataIndex];
  dataIndex++;
  return a;
}

void setup()
{
  lcd.createChar(0, top_mid);
  lcd.createChar(1, mid_bot);
  lcd.createChar(2, top);
  lcd.createChar(3, bot);
  lcd.createChar(4, mid_1);
  lcd.createChar(5, mid_2);
  lcd.createChar(6, blank);

  pinMode(bottomButtonPin, INPUT);
  pinMode(midButtonPin, INPUT);
  pinMode(topButtonPin, INPUT);

  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);

  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  lcd.begin(16, 2);
}

void checkButtonClicked() {
  bottomButtonValue = digitalRead(bottomButtonPin);
  midButtonValue = digitalRead(midButtonPin);
  topButtonValue = digitalRead(topButtonPin);
  Serial.println(String(currentState[30]) + " " + String(currentState[31]));

  digitalWrite(redLedPin, LOW);
  digitalWrite(greenLedPin, LOW);

  if (bottomButtonValue == LOW && midButtonValue == LOW && topButtonValue == LOW) {
    return;
  }

  if(!inited)
      inited = true;

  if (bottomButtonValue == HIGH && currentState[30] == 6 && currentState[31] == 3) {
    Serial.println("BOT");
    matches += 1;
    digitalWrite(greenLedPin, HIGH);
    return;
  }

  if (midButtonValue == HIGH && currentState[30] == 4 && currentState[31] == 5) {
    Serial.println("MID");
    matches += 1;
    digitalWrite(greenLedPin, HIGH);
    return;
  }

  if (topButtonValue == HIGH && currentState[30] == 2 && currentState[31] == 6) {
    Serial.println("TOP");
    matches += 1;
    digitalWrite(greenLedPin, HIGH);
    return;
  }

  digitalWrite(redLedPin, HIGH);
  errors += 1;

}

void endOfSong() {
  lcd.setCursor(0, 0);
  lcd.print("Matches : " + String(matches));
  lcd.setCursor(0, 1);
  lcd.print("Errors  : " + String(errors));
  tone(buzzerPin, 0, 100);
}

void loop()
{
  checkButtonClicked();

  if(!inited) {
    lcd.setCursor(0, 0);
    lcd.print("Press a Button");
    return;
  }

  if (counter >= dataSize) {
    endOfSong();
  } else if (counter < dataSize && checker >= prescaler) {
    int a = nextNum();
    int b = nextNum();

    tone(buzzerPin, notes[counter], duration[counter] * songspeed);
    step(a, b);

    prescaler = (duration[counter] * songspeed) / delaySize;
    counter++;
    checker = 0;
    //Serial.println(String(counter) + " - " + String(size));
  }

  delay(delaySize * songspeed);

  checker++;
}
