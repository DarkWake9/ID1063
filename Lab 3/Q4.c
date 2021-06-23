/*Write a program to accept three pairs (x1, y1),(x2, y2),(x3, y3) of real
numbers from the user, each describing a point on the plane and do
the following.
(i) Check if they are collinear.
(ii) Optional: If they are not collinear, find the area of the triangle
described the points, and find the three angles in the triangle (use
appropriate functions from math.h for arcsin/arccos).
*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (void)
{
    int r = 1;



        float x[3], y[3];               //x[i] and y[i]: Arrays to store the x and y coordinates of the points.
        float dx[3], dy[3];             //dx[i] and dy[i] : difference between the respectivecoordinates.
        float m[3], s[3];               //m[i]: slope of the line; s[i]: distance between two points.
        float t[3], tn[3];              //t[i]: Stores angle between lines; tn[i] stores tangent o angle between the lines
    do
    {
        float a = 0, b = 0, p = 0;
        //Loop for input
        for (int i = 0; i < 3; i++)
        {
            printf("\nEnter the x - coordinate ofpoint %d:", i + 1);
            scanf("%f", &x[i]);
            printf("\nEnter the y - coordinate ofpoint %d:", i + 1);
            scanf("%f", &y[i]);
            if(i<2)
            printf("\nPlease enter the coordinate of a different point\n");
        }
        for (int i = 0; i < 2; i++)
        {
            dx[i] = x[i+1] - x[i];
            dy[i] = y[i+1] - y[i];

            m[i] = (float)dy[i]/dx[i];
        }

            dx[2] = x[2] - x[0];
            dy[2] = y[2] - y[0];
            m[2] = (float)dy[2]/dx[2];

        //Check for collinearity
        if(m[0] == m[1])
        {
            printf("\nThe given points are collinear\n");
        }
        //Area and Angles of triangle
        else
        {
            for (int i = 0; i < 3; i++)
            {
                s[i] = sqrt((pow(dy[i],2) + pow(dx[i],2)));
                p = p + s[i];
            }
            b = p / 2;
            a = p / 2;

            //Herons formula
            for (int i = 0; i < 3; i++)
            {
                a = a * (b - s[i]);
            }
            a = sqrt(a);
            printf("\nPoints are non collinear\nArea of triangle formed by them is: %f\n",a);

            //Finding angles
            for (int i = 0; i < 2; i++)
            {
                tn[i] = abs(m[i] - m[i+1])/(1 + (m[i+1])*m[i]);
                t[i] = 57.29577951 * atan(tn[i]);
            }

            tn[2] = abs(m[2] - m[0])/(1 + (m[2])*m[0]);
            t[2] = 57.29577951 * atan(tn[2]);

            for (int i = 0; i < 3; i++)
            {
                printf("\nAngle %d is: %f Degrees", i+1, t[i]);
            }
        }

        //Prompt for recursion
            printf("\nDo you want to try again?\nEnter 1 for yes\nEnter anything else to exit\n");
            scanf("%d", &r);

    }while(r == 1);

    printf("\n!!Thank You!!\n\n");
}