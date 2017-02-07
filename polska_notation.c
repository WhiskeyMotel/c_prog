#include <stdio.h>

 int main()
 {
     int stack[1000];  
     // sp = индекс €чейки, куда будет push-итьс€ очередное число
     int sp =0;      // (sp-1) = индекс €чейки, €вл€ющейс€ вершиной стека
     while ( !feof(stdin) ) {
         int c = getchar();
         int x;
         switch (c) {
             case  ' ':
             case '\n':
                 break;
             case '=':
                 printf("Result = %d\n", stack[sp - 1]);  sp--;
                 break;
             case '+':
                stack[sp-2] = stack[sp-2] + stack[sp-1];  sp--;
                break;
             case '-':
                stack[sp-2] = stack[sp-2] - stack[sp-1];  sp--;
                break;
             case '*':
                stack[sp-2] = stack[sp-1] * stack[sp-2];  sp--;
                break;
             case '/':
               stack[sp-2] = stack[sp-2] / stack[sp-1];   sp--;
                break;
             default:
                 ungetc (c, stdin); // вернуть символ обратно в поток
                 if (scanf("%d", &x) != 1) {
                     fprintf(stderr, "Can't read integer\n");
                     return -1;
                 } else {
                     stack[sp] = x;                       sp++;
                 }
         }
     }
     printf("Result = %d\n",stack[sp-1]);
     return 0;
 }
