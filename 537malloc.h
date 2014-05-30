/*
 * 537malloc.h
 *
 *  Created on: Nov 3, 2013
 *      Author: yihong
 */

#ifndef 537MALLOC_H_
#define 537MALLOC_H_


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
#endif /* 537MALLOC_H_ */
