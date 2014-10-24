// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo menique;
Servo anular;
Servo corazon;
Servo indice;
Servo pulgar;
               
int posPulgar = 90;
int posIndice = 90;
int posCorazon = 90;
int posAnular = 90;
int posMenique = 90;
int speed = 5;
 
void setup() 
{ 
  menique.attach(6);
  anular.attach(5);
  corazon.attach(11);
  indice.attach(10);
  pulgar.attach(3);
  
  pulgar.write(posPulgar);
  menique.write(posMenique);
  anular.write(posAnular);
  corazon.write(posCorazon);
  indice.write(posIndice);
  //peticion();
  //cuernos();
  //ronaldinho();
  //ok();
  //pistola();

} 
 
 
void loop() 
{ 
  moverTodos();
  delay(500);
  //mueveMano();
  //delay(2000);
  cuernos();
  delay(2000);
  ok();
  delay(2000);
  ronaldinho();
  delay(2000);
  pistola();
  delay(2000);
} 

void ok (){
  
 doblaMenique();
 doblaIndice();
 doblaAnular();
 doblaCorazon();
 extiendePulgar();
 }
 void pistola (){
  
 doblaMenique();
 extiendeIndice();
 doblaAnular();
 doblaCorazon();
 extiendePulgar();
 }
void peticion (){
  
 //doblaMenique();
 //doblaIndice();
 doblaAnular();
 //doblaCorazon();
 doblaPulgar();
 extiendeMenique();
 extiendeIndice();
 //extiendeAnular();
 extiendeCorazon();
// extiendePulgar();
 }
 void ronaldinho (){
  
 extiendeMenique();
 doblaIndice();
 doblaAnular();
 doblaCorazon();
 extiendePulgar();
 }

void cuernos(){
 extiendeMenique();
 extiendeIndice();
 doblaAnular();
 doblaCorazon();
 extiendePulgar();
}

void moverTodos(){
  mueveMenique();
  mueveAnular();
  mueveCorazon();
  mueveIndice();
  muevePulgar();
}

void mueveMano(){
 int pos;
  for(pos = 0; pos < 150; pos += 1)
  {    
    pulgar.write(pos);
    menique.write(pos);
    anular.write(pos);
    corazon.write(pos);
    indice.write(pos);
    delay(speed);
  } 
  for(pos = 150; pos>=0; pos-=1)
  {                                
    pulgar.write(pos);
    menique.write(pos);
    anular.write(pos);
    corazon.write(pos);
    indice.write(pos);         
    delay(speed);      
  }
  
}

void muevePulgar(){
  
  for(; posPulgar < 100; posPulgar += 1)
  {    
    pulgar.write(posPulgar);
    delay(speed);
  } 
  for(; posPulgar>=0; posPulgar-=1)
  {                                
    pulgar.write(posPulgar);          
    delay(speed);      
  } 
}

void extiendePulgar(){
  
  for(; posPulgar < 100; posPulgar += 1)
  {    
    pulgar.write(posPulgar);
    delay(speed);
  } 
}

void doblaPulgar(){
   
  for(; posPulgar>=0; posPulgar-=1)
  {                                
    pulgar.write(posPulgar);          
    delay(speed);      
  } 
}

void mueveIndice(){
  
  for(; posIndice < 130; posIndice += 1)
  {    
    indice.write(posIndice);
    delay(speed);
  } 
  for(; posIndice>=0; posIndice-=1)
  {                                
    indice.write(posIndice);          
    delay(speed);      
  } 
}

void extiendeIndice(){
  
  for(; posIndice < 130; posIndice += 1)
  {    
    indice.write(posIndice);
    delay(speed);
  } 
}

void doblaIndice(){
  for(; posIndice>=0; posIndice-=1)
  {                                
    indice.write(posIndice);          
    delay(speed);      
  } 
}


void mueveCorazon(){
  
  for(; posCorazon < 140; posCorazon += 1)
  {    
    corazon.write(posCorazon);
    delay(speed);
  } 
  for(; posCorazon>=10; posCorazon-=1)
  {                                
    corazon.write(posCorazon);          
    delay(speed);      
  } 
}

void extiendeCorazon(){
  
  for(; posCorazon < 140; posCorazon += 1)
  {    
    corazon.write(posCorazon);
    delay(speed);
  }  
}

void doblaCorazon(){
  
  for(; posCorazon>=10; posCorazon-=1)
  {                                
    corazon.write(posCorazon);          
    delay(speed);      
  } 
}


void mueveAnular(){
  
  for(; posAnular < 100; posAnular += 1)
  {    
    anular.write(posAnular);
    delay(speed);
  } 
  for(; posAnular>=1; posAnular-=1)
  {                                
    anular.write(posAnular);          
    delay(speed);      
  } 
}

void extiendeAnular(){
  
  for(; posAnular < 100; posAnular += 1)
  {    
    anular.write(posAnular);
    delay(speed);
  } 
}

void doblaAnular(){
  
  for(; posAnular>=1; posAnular-=1)
  {                                
    anular.write(posAnular);          
    delay(speed);      
  } 
}

void mueveMenique(){
  
  for(; posMenique < 150; posMenique += 1)
  {    
    menique.write(posMenique);
    delay(speed);
  } 
  for(; posMenique>=45; posMenique-=1)
  {                                
    menique.write(posMenique);          
    delay(speed);      
  } 
}

void extiendeMenique(){
   
  for(; posMenique < 150; posMenique += 1)
  {    
    menique.write(posMenique);
    delay(speed);
  }  
}

void doblaMenique(){
   
  for(; posMenique>=45; posMenique-=1)
  {                                
    menique.write(posMenique);          
    delay(speed);      
  } 
}
