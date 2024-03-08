int b,c,d,e,f,g,h,i; //infrared

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(3,INPUT);  // declarate infrared
  pinMode(4,INPUT);  // declarate infrared
  pinMode(5,INPUT);  // declarate infrared
  pinMode(6,INPUT);  // declarate infrared
  pinMode(7,INPUT);  // declarate infrared
  pinMode(8,INPUT);  // declarate infrared
  pinMode(9,INPUT);  // declarate infrared
  pinMode(10,INPUT); // declarate infrared
}

void loop() {
  // put your main code here, to run repeatedly:
  b = digitalRead(3); //infrared has digital output
  c = digitalRead(4);
  d = digitalRead(5);
  e = digitalRead(6);
  f = digitalRead(7);
  g = digitalRead(8);
  h = digitalRead(9);
  i = digitalRead(10);

    if(b==0){
      Serial.print("bt0.val="); //button 0
      Serial.print("1"); //value button 0
      Serial.write(0xff);  //
      Serial.write(0xff);  //
      Serial.write(0xff);  // must put
      Serial.print("t0.txt=\""); //text 0
      Serial.print("Penuh"); //Change text 0 with "Penuh"
      Serial.print("\""); //Close string
      Serial.write(0xff); //
      Serial.write(0xff); //
      Serial.write(0xff); //must put
      
    }
    else{
      Serial.print("bt0.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t0.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(c==0){
      Serial.print("bt1.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t1.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt1.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t1.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(d==0){
      Serial.print("bt2.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t2.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt2.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t2.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(e==0){
      Serial.print("bt3.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t3.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt3.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t3.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(f==0){
      Serial.print("bt4.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t4.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt4.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t4.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(g==0){
      Serial.print("bt5.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t5.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt5.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t5.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(h==0){
      Serial.print("bt6.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t6.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt6.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t6.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
    if(i==0){
      Serial.print("bt7.val=");
      Serial.print("1");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t7.txt=\"");
      Serial.print("Penuh");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      
    }
    else{
      Serial.print("bt7.val=");
      Serial.print("0");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.print("t7.txt=\"");
      Serial.print("Kosong");
      Serial.print("\"");
      Serial.write(0xff);
      Serial.write(0xff);
      Serial.write(0xff);
    }
}
