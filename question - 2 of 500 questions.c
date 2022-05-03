#include <stdio.h>
int main()
{
int width,height,area,perimeter;
    height = 7;
    width  = 5;
	perimeter = 2*(height+width);
	area = height*width;
	printf("height= %d inch\n",height);
	printf("width= %d inch\n",width);
	printf("Area of the rectangle = %d square inches\n",area);
	printf("Perimeter of the rectangle = %d inches\n",perimeter);

return 0;
}
