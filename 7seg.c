#include "7seg.h"


/*

   AAAAA
  F     B
  F     B
  F     B
   GGGGG
  E     C
  E     C
  E     C
   DDDDD   dp


*/

 unsigned char CG[] = { 
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sE|1<<sF),        /* 0 */ 
  (1<<sB|1<<sC),                                /* 1 */ 
  (1<<sA|1<<sB|1<<sD|1<<sE|1<<sG),              /* 2 */ 
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sG),              /* 3 */ 
  (1<<sB|1<<sC|1<<sF|1<<sG),                    /* 4 */ 
  (1<<sA|1<<sC|1<<sD|1<<sF|1<<sG),              /* 5 */ 
  (1<<sA|1<<sC|1<<sD|1<<sE|1<<sF|1<<sG),        /* 6 */
  (1<<sA|1<<sB|1<<sC),                          /* 7 */
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sE|1<<sF|1<<sG),  /* 8 */  
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sF|1<<sG),        /* 9 */  
  (1<<sA|1<<sB|1<<sC|1<<sE|1<<sF|1<<sG),        /* A */
  (1<<sC|1<<sD|1<<sE|1<<sF|1<<sG),              /* B */
  (1<<sA|1<<sD|1<<sE|1<<sF),                    /* C */
  (1<<sB|1<<sC|1<<sD|1<<sE|1<<sG),              /* D */
  (1<<sA|1<<sD|1<<sE|1<<sF|1<<sG),              /* E */
  (1<<sA|1<<sE|1<<sF|1<<sG),                    /* F */
  0                                             /* Blank */
};

                                                     
                                                              
                                                              
 unsigned char CG2[] = {                                      
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sE|1<<sF),        /* 0 */                
  (1<<sB|1<<sC),                                /* 1 */                
  (1<<sA|1<<sB|1<<sD|1<<sE|1<<sG),              /* 2 */                
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sG),              /* 3 */                
  (1<<sB|1<<sC|1<<sF|1<<sG),                    /* 4 */                
  (1<<sA|1<<sC|1<<sD|1<<sF|1<<sG),              /* 5 */                
  (1<<sA|1<<sC|1<<sD|1<<sE|1<<sF|1<<sG),        /* 6 */
  (1<<sA|1<<sB|1<<sC),                          /* 7 */
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sE|1<<sF|1<<sG),  /* 8 */  
  (1<<sA|1<<sB|1<<sC|1<<sD|1<<sF|1<<sG),        /* 9 */  
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  (1<<sA|1<<sB|1<<sC|1<<sE|1<<sF|1<<sG),        /* A */
  (1<<sC|1<<sD|1<<sE|1<<sF|1<<sG),              /* B */
  (1<<sA|1<<sD|1<<sE|1<<sF),                    /* C */
  (1<<sB|1<<sC|1<<sD|1<<sE|1<<sG),              /* D */
  (1<<sA|1<<sD|1<<sE|1<<sF|1<<sG),              /* E */
  (1<<sA|1<<sE|1<<sF|1<<sG),                    /* F */
  (1<<sA|1<<sC|1<<sD|1<<sE|1<<sF),              /* G */
  (1<<sB|1<<sC|1<<sE|1<<sF|1<<sG),              /* H */
  (1<<sE|1<<sF),                                /* I */
  (1<<sB|1<<sC|1<<sD|1<<sE),                    /* J */         
  0,                                            /* K */         
  (1<<sD|1<<sE|1<<sF),                          /* L */         
  0,                                            /* M */         
  (1<<sC|1<<sE|1<<sG),                          /* N */         
  (1<<sC|1<<sD|1<<sE|1<<sG),                    /* O */         
  (1<<sA|1<<sB|1<<sE|1<<sF|1<<sG),              /* P */         
  (1<<sA|1<<sB|1<<sC|1<<sF|1<<sG),              /* Q */         
  (1<<sE|1<<sG),                                /* R */         
  (1<<sA|1<<sC|1<<sD|1<<sF|1<<sG),              /* S */         
  (1<<sD|1<<sE|1<<sF|1<<sG),                    /* T */         
  (1<<sC|1<<sD|1<<sE),                          /* U */         
  0, 
  0, 
  0, 
  (1<<sB|1<<sC|1<<sD|1<<sF|1<<sG),
  0
};


