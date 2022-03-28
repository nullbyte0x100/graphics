#include<iostream>
#include <glad/glad.h>
#include<GLFW/glfw3.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include <GL/glu.h>
#define xpix 500
#include <cstring>
float r,g,b,x,y;
bool flag=true;
int counter=0;
//function on mouse click
void mouse(int button,int state,int mousex,int mousey){
    if (button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
        flag=true;
        x=mousex;
        y=600-mousey;
    }
    //change circle color
    else if(button==GLUT_RIGHT_BUTTON&&state==GLUT_DOWN){
        if (counter>4){
            counter=0;
        }
        counter++;
        //redisplay
        glutPostRedisplay();
    }
}
//function to exit program
void keyboard(unsigned char key,int x,int y){
    switch(key){
        case 27:
        glutHideWindow();
    }
}
//function to draw circle
void display(void){
  
    //matrix mode
    
}
