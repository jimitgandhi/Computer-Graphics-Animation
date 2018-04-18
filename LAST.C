#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int q,z,l,r,a,s,i,f,k,j,m,h,g,t,b,d,c,w,p,u,v;

void background();
void bird();
void birdroad();

void main()
{

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");


background();
bird();
delay(2000);


//aiming 1
//outbox
rectangle(55,130,120,175);
//bird
circle(90,150,5);
circle(89,148,1);
line(90,150,80,150);
q=0;
h=0;
for(f=0;f<125;f++)
{
if(f<40)
{
//lens
circle(70+q,148,12);
line(55+q,148,85+q,148);
line(70+q,133,70+q,163);
circle(70+q,148,2);
delay(15);
cleardevice();
q=q+1;
 }
else if(f>39&&f<60)
{
//lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(20);
cleardevice();
h=h+1;
}
else if(f>59&&f<95)
{
//lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(25);
cleardevice();
q=q-1;
}
else if(f>94&&f<110)
{
  //lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(30);
cleardevice();
h=h-1;

}
else
{
   //lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(50);
cleardevice();
q=q+1;
}



//outbox
rectangle(55,130,120,175);
//bird
circle(90,150,5);
circle(89,148,1);
line(86,157,84,175);
line(93,157,95,175);

bird();
background();
}

   //lens
circle(70+q,148+h,12);
line(55+q,148+h,85+q,148+h);
line(70+q,133+h,70+q,163+h);
circle(70+q,148+h,2);
delay(600);



//bullet firing

//bullet//
h=0;
delay(2000);
for(g=0;g<225;g++)
{
rectangle(120+h,204,123+h,206);
floodfill(121+h,205,WHITE);
line(123+h,204,125+h,205);
delay(10);
cleardevice();
h=h+2;

bird();
background();

}
delay(50);


//bird falling
b=0;
for(t=0;t<130;t++)
{
//bird
	circle(595,230+b,5);
line(590,228+b,570,226+b);
line(590,232+b,570,234+b);
line(570,226+b,570,234+b);

b=b+1;
delay(20);
cleardevice();
background();

//bird after fall//
circle(595,230+b,5);
line(590,228+b,570,226+b);
line(590,232+b,570,234+b);
line(570,226+b,570,234+b);

}

getch();
}

void background()
{
//common place
//home//
line(90,215,100,215);
line(100,215,100,250);
line(100,250,1,250);
line(90,250,90,380);
rectangle(35,300,60,320);
s=300;
r=40;
rectangle(1,320,30,380);


 //post2//
line(600,200,600,400);
line(590,180,590,390);

//plus//
line(570,215,620,265);
line(570,210,620,260);
line(570,210,570,215);
line(620,265,620,260);
for(i=210;i<215;i++)
{
line(570,i,620,i+50);
}

 //man
circle(62,200,6);
line(58,209,58,220);
line(90,215,90,220);
//gun
line(95,206,95,215);
line(85,206,115,206);
line(115,206,115,204);
line(85,204,115,204);
line(95,204,98,206);
line(85,204,85,206);
line(112,204,112,202);
line(112,202,88,202);
line(88,202,88,204);
line(88,202,88,200);
line(81,200,92,200);
line(81,197,92,197);
line(81,200,81,198);
line(92,200,92,198);
//man
circle(62,200,6);
circle(65,200,2);
line(67,209,67,220);
line(58,209,58,220);
line(90,215,90,220);
line(90,220,0,220);
}
void bird()
{
//bird//
 circle(580,200,5);
 circle(579,199,1);
 line(578,205,576,215);
 line(583,205,585,217);
 line(576,215,585,217);
}
void birdroad()
{
  //birdroad
line(575,350,590,357);
line(575,350,590,365);
line(590,365,590,357);
line(560,361,580,361);
circle(595,360,3);
}