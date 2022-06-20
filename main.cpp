#include<windows.h>
#include<mmsystem.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i, j, k, x = 0, y = 0, speed = 0, alt = 0, n1 = 1000, n2 = 1100, s1 = 0, s2 = 1, s3 = 1;
GLfloat sun_spin = 0, sun_x = 0, sun_y = 0, reduce = 10;
GLfloat ax = 0, bx = 0, cx = 0, dx = 0, str = 500.0, mn = 500.0;
GLfloat sr = 0.0, sg = 0.749, sb = 1.0;
GLfloat spin = 0.0;

bool condition = false;
GLfloat position = 0.0f;
GLfloat _move = 5.0f;
GLfloat position1 = 0.0f;
GLfloat _move1 = 3.0f;
GLfloat position2 = 900.0f;
GLfloat _move2 = 3.0f;




void init(void)
{
    glClearColor(0.53, 0.81, 0.98, 1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000.0, 0.0, 700.0);
}

float r(int a) {
    return x = 4, y = 8;
}

float r(int a, int b) {
    return x = 0, y = 0;
}

void updatey(int value) {
    y = 8.0f;
    glutPostRedisplay();
    glutTimerFunc(100, updatey, 0);
}

void updatex(int value) {
    x = 4.0f;
    glutPostRedisplay();
    glutTimerFunc(100, updatex, 0);
}

void Sun_Moon()
{
    glColor3f(0.50196, 0.25098, 0.0);

    glPushMatrix();
    glTranslatef(0, -220, 0);
    glScaled(0.8, 0.76, 0);
    glBegin(GL_POLYGON);

    glPopMatrix();


    glEnd();

}


/// MODEL

void circle(GLdouble rad)
{
    glBegin(GL_POLYGON);
    {
        for (int i = 0;i < 50;i++)
        {

            float pi = 3.1416;
            float A = (i * 2 * pi) / 50;
            float r = rad;
            float x = r * cos(A);

            float y = r * sin(A);
            glVertex2f(x, y);
        }
    }
    glEnd();
}

void circle1(GLdouble rad)
{

    glBegin(GL_POLYGON);
    {
        for (int i = 0;i < 200;i++)
        {

            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = rad;
            float x = r * cos(A);

            float y = r + 10 * sin(A);
            glVertex2f(x, y);
        }
    }
    glEnd();
}

/// SUN MODEL
void Sun_Model() {

    glPushMatrix();
    glTranslatef(600, 1100, 0);
    circle(33);
    glPopMatrix();

}

/// CLOUD MODEL
void cloud_model_one() {

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305, 204, 0);
    circle(10);
    glPopMatrix();

    ///****Fill End****

}
void cloud_model_Two() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305, 205, 0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334, 207, 0);
    circle(10);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320, 207, 0);
    circle(10);
    glPopMatrix();



}
void cloud_model_Three() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(300, 200, 0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340, 220, 0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380, 200, 0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360, 190, 0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320, 190, 0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340, 190, 0);
    circle(20);
    glPopMatrix();




    ///****Fill End****

}

/// HOUSE
void house1() {

    glPushMatrix();
    glTranslatef(680, 250, 0);
    glScalef(0.18, 0.35, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2f(150.0f, 30.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(450.0f, 200.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128.0f, 0.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(250.0f, 120.0f);
    glVertex2f(320.0f, 120.0f);
    glVertex2f(320.0f, 30.0f);
    glEnd();


    glPopMatrix();


}
void house2() {

    glPushMatrix();
    glTranslatef(860, 250, 0);
    glScalef(0.18, 0.35, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2f(150.0f, 30.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(450.0f, 200.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128.0f, 0.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(250.0f, 120.0f);
    glVertex2f(320.0f, 120.0f);
    glVertex2f(320.0f, 30.0f);
    glEnd();


    glPopMatrix();


}
void house3() {

    glPushMatrix();
    glTranslatef(350, 250, 0);
    glScalef(0.18, 0.35, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2f(150.0f, 30.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(450.0f, 200.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128.0f, 0.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(250.0f, 120.0f);
    glVertex2f(320.0f, 120.0f);
    glVertex2f(320.0f, 30.0f);
    glEnd();


    glPopMatrix();


}
void house4() {

    glPushMatrix();
    glTranslatef(200, 250, 0);
    glScalef(0.18, 0.35, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2f(150.0f, 30.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(450.0f, 200.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128.0f, 0.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(250.0f, 120.0f);
    glVertex2f(320.0f, 120.0f);
    glVertex2f(320.0f, 30.0f);
    glEnd();


    glPopMatrix();


}
void house5() {

    glPushMatrix();
    glTranslatef(510, 250, 0);
    glScalef(0.18, 0.35, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2f(150.0f, 30.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(450.0f, 200.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128.0f, 0.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(250.0f, 120.0f);
    glVertex2f(320.0f, 120.0f);
    glVertex2f(320.0f, 30.0f);
    glEnd();


    glPopMatrix();


}
void house6() {

    glPushMatrix();
    glTranslatef(70, 250, 0);
    glScalef(0.18, 0.35, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2f(150.0f, 30.0f);
    glVertex2f(150.0f, 200.0f);
    glVertex2f(450.0f, 200.0f);
    glVertex2f(450.0f, 30.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128.0f, 0.0f, 0.0f);
    glVertex2f(250.0f, 30.0f);
    glVertex2f(250.0f, 120.0f);
    glVertex2f(320.0f, 120.0f);
    glVertex2f(320.0f, 30.0f);
    glEnd();


    glPopMatrix();


}

/// FIELD MODEL
void field() {
    ///Field


    glBegin(GL_POLYGON);
    glColor3ub(50,205,50);
    glVertex2i(0, 250);
    glVertex2i(0, 270);
    glVertex2i(1000, 270);
    glVertex2i(1000, 250);

    glEnd();


    ///Field_Shadow
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 51);
    glVertex2i(0, 230);
    glVertex2i(0, 250);
    glVertex2i(1000, 250);
    glVertex2i(1000, 200);

    glEnd();



    ///river0.7/0.4/0.4


    glBegin(GL_POLYGON);
    glColor3ub(0, 143, 179);
    glVertex2i(0, 0);
    glVertex2i(0, 230);
    glVertex2i(600, 225);
    glVertex2i(600, 0);

    glEnd();

    ///river curve
    glBegin(GL_POLYGON);
    glColor3ub(0, 143, 179);
    glVertex2i(600, 0);
    glVertex2i(600, 225);
    glVertex2i(1000, 245);
    glVertex2i(1000, 0);

    glEnd();


    ///Field_2
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 51);
    glVertex2i(0, 00);
    glVertex2i(0, 80);
    glVertex2i(600, 50);
    glVertex2i(640, 0);

    glEnd();




    ///Field_Shadow2
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 51);
    glVertex2i(0, 00);
    glVertex2i(0, 50);
    glVertex2i(600, 50);
    glVertex2i(600, 0);

    glEnd();

    ///Field_Shadow3
    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 51);
    glVertex2i(600, 0);
    glVertex2i(600, 50);
    glVertex2i(1000, 30);
    glVertex2i(1000, 0);

    glEnd();

}

/// BOAT
void Boat() {
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    glTranslatef(-70, 40.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(200, 50);
    glVertex2i(100, 100);
    glVertex2i(400, 100);
    glVertex2i(300, 50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(165.0, 42.0, 42.0);
    glVertex2i(180, 100);
    glVertex2i(180, 150);
    glVertex2i(320, 150);
    glVertex2i(320, 100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(360, 140);
    glVertex2i(350, 80);
    glVertex2i(360, 50);
    glEnd();

    glPopMatrix();

}
void update(int value) {


    if (position < -300.0)
        position = 1500.0f;

    position -= _move;

    glutPostRedisplay();


    glutTimerFunc(50, update, 0);
}

/// TREE MODEL
void Tree_Model_One() {


    glPushMatrix();
    glTranslatef(110, 110, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110, 100, 0);
    circle(15);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(27.0, 38, 49);
    glVertex2f(109, 70);
    glVertex2f(109, 90);
    glVertex2f(111, 90);
    glVertex2f(111, 70);

    glEnd();

}

/// WINDMILL MODEL
void Windmill_Stand_Model() {

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2i(375, 100);
    glVertex2i(380, 240);
    glVertex2i(384, 240);
    glVertex2i(390, 100);
    glEnd();
}
void Windmill_Blade() {

    ///Blade_One
    glPushMatrix();
    glRotatef(spin, 0, 0, 90);
    glBegin(GL_POLYGON);
    glVertex2i(-5, 0);
    glVertex2i(-85, -36);
    glVertex2i(-83, -37);
    glVertex2i(-3, -8);
    glEnd();
    glPopMatrix();

    ///Blade_Two
    glPushMatrix();
    glRotatef(spin, 0, 0, 90);
    glBegin(GL_POLYGON);
    glVertex2i(0, 5);
    glVertex2i(45, 70);
    glVertex2i(50, 73);
    glVertex2i(5, 0);
    glEnd();
    glPopMatrix();

    ///Blade_Three
    glPushMatrix();
    glRotatef(spin, 0, 0, 90);
    glBegin(GL_POLYGON);
    glVertex2i(68, -78);
    glVertex2i(0, 0);
    glVertex2i(5, 5);
    glVertex2i(70, -77);
    glEnd();
    glPopMatrix();

}
void Windmill() {



    ///Windmill_Stand
    glColor3f(0.38, 0.41, 0.36);
    glPushMatrix();
    Windmill_Stand_Model();
    glPopMatrix();

    ///Windmill_Motor
    glColor3ub(208, 211, 212);
    glPushMatrix();
    glTranslatef(380, 250, 0);
    circle(10);
    glPopMatrix();

    ///Windmill_Rotary_Blades
    glColor3ub(208, 211, 212);
    glPushMatrix();
    glTranslatef(380, 251, 0);
    Windmill_Blade();
    glPopMatrix();




}

/// PLANE MODEL
void plane() {
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(20.0f, 20.0f);
    glVertex2f(25.0f, 20.0f);
    glVertex2f(25.0f, 21.0f);
    glVertex2f(22.0f, 21.0f);
    glEnd();

    glBegin(GL_POLYGON);//1t
    glColor3f(255.0f, 0.0f, 0.0f);
    glVertex2f(25.0f, 22.0f);
    glVertex2f(24.0f, 21.0f);
    glVertex2f(25.0f, 21.0f);
    glEnd();



    glBegin(GL_POLYGON);// window1
    glColor3f(255.0f, 0.0f, 0.0f);
    glVertex2f(23.7f, 20.2f);
    glVertex2f(24.2f, 20.2f);
    glVertex2f(24.2f, 20.7f);
    glVertex2f(23.7f, 20.7f);
    glEnd();

    glBegin(GL_POLYGON);// door
    glColor3f(255.0f, 0.0f, 0.0f);
    glVertex2f(21.8f, 20.0f);
    glVertex2f(22.2f, 20.0f);
    glVertex2f(22.2f, 20.6f);
    glVertex2f(21.8f, 20.6f);
    glEnd();

    glBegin(GL_POLYGON);// window2
    glColor3f(255.0f, 0.0f, 0.0f);
    glVertex2f(22.8f, 20.2f);
    glVertex2f(23.3f, 20.2f);
    glVertex2f(23.3f, 20.7f);
    glVertex2f(22.8f, 20.7f);
    glEnd();

    glPopMatrix();

}
void update1(int value) {

    if (position1 < -400.0)
        position1 = 1200.0f;
    position1 -= _move1;
    glutPostRedisplay();
    glutTimerFunc(22, update1, 0);
}

/// PLANE
void plane1() {
    glColor3ub(241, 196, 15);
    glPushMatrix();

    glTranslatef(position1, 0, 0);
    glTranslatef(0, 360, 0);
    glScaled(10.0f, 10.0f, 0.0f);
    plane();
    glPopMatrix();
}
void plane2() {
    glColor3ub(0, 0, 0);
    glPushMatrix();
    glTranslatef(position1, 0, 0);
    glTranslatef(100, 320, 0);
    glScaled(10.0f, 10.0f, 0.0f);
    plane();
    glPopMatrix();
}

/// SUN
void Sun() {
    glColor3f(s3, s2, s1);
    glPushMatrix();
    Sun_Model();
    glPopMatrix();
}

/// CLOUD & NIGHT
void cloud_one() {
    glPushMatrix();
    glTranslatef(cx, 225, 0);//-40
    cloud_model_one();
    glPopMatrix();

}
void star() {
    if (condition == true)

    {
        glBegin(GL_POINTS);
        glColor3ub(247, 249, 249);
        glVertex2f(500.1f, 500.3f);
        glVertex2f(550.1f, 504.0f);
        glVertex2f(150.1f, 504.0f);
        glVertex2f(310.1f, 504.0f);
        glVertex2f(261.0f, 505.0f);
        glVertex2f(453.1f, 506.0f);
        glVertex2f(616.1f, 507.0f);
        glVertex2f(763.1f, 508.0f);
        glVertex2f(587.1f, 524.0f);
        glVertex2f(954.1f, 574.0f);
        glVertex2f(231.1f, 585.0f);
        glVertex2f(275.1f, 566.0f);
        glVertex2f(852.1f, 557.0f);
        glVertex2f(476.1f, 548.0f);
        glVertex2f(140.1f, 509.0f);
        glVertex2f(350.1f, 510.0f);
        glVertex2f(061.1f, 511.0f);
        glVertex2f(463.1f, 512.0f);
        glVertex2f(822.1f, 513.0f);
        glVertex2f(110.1f, 514.0f);
        glVertex2f(966.1f, 515.0f);
        glVertex2f(211.1f, 516.0f);
        glVertex2f(313.1f, 517.0f);
        glVertex2f(869.1f, 518.0f);
        glVertex2f(639.1f, 519.0f);
        glVertex2f(106.1f, 520.0f);
        glVertex2f(140.1f, 709.0f);
        glVertex2f(350.1f, 810.0f);
        glVertex2f(061.1f, 911.0f);
        glVertex2f(463.1f, 412.0f);
        glVertex2f(822.1f, 713.0f);
        glVertex2f(110.1f, 614.0f);
        glVertex2f(966.1f, 815.0f);
        glVertex2f(211.1f, 916.0f);
        glVertex2f(313.1f, 1017.0f);
        glVertex2f(869.1f, 718.0f);
        glVertex2f(639.1f, 919.0f);
        glVertex2f(106.1f, 902.0f);
        glVertex2f(106.1f, 908.0f);
        glVertex2f(106.1f, 620.0f);
        glVertex2f(250.1f, 630.0f);
        glVertex2f(106.1f, 906.0f);
        glVertex2f(116.1f, 530.0f);
        glVertex2f(980.1f, 980.0f);
        glVertex2f(900.1f, 930.0f);
        glVertex2f(858.1f, 666.0f);
        glVertex2f(845.1f, 642.0f);
        glVertex2f(900.1f, 900.0f);
        glVertex2f(910.1f, 903.0f);
        glVertex2f(915.1f, 908.0f);
        glVertex2f(919.1f, 920.0f);
        glVertex2f(930.1f, 903.0f);
        glVertex2f(935.1f, 905.0f);
        glVertex2f(940.1f, 905.0f);
        glVertex2f(945.1f, 910.0f);
        glVertex2f(600.1f, 525.0f);
        glVertex2f(650.1f, 535.0f);
        glVertex2f(690.1f, 490.0f);
        glVertex2f(550.1f, 600.0f);
        glVertex2f(500.1f, 600.0f);
        glEnd();

    }

}
bool con() {
    return condition = true;
}
float updatex() {
    return   n1 = -700, s1 = 241, s2 = 240, s3 = 236;
}
float updatex1() {
    return   n1 = 1000, s1 = 0, s2 = 1, s3 = 1;
}
void night() {
    glColor3f(.0, 0.0, 0.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex3i(0, n1, 0);
    glVertex3i(0, 1000, 0);
    glVertex3i(1200, 1000, 0);
    glVertex3i(1200, n1, 0);
    glPopMatrix();
    glEnd();

}
void cloud_two() {
    glPushMatrix();
    glTranslatef(bx + 100, 290, 0);
    cloud_model_one();
    glPopMatrix();

}
void cloud_three() {
    glPushMatrix();
    glTranslatef(ax - 80, 230, 0);
    cloud_model_Two();
    glPopMatrix();

}
void cloud_four() {
    glPushMatrix();
    glTranslatef(dx + 300, 275, 0);
    cloud_model_Two();
    glPopMatrix();

}
void cloud_five() {

    glPushMatrix();
    glTranslatef(ax + -300, 310, 0);
    cloud_model_Three();
    glPopMatrix();
}
void cloud_six() {

    glPushMatrix();
    glTranslatef(cx + -500, 390, 0);
    cloud_model_Three();
    glPopMatrix();
}

/// TREE

void tree() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(-120, -110, 0);//-90
    Windmill();
    glPopMatrix();
}
void Tree_One() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(700, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Two() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(200, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Three() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(100, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Four() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(550, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Five() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(400, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Six() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(850, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Seven() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(750, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Eight() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(340, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Nine() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(200, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Ten() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(-20, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}
void Tree_Eleven() {
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(-80, 200, 0);
    Tree_Model_One();
    glPopMatrix();
}

/// Windmill
void Windmill_One() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(50, 160, 0);//-10
    Windmill();
    glPopMatrix();

}
void Windmill_Two() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(508, 130, 0);//-70
    Windmill();
    glPopMatrix();

}
void Windmill_Three() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(370, 155, 0);
    Windmill();
    glPopMatrix();

}
void Windmill_Four() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(210, 150, 0);
    Windmill();
    glPopMatrix();

}
void Windmill_Five() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(-95, 140, 0);
    Windmill();
    glPopMatrix();
}
void Windmill_Six() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(-240, 160, 0);
    Windmill();
    glPopMatrix();

}

/// Display Function
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);

    night();
    star();
    Sun_Moon();

    Sun();
    plane1();
    plane2();

    tree();

    cloud_three();
    cloud_four();

    Windmill_One();
    Windmill_Two();
    Windmill_Three();
    Windmill_Four();
    Windmill_Five();
    Windmill_Six();

    cloud_one();

    house1();
    house2();
    house3();
    house4();
    house5();
    house6();

    Tree_One();
    Tree_Two();
    Tree_Three();
    Tree_Four();
    Tree_Five();
    Tree_Six();
    Tree_Seven();
    Tree_Eight();
    Tree_Nine();
    Tree_Ten();
    Tree_Eleven();

    cloud_two();
    cloud_five();
    cloud_six();
    field();
    Boat();

    glFlush();
}

///*** Sun_Move ***///

void move_right() {

    // sun_move();

    spin = spin + .1;
    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if (cx > 1000) {
        cx = -300;
    }
    if (bx > 1000) {
        bx = -400;

    }
    if (cx > 1000) {
        cx = -400;

    }
    if (dx > 1000) {
        dx = -500;

    }

    glutPostRedisplay();
}
void mouse(int key, int state, int x, int y) {
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }

}
void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {

    case 'n':

        updatex();
        condition = true;
        break;

    case 'd':
        updatex1();
        condition = false;
        break;

        glutPostRedisplay();
    }


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(1800, 900);
    glutCreateWindow("Wind_Turbine_Power_Project_Sirajganj");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(20, update, 0);
    glutTimerFunc(20, update1, 0);

    glutMouseFunc(mouse);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
}
