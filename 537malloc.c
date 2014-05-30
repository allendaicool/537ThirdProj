/*
 * 537malloc.c
 *
 *  Created on: Oct 27, 2013
 *      Author: yihong
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>


const int  red = 0 ;
const int  black = 1 ;
typedef  struct redBlackNode{
    void * addProinter ;
    size_t size ;
    int colour ;
    redBlackNode * leftSon ;
    redBlackNode * rightSon ;
    redBlackNode * father ;

}redBlackNode;

typedef struct redBlacKTree{
	TreeNode * root ;
}Tree ;


}
