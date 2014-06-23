#line 1 "C:/Users/WIN7/Dropbox/eLab/Projectos PIC/pianopic/pianopic.c"
float doo=261,re=293,mi=329,fa=349,sol=392,la=440,si=494;



void on ()
{
 porta=255;portb=255;portc=255;portd=255;
}

void off ()
{
 porta=0;portb=0;portc=0;portd=0;
}

void scanner()
{
 while(porta.f1==1)
 {
 portd.f1=1;Delay_ms(50);
 portd.f1=0;portc.f2=1;Delay_ms(50);
 portc.f2=0;portd.f2=1;Delay_ms(50);
 portd.f2=0;portc.f6=1;Delay_ms(50);
 portc.f6=0;portd.f4=1;Delay_ms(50);
 portd.f4=0;portd.f6=1;Delay_ms(50);
 portd.f6=0;portb.f0=1;Delay_ms(50);
 portb.f0=0;portb.f2=1;Delay_ms(50);
 portb.f2=0;portb.f4=1;Delay_ms(50);
 portb.f4=0;portb.f6=1;Delay_ms(50);
 portb.f6=0;porta.f3=1;Delay_ms(50);

 porta.f3=0;portb.f6=1;Delay_ms(50);
 portb.f6=0;portb.f4=1;Delay_ms(50);
 portb.f4=0;portb.f2=1;Delay_ms(50);
 portb.f2=0;portb.f0=1;Delay_ms(50);
 portb.f0=0;portd.f6=1;Delay_ms(50);
 portd.f6=0;portd.f4=1;Delay_ms(50);
 portd.f4=0;portc.f6=1;Delay_ms(50);
 portc.f6=0;portd.f2=1;Delay_ms(50);
 portd.f2=0;portc.f2=1;Delay_ms(50);
 portc.f2=0;
 }
}

void acender(int hz)
{
 switch(hz)
 {
 case 175: portd.f1=1; portb.f4=1; break;
 case 196: portd.f1=1; portb.f6=1; break;
 case 220: portd.f1=1; break;
 case 247: portc.f2=1; break;
 case 261: portd.f2=1; break;
 case 277: portd.f2=1; portc.f6=1; break;
 case 293: portc.f6=1; break;
 case 311: portc.f6=1; portd.f4=1; break;
 case 329: portd.f4=1; break;
 case 349: portd.f6=1; break;
 case 370: portd.f6=1; portb.f0=1; break;
 case 392: portb.f0=1; break;
 case 415: portb.f0=1; portb.f2=1; break;
 case 440: portb.f2=1; break;
 case 466: portb.f2=1; portb.f4=1; break;
 case 494: portb.f4=1; break;
 case 522: portb.f6=1; break;
 case 586: porta.f3=1; break;
 case 658: porta.f3=1; portc.f2=1; break;
 case 698: porta.f3=1; portd.f2=1; break;
 }
}

void tocar (int L, int musica[], int tempo[])
{
 int i,k;
 for (i=0;i<L;i++)
 {
 if(musica[i]==0)
 {
 for (k=0;k<tempo[i];k++)
 {
 Delay_ms(1);
 }
 }
 else
 {
 acender(musica[i]);
 Sound_Play(musica[i]*2, tempo[i]);
 off();
 Delay_ms(35);
 }
 }
}

void regresso ()
{
 int regre[] ={329,293, 261,247,261,293,329,261, 392,000,329,261, 440, 522, 392,000,440,494,522,522,494,440,392,440,440,392,329,261, 349,329,349,392,440,349,293};
 int tregre[]={300,300,1000,300,300,300,300,300,1000,999,300,300,1200,1200,1000,500,300,300,800,300,500,300,300,800,300,500,300,300,1000,300,300,300,300,300,1000};
 tocar(sizeof(regre)/sizeof(int),regre,tregre);
}

void jsf ()
{
 int jsf[] ={196,247,261,261,196,247,261,261,261,329,349,349,261,329,349,349, 000,392,392,392,440,329,349,392,392,392,392,349,392,293,293,293,349,392,349,329, 196,247,261,261,196,247,261,261,261,329,349,349,261,329,349,349, 000,392,392,392,440,329,349,392,392, 392,440,329,349,392,392,392,392,440,494,522};
 int tjsf[]={400,400,200,700,400,400,200,700,400,400,200,700,400,400,200,700, 300,400,400,180,180,180,180,400,400,400,200,200,400,400,400,200,200,400,400,400, 400,400,200,700,400,400,200,700,400,400,200,700,400,400,200,700, 300,400,400,180,180,180,180,400,400, 180,180,180,180,400,400,180,180,180,180,500};
 tocar(sizeof(jsf)/sizeof(int),jsf,tjsf);
}

void eurovisao ()
{
 int euro[] ={293,392,392,440,494,392,586,522,494,494,522,586,522,494,522,586,440,392,440,494,440, 000,293,392,392,440,494,392,586,522,494,494,522,586,494,522,440,392,392};
 int teuro[]={400,400,200,200,400,400,700,100,700,200,400,200,200,200,200,400,200,200,200,200,400, 050,400,400,200,200,400,400,700,100,700,200,200,200,200,200,700,200,800};
 tocar(sizeof(euro)/sizeof(int),euro,teuro);
}

void JDmelody ()
{
 int jd[] ={ 522, 494, 586, 440, 392,0000, 349, 329, 440, 293, 261};
 int tjd[]={1200,1200,1200,1200,1200,1200,1200,1200,1200,1200,1200};
 tocar(sizeof(jd)/sizeof(int),jd,tjd);
}

void pokemon ()
{
 int poke[] ={329,349,392,349,329,000,329,349,392,349,329,349,329,293,000,293,349,329,293,293, 293,329,349,329,293,261,000,293,329,349,329,293,329,293,261, 000,440,349,522,586,522,494,440, 392,329,392,392,370,349,000,293,329,349,349,329,293,349, 329,000,261,392, 000, 466, 440,000,494,522,586,522,494,440, 392,000,466,440,392,329, 349, 349,392,415,415,392,349,415,392,349,329,293};
 int tpoke[]={200,200,400,400,400,800,200,200,400,400,200,200,200,500,250,400,400,400,200,400, 200,200,400,400,200,400,800,200,200,400,400,200,200,200,800,1000,800,800,800,190,190,190,190,1000,400,700,400,400,800,200,200,200,400,200,400,400,400,1000,200,450,800, 150,1000,1000,200,200,200,400,400,400,400,1000,500,400,400,400,400,1000, 200,200,400,200,400,400,400,1000,200,200,600};
 tocar(sizeof(poke)/sizeof(int),poke,tpoke);
}

void aportuguesa ()
{
 int portu[] ={ 329, 392, 349,329,440,392,261,293,329,293, 261,000, 392,329,00,261, 440,392,440,392,349,329, 261,247,00,261,329,329,370,392,440,00,494, 392, 000,392,494, 586,494,392,349, 349,00,329, 00,392,329,261,196,261,293,329,392, 293, 000,293,329,261,261,00,349,392,329, 000,392,522,392,392,466,415,392,293, 000,293,349,311,392,392,392,349,311,293,00,293, 000,293,349,311,392,392,392,349,311,392, 494,440,392,349,329, 392, 522,494,000,349, 440,392, 261,293,329,329,392,329, 293, 000,392, 522,494,000,349, 440,392, 522,586,658,658,586,522,522, 000,329,349,392,440,440,392,392,522,392,261};
 int tportu[]={1000,1000,1000,500,500,500,300,200,500,500,1000,400, 200,200,50,200,1000,700,200,500,500,350, 150,200,50,200,500,500,300,150,200,50,200,1000, 400,250,200,1000,500,300,200,1000,50,400, 90,300,200,700,200,300,200,300,200,1000, 999,750,250,500,500,25,750,250,600, 150,250,700,250,250,450,250,450,600, 400,350,150,500,350,150,500,350,150,450,50,600, 400,350,150,500,350,150,500,350,150,500, 250,250,250,250,250, 180,1100,600,200,200,1100,500, 350,150,500,500,500,500,1000, 700,180,1100,600,200,200,1100,500, 300,150,500,500,900,200,800, 500,250,250,250,500,500,800,200,500,500,600};
 tocar(sizeof(portu)/sizeof(int),portu,tportu);
}

void silhouettes ()
{
 int silh[100]={220,261,329,392,440,440,440,440,440,440,392,522,494,392,329,440,392,392,329,293,293,329,522,494,392,329,440,440,440,440,440,440,392,522,494,392,329,440,392,392,329,293,293,329,220,261,329,392,440,440,440,440,440,440,392,522,494,392,329,440,392,392,329,293,293,329,522,494,392,329,440,440,440,440,440,440,392,522,494,392,329,440,392,392,329,293,293,329};
 int tsilh[100]={300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200,300,300,300,300,300,300,300,300,300,300,200};
 tocar(sizeof(silh)/sizeof(int),silh,tsilh);
}

void yuna ()
{
 int yu[100]={277,311,349,415,311,0000,349,311,277,230,277,277,311,349,415,311,277,261,230,00000,277,311,349,415,311,0000,349,311,277,230,277,277,311,349,415,522,415,466,00000,466,415,370,349,00000,415,349,261,230,277,277,00000,349,311,277,311,349,210,00000,349,522,415,466,261,277,349,311,277,261,277,277,277,349,311,277,261,277,277,277,311,349,277,349,415,554};
 int tyu[100]={400,400,900,900,1200,700,900,400,400,400,400,400,400,900,900,900,400,400,1500,1300,400,400,900,900,1200,700,900,400,400,400,400,400,400,900,900,900,900,2500,1500,900,900,900,2500,1500,900,900,900,400,400,1800,1500,900,900,900,400,400,1800,1500,900,900,900,400,400,400,400,400,400,400,400,900,400,400,400,400,400,400,900,400,400,400,400,400,400,1500};
 tocar(sizeof(yu)/sizeof(int),yu,tyu);
}

void zanarkand()
{
 int zanark[]={440,329,440,494,522,494,440,392,440,392,329,0,440,329,440,494,522,494,522,586,522,586,658,0,440,329,440,494,522,494,440,392,440,392,329,0,261,293,329,329,329,329,293,392,261,261,247,196,220};
 int tzanark[]={900,300,300,300,600,600,600,900,300,600,900,1000,900,300,300,300,600,600,600,900,300,600,900,1000,900,300,300,300,600,600,600,900,300,600,900,500,300,300,600,600,600,600,900,300,900,300,300,300,900};
 tocar(sizeof(zanark)/sizeof(int),zanark,tzanark);
}

void moonriver()
{
 int moon[17]={392,586,522,494,440,392,349,392,261,494,440,392,349,392,261,293};
 int tmoon[17]={2100,700,1400,1050,350,350,350,1400,700,1050,350,350,350,1400,700,2100};
 tocar(sizeof(moon)/sizeof(int),moon,tmoon);
}

void tetris()
{
 int t;
 int i,k,nota,duracao;
 int music[50]={6,3,4,5,4,3,2,2,4,6,5,4,3,1,4,5,6,4,2,2,1,5,5,7,9,8,7,6,1,4,6,5,4,3,3,4,5,6,4,2,2,1};
 int tempo[50]={2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,2,2,2,2,3,1,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,2,2,2,2,2};
 for (i=0;i<42;i++)
 {
 duracao=tempo[i];
 switch(duracao)
 {
 case 1: t=200; break;
 case 2: t=400; break;
 case 3: t=600; break;
 case 4: t=100; break;
 }
 nota=music[i];
 switch(nota)
 {
 case 1: for(k=0;k<t;k++) Delay_ms(1); break;
 case 2: portd.f1=1; Sound_Play(la*2,t); break;
 case 3: portc.f2=1; Sound_Play(si*2,t); break;
 case 4: portd.f2=1; Sound_Play(doo*4,t); break;
 case 5: portc.f6=1; Sound_Play(re*4,t); break;
 case 6: portd.f4=1; Sound_Play(mi*4,t); break;
 case 7: portd.f6=1; Sound_Play(fa*4,t); break;
 case 8: portb.f0=1; Sound_Play(sol*4,t); break;
 case 9: portb.f2=1; Sound_Play(la*4,t); break;
 }
 off();
 Delay_ms(50);
 }
}

void main()
{
 osccon= 0xff;
 adcon1= 0x0f;
 TRISA = 0x06;
 TRISB = 0xAA;
 TRISC = 0x8A;
 TRISD = 0xA9;

 off();
 Sound_Init(&PORTA, 0);
 Sound_Play(880, 100);
 on();
 Sound_Play(1100, 100);
 off();
 Sound_Play(1400, 100);
 on();
 Sound_Play(1800, 500);
 off();

 while(1)
 {
 if(porta.f1==1)
 {
 if(portb.f3==1 && portb.f5==1 && portb.f7==1)
 scanner();

 if(portd.f0==1)
 tetris();

 if(portc.f1==1)
 silhouettes();

 if(portd.f3=1)
 pokemon();

 if(portc.f7==1)
 moonriver();

 if(portd.f5==1)
 eurovisao();

 if(portd.f7==1)
 jsf();

 if(portb.f1==1)
 aportuguesa();

 if(portb.f3==1)
 zanarkand();

 if(portb.f5==1)
 yuna();

 if(portb.f7==1)
 JDmelody();

 if(porta.f2==1)
 regresso();
 }
 else
 {
 if(portd.f0==1 && portc.f1==0 && portb.f7==0 && portb.f5==0)
 {
 portd.f1=1;
 porta.f0=1;
 Delay_us(1136);
 porta.f0=0;
 Delay_us(1136);
 portd.f1=0;
 }

 if(portd.f0==1 && portc.f1==1)
 {
 portd.f1=1;
 portc.f2=1;
 porta.f0=1;
 Delay_us(1072);
 porta.f0=0;
 Delay_us(1072);
 portd.f1=0;
 portc.f2=0;
 }

 if(portc.f1==1 && portd.f0==0 && portd.f3==0 && porta.f2==0)
 {
 portc.f2=1;
 porta.f0=1;
 Delay_us(1012);
 porta.f0=0;
 Delay_us(1012);
 portc.f2=0;
 }

 if(portd.f3==1 && portc.f7==0 && porta.f2==0)
 {
 portd.f2=1;
 porta.f0=1;
 Delay_us(957);
 porta.f0=0;
 Delay_us(957);
 portd.f2=0;
 }

 if(portd.f3==1 && portc.f7==1)
 {
 portd.f2=1;
 portc.f6=1;
 porta.f0=1;
 Delay_us(902);
 porta.f0=0;
 Delay_us(902);
 portd.f2=0;
 portc.f6=0;
 }

 if(portc.f7==1 && portd.f3==0 && portd.f5==0)
 {
 portc.f6=1;
 porta.f0=1;
 Delay_us(853);
 porta.f0=0;
 Delay_us(853);
 portc.f6=0;
 }

 if(portc.f7==1 && portd.f5==1)
 {
 portc.f6=1;
 portd.f4=1;
 porta.f0=1;
 Delay_us(803);
 porta.f0=0;
 Delay_us(803);
 portc.f6=0;
 portd.f4=0;
 }

 if(portd.f5==1 && portc.f7==0 && portd.f7==0)
 {
 portd.f4=1;
 porta.f0=1;
 Delay_us(759);
 porta.f0=0;
 Delay_us(759);
 portd.f4=0;
 }

 if(portd.f7==1 && portb.f1==0)
 {
 portd.f6=1;
 porta.f0=1;
 Delay_us(716);
 porta.f0=0;
 Delay_us(716);
 portd.f6=0;
 }

 if(portd.f7==1 && portb.f1==1)
 {
 portd.f6=1;
 portb.f0=1;
 porta.f0=1;
 Delay_us(675);
 porta.f0=0;
 Delay_us(675);
 portd.f6=0;
 portb.f0=0;
 }

 if(portb.f1==1 && portd.f7==0 && portb.f3==0)
 {
 portb.f0=1;
 porta.f0=1;
 Delay_us(637);
 porta.f0=0;
 Delay_us(637);
 portb.f0=0;
 }

 if(portb.f1==1 && portb.f3==1)
 {
 portb.f0=1;
 portb.f2=1;
 porta.f0=1;
 Delay_us(602);
 porta.f0=0;
 Delay_us(602);
 portb.f0=0;
 portb.f2=0;
 }

 if(portb.f3==1 && portb.f1==0 && portb.f5==0)
 {
 portb.f2=1;
 porta.f0=1;
 Delay_us(568);
 porta.f0=0;
 Delay_us(568);
 portb.f2=0;
 }

 if(portb.f3==1 && portb.f5==1)
 {
 portb.f2=1;
 portb.f4=1;
 porta.f0=1;
 Delay_us(536);
 porta.f0=0;
 Delay_us(536);
 portb.f2=0;
 portb.f4=0;
 }

 if(portb.f5==1 && portb.f3==0 && portb.f7==0 && portd.f0==0)
 {
 portb.f4=1;
 porta.f0=1;
 Delay_us(506);
 porta.f0=0;
 Delay_us(506);
 portb.f4=0;
 }

 if(portb.f7==1 && porta.f2==0 && portd.f0==0)
 {
 portb.f6=1;
 porta.f0=1;
 Delay_us(478);
 porta.f0=0;
 Delay_us(478);
 portb.f6=0;
 }

 if(portb.f7==1 && porta.f2==1)
 {
 portb.f6=1;
 porta.f3=1;
 porta.f0=1;
 Delay_us(451);
 porta.f0=0;
 Delay_us(451);
 portb.f6=0;
 porta.f3=0;
 }

 if(porta.f2==1 && portb.f7==0 && portc.f1==0 && portd.f3==0)
 {
 porta.f3=1;
 porta.f0=1;
 Delay_us(426);
 porta.f0=0;
 Delay_us(426);
 porta.f3=0;
 }



 if(portd.f0==1 && portb.f7==1)
 {
 portd.f1=1;
 portb.f6=1;
 porta.f0=1;
 Delay_us(1275);
 porta.f0=0;
 Delay_us(1275);
 portd.f1=0;
 portb.f6=0;
 }

 if(portd.f0==1 && portb.f5==1)
 {
 portd.f1=1;
 portb.f4=1;
 porta.f0=1;
 Delay_us(1432);
 porta.f0=0;
 Delay_us(1432);
 portd.f1=0;
 portb.f4=0;
 }



 if(porta.f2==1 && portc.f1==1)
 {
 porta.f3=1;
 portc.f2=1;
 porta.f0=1;
 Delay_us(380);
 porta.f0=0;
 Delay_us(380);
 porta.f3=0;
 portc.f2=0;
 }

 if(porta.f2==1 && portd.f3==1)
 {
 porta.f3=1;
 portd.f2=1;
 porta.f0=1;
 Delay_us(358);
 porta.f0=0;
 Delay_us(358);
 porta.f3=0;
 portd.f2=0;
 }
 }
 }
}
