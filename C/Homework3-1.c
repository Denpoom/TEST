#include <stdio.h>
int main(){
   float money, diameter, height;
   float pie = 3.14159265359;
   float vol;
   float baht;
   scanf("%f%f%f", &money, &diameter, &height);
   vol = ((diameter/2)*(diameter/2));
   vol = (height*pie)*vol;
   baht = money/vol;
   printf("Volume : %.2fml\n", vol);
   printf("Baht/ml : %.4f\n", baht);
   














                   
    return 0;
} 