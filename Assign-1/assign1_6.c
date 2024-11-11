/*WAP to accept a coordinate point in an XY coordinate system and determine in which
quadrant the coordinate point lies.
Test Data: 7 9
Expected Output: The coordinate point (7,9) lies in the First quadrant.*/

#include <stdio.h>

void findquadrent(int x,int y)
 {
    if (x>0 && y>0) {
        printf("The coordinate point (%d,%d) is in the First quadrant.\n",x,y);
    } else if (x<0 && y>0) {
        printf("The coordinate point (%d,%d) is in the Second quadrant.\n",x,y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d,%d) is in the Third quadrant.\n",x,y);
    } else if (x>0 && y<0) {
        printf("The coordinate point (%d,%d) is in the Fourth quadrant.\n",x,y);
    } else if (x==0 && y!=0) {
        printf("The coordinate point (%d,%d) is on the Y-axis.\n",x,y);
    } else if (x!=0 && y==0) {
        printf("The coordinate point (%d,%d) is on the X-axis.\n",x,y);
    } else {
        printf("The coordinate point (%d,%d) is at the origin.\n",x,y);
    }
}

int main() {
    int x, y;
    printf("Enter the x axis : ");
    scanf("%d",&x);
    printf("Enter the y axis : ");
    scanf("%d",&y);
    findquadrent(x,y);

    return 0;
}
