#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

main ()
{
	int gd = DETECT, gm, x, y, color, angle = 0;
	char mensaje [40];
	int v1;
	float teta,x1,t,y1=1.0;
	
	
	
	printf ("PROPORCIONE EL ANGULO DE DISPARO EN GRADOS:  ");
	scanf ("%f",&teta);
	printf ("%4.2f ", teta);
	teta= (float) teta/ (float)57.29;
	printf ("PROPORCIONE LA VELOCIDAD INICIAL:  " );
	scanf("%i", &v1);
	t= 0.01; 
	y1=1.0;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
while ( y1>0 )  
	{ 
	x1=t*v1*cos(teta);
	y1=(t*v1*sin(teta))-(0.5*9.81*(t*t));
	printf ("%4.2f  ",t );
	printf ("%4.2f  ",x1 );
	printf ("%4.2f   \n " ,y1);
 putpixel(x1,getmaxy()-y1,RED);
	t=t-0.01;
	delay(1);
	}
	
	t=t-0.01;
	sprintf (mensaje,"TIEMPO EN CAER  %4.2f", t );
	outtextxy(300, 50, mensaje);
	sprintf(mensaje," DISTANCIA EN X %4.2f", x1);
	outtextxy(300, 60, mensaje);
	
	getch();
	closegraph();

}
