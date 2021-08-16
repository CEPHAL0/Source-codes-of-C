#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	setcolor(RED);
	setbkcolor(GREEN);
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(200,200, GREEN);
	circle(200,200,50);
	rectangle(100,100,200,200);
	ellipse(300,300,0,360,50,100);
	getch();
	closegraph();
}
