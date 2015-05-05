/* 
 * File:   main.c
 * Author: mitko
 *
 * Created on March 7, 2015, 2:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

int hello()
{
    printf("Hello World 123!\n");
    return 0;
}

int Small(int x, int y) {
    if (x < y) {
	return x;
    } else {
        return y;
    }
}

int Big(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }    
}

/*int minimum(int a, int b, int c)
{
    if(a < b) {
        if(a < c) {
            return a;
        } else if(b < a) {
            if(b < c){
                return b;
            }
        } else if(c < b){
            if(c < a) {
                return c;
            }
        }
    }
}

int maximum(int a, int b, int c)
{
    if(a > b) {
        if(a > c) {
            return a;
        } else if(b > a) {
            if(b > c){
                return b;
            }
        } else if(c > b){
            if(c > a) {
                return c;
            }
        }
    }
}*/

int minimum(int a, int b, int c)
{
    int min = a;
    if(b < min) {
        min = b;
    }
    if(c < min) {
        min = c;
    }
    return min;
}

int maximum(int a, int b, int c)
{
    int max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    return max;
}


/*
 * 
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

