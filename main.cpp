//c++ transcript of the scratch program.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int iteration = 0;
    int x = -210;
    int y = 150;
    int xoffset = x;
    int yoffset = y;
    //int tileset_decor = 0;
    
    while (iteration < 48){
       switch(iteration){
           case 0: yoffset = 60;
            break;
           case 8: yoffset = 120;
            break;
           case 16: yoffset = 180;
            break;
           case 24: yoffset = 240;
            break;
           case 32: yoffset = 300;
            break;   
       }
       x = xoffset + 60;
       y = 150 - yoffset;
       xoffset = x;
       iteration++;
       
       cout << "iteration number " << iteration << endl;
       cout << "x value : " << x << endl;
       cout << "y value : " << y << endl;
       cout << "x offset: " << xoffset << endl;
       cout << "y offset: " << yoffset << endl;
       cout << endl;
    }
   return 0;
}
