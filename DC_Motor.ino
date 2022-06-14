#include <M5Stack.h>  /*Menambahakan library m5stack*/
void setup() {        /*Menginisiasi fungsi void*/
M5.begin(true, false, true);  /*Untuk menginisiasi atau memulai program M5*/
M5.Lcd.clear(BLACK);          /*Untuk menentukan LCD berwarna background hitam*/
M5.Lcd.setTextColor(YELLOW);  /*Untuk menentukan teks berwarna kuning*/
M5.Lcd.setTextSize(2);        /*Untuk menentukan ukuran teks*/
M5.Lcd.setCursor(65, 10);     /*Untuk menentukan koordinat atau baris teks di LCD*/
M5.Lcd.println("DC motor example");   /*Untuk print out atau mengeluarkan teks "DC Motor Example"*/
M5.Lcd.setCursor(30, 220);            /*Untuk menentukan koordinat atau baris teks di LCD*/
M5.Lcd.println("Forward");     /*Untuk print out atau mengeluarkan teks "Forward"*/
M5.Lcd.setCursor(140, 220);    /*Untuk menentukan koordinat atau baris teks di LCD*/
M5.Lcd.println("stop");        /*Untuk print out atau mengeluarkan teks "stop"*/
M5.Lcd.setCursor(220, 220);    /*Untuk menentukan koordinat atau baris teks di LCD*/
M5.Lcd.println("Reverse");     /*Untuk print out atau mengeluarkan teks "Reverse"*/
pinMode(21, OUTPUT);      /*Untuk menentukan atau menginisiasi pin 21*/
pinMode(22, OUTPUT);      /*Untuk menentukan atau menginisiasi pin 22*/
}
void loop() {           /*Menginisiasi fungsi void*/
M5.update();            /*Untuk mengupdate atau memperbarui program M5*/
if (M5.BtnA.wasReleased()) {   /*Untuk menginisiasi Button A jika di tekan*/
M5.Lcd.print('A');             /*Untuk print out atau mengeluarkan teks "A"*/
digitalWrite(22, LOW);         /*Untuk menginisiasi pin 22 pada keadaan LOW atau OFF*/
digitalWrite(21, HIGH);        /*Untuk menginisiasi pin 21 pada keadaan HIGH atau ON*/
} else if (M5.BtnB.wasReleased()) {   /*Untuk menginisiasi Button B jika di tekan*/
M5.Lcd.print('B');             /*Untuk menginisiasi Button A jika di tekan*/
digitalWrite(21, LOW);         /*Untuk menginisiasi pin 21 pada keadaan LOW atau OFF*/
digitalWrite(22, LOW);         /*Untuk menginisiasi pin 22 pada keadaan LOW atau OFF*/
} else if (M5.BtnC.wasReleased()) {   /*Untuk menginisiasi Button C jika di tekan*/
M5.Lcd.print('C');             /*Untuk print out atau mengeluarkan teks "C"*/
digitalWrite(21, LOW);         /*Untuk menginisiasi pin 21 pada keadaan LOW atau OFF*/
digitalWrite(22, HIGH);        /*Untuk menginisiasi pin 22 pada keadaan HIGH atau ON*/
}
}
