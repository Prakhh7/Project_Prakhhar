void circle()
{
clrscr(); //clrscr is used to clear the screen.

//declaring radius as integer.
int radius=30;
// gmode is Graphics mode which is a computer display 
// mode that generates image using pixels. 
// DETECT is a macro defined in "graphics.h" header file 

int gdriver=DETECT,gmode;

 // initgraph initializes the graphics system 
 // by loading a graphics driver from disk 

initgraph(&gdriver,&gmode,"C:\TC\BGI");

//circle function
circle(getmaxx()/2,getmaxy*()/2,radius);

//getch is used for taking input only a character.
getch();

    // closegraph function closes the graphics 
    // mode and deallocates all memory allocated 
    // by graphics system . 
    closegraph();
}
void rectangle()
{
    // gm is Graphics mode which is a computer display 
    // mode that generates image using pixels. 
    // DETECT is a macro defined in "graphics.h" header file 
    
    int gd = DETECT, gm; 
  
    // location of left, top, right, bottom 
    
    int left = 150, top = 150; 
    int right = 450, bottom = 450; 
  
    // initgraph initializes the graphics system 
    // by loading a graphics driver from disk 
    
    initgraph(&gd, &gm, ""); 
  
    // rectangle function 
   
     rectangle(left, top, right, bottom); 
  
    getch(); 
  
    // closegraph function closes the graphics 
    // mode and deallocates all memory allocated 
    // by graphics system . 
    
    closegraph(); 
  }
