#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "calculator.h"
void testcase(void)
{
    assert(cl(1,2,1)== 3);
 printf("pass\n");
  assert(cl(19,-1,1)== 18);
 printf("pass\n");
 assert(cl(-12,-2,1)== -14);
 printf("pass\n");
 assert(cl(2,2,2)== 0);
 printf("pass\n");
 assert(cl(15,2,2)== 13);
 printf("pass\n");
 assert(cl(-20,-40,2)== 20);
 printf("pass\n");
 assert(cl(3,0,4)== 0);
 printf("pass\n ");
}
void main(void){
 printf("Testing Calculator using assert :");

testcase();

}
