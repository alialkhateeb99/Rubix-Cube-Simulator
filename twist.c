#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[] ){
    int i;
    char list1[]={'O','O'} ; char list2[]= {'O','O'} ; char list3[]={'G','G','W','W','B','B','Y','Y'};
     char list4[]={'G','G','W','W','B','B','Y','Y'};  char list5[]={'R','R'}; char list6[]={'R','R'};
    char temp1; char temp2; char temp3; char temp4;char temp5;char temp6 ; char temp7; char temp8;
    char temp9; char temp10; char temp11; char temp12;


    for(i=1;i<argc;i++){
        /*printf("Argument %d: %s\n",i , argv[i]); */

        int sizeOfArgument = strlen(argv[i]);
        int x;
        int y;
        for(y=0;y<sizeOfArgument;y++){
            if(argv[i][y]=='2')
                argv[i][y] = argv[i][y-1];
        }
        for(x=0;x<sizeOfArgument;x++){
            if(argv[i][x]=='+')
                continue;

            switch(argv[i][x]){
                case 'U':  /*AFFECTED TOP LAYER // ROTATES CORRECTLY  (F) */
                    temp1 = list4[1]; temp2 = list3[1];  temp3=list2[0];   temp4=list2[1];
                    temp5 = list3[4]; temp6 = list4[4];  temp7=list5[1];   temp8=list5[0];

                    temp9 = list3[2]; temp10 = list3[3]; temp11= list4[3]; temp12 = list4[2];


                     if(argv[i][x+1]=='+'){
                    list5[0] = temp2; list5[1] = temp1; list4[1] = temp3; list3[1] =temp4;
                    list2[0] = temp5; list2[1] = temp6; list3[4] = temp7; list4[4] = temp8;

                    list4[2] = temp9; list4[3] = temp12; list3[3] = temp11; list3[2] = temp10;
                    }
                    else{
                    list2[0] = temp1; list2[1] = temp2; list3[4] = temp3; list4[4]= temp4;
                    list5[1] = temp5; list5[0] =temp6; list4[1]= temp7; list3[1] = temp8;
                    list3[3] = temp9; list4[3] = temp10; list4[2] = temp11; list3[2] = temp12;
                    }

                    break;
                case 'D': /* AFFECTED LOWER LAYER (ROTATES CORRECTLY) (B)*/
                temp1 = list4[0]; temp2 = list3[0]; temp3 = list1[0]; temp4=list1[1];
                temp5 = list3[5]; temp6 = list4[5]; temp7= list6[1]; temp8 = list6[0];

                temp9 = list3[6]; temp10 = list3[7]; temp11= list4[7]; temp12 =list4[6];

                        if(argv[i][x+1]=='+'){
                         list4[0] = temp7; list3[0] = temp8; list1[0] = temp1; list1[1]=temp2;
                list3[5] = temp3; list4[5] = temp4; list6[1] = temp5; list6[0] = temp6;

                list3[6] = temp10; list3[7] = temp11; list4[7] = temp12; list4[6] = temp9;


                        }
                        else{

                        list4[0] = temp3; list3[0] = temp4; list1[0] = temp5; list1[1] = temp6;
                        list3[5] = temp7; list4[5] = temp8; list6[1] = temp1; list6[0] = temp2;

                        list3[6] = temp12; list3[7] = temp9; list4[7] = temp10; list4[6] = temp11;
                        }
                    break;
                case 'R':    /* (U) */
                temp1 = list3[0]; temp2 = list3[1]; temp3 = list3[2]; temp4= list3[3];
                temp5= list3[4]; temp6= list3[5]; temp7 = list3[6]; temp8 = list3[7];
                temp9 = list1[0]; temp10 = list1[1]; temp11= list2[1]; temp12 = list2[0];

                    if(argv[i][x+1]=='+'){
                    list3[7] = temp6; list3[6] = temp5; list3[5] =temp4; list3[4] = temp3;
                    list3[3] = temp2; list3[2] = temp1; list3[1] = temp8; list3[0] = temp7;
                    list2[0] = temp9; list2[1] = temp12; list1[1] = temp11; list1[0] = temp10;

                    }
                    else{
                list3[0] = temp3; list3[1] = temp4; list3[2] = temp5; list3[3] = temp6;
                list3[4] = temp7; list3[5] = temp8; list3[6] = temp1; list3[7] = temp2;
                list1[0] = temp12; list1[1] = temp9; list2[1] = temp10; list2[0] = temp11;


                    }

                    break;
                case 'L':  /*THE EQUIVALENT OF L+ OF ITANIS (ROTATES CORRECTLY) (D) */
                    temp1 = list4[7]; temp2 = list4[6]; temp3 = list4[5]; temp4= list4[4];
                    temp5 = list4[3]; temp6 = list4[2]; temp7 =list4[1]; temp8=list4[0];

                    temp9 = list5[0]; temp10 = list5[1]; temp11= list6[1]; temp12 = list6[0];

                       if(argv[i][x+1]=='+'){
                list4[0] = temp6; list4[1] = temp5; list4[2] = temp4; list4[3]= temp3;
                list4[4]= temp2; list4[5] = temp1; list4[6] =  temp8; list4[7] = temp7;
                list5[0] = temp10; list5[1] = temp11; list6[1] = temp12; list6[0] = temp9;
                        }
                        else{
                list4[0] = temp2; list4[1] = temp1; list4[2] = temp8; list4[3] = temp7;
                list4[4] = temp6; list4[5] = temp5; list4[6] = temp4; list4[7] = temp3;
                list5[0] = temp12; list5[1] = temp9; list6[1] = temp10; list6[0] = temp11;

                        }
                    break;
                case 'B': /* WRONG SIDE MAYBE AFFECTING LEFT SIDE // ROTATES CORRECTLY (L) */
                    temp1 = list1[0]; temp2 = list2[0]; temp3 = list3[2]; temp4 = list4[2];
                    temp5 = list5[0]; temp6 = list6[0]; temp7 = list3[7]; temp8 = list4[7];
                    temp9 = list3[0]; temp10 = list3[1]; temp11 = list4[1]; temp12 = list4[0];


                        if(argv[i][x+1]=='+'){
                        list4[2] = temp6; list3[2] = temp5; list2[0] = temp4; list1[0] =temp3;
                        list3[7] = temp2; list4[7] = temp1; list6[0] = temp7; list5[0] = temp8;
                         list3[0] = temp10; list3[1] = temp11; list4[1] = temp12; list4[0] = temp9;
                        }
                        else{
                        list3[2] = temp1; list4[2] =temp2; list5[0] = temp3; list6[0]=temp4;
                        list3[7] = temp6; list4[7] = temp5; list1[0] = temp8; list2[0] = temp7;
                        list3[0] = temp12; list3[1] = temp9; list4[1] = temp10; list4[0] = temp11;

                        }
                    break;
                case 'F': /* AFFECTED LEFT SIDE OF LAYER // ROTATES CORRECTLY (R) */
                temp1 = list1[1]; temp2 = list2[1]; temp3 = list3[3]; temp4=list4[3];
                temp5 = list5[1]; temp6 = list6[1]; temp7 = list3[6]; temp8 = list4[6];

                temp9= list3[4]; temp10=list3[5]; temp11= list4[5]; temp12=list4[4];

                      if(argv[i][x+1]=='+'){
                list6[1] =  temp4; list5[1] = temp3; list4[3]= temp2; list3[3] =temp1;
                list2[1] = temp7; list1[1] = temp8; list3[6] = temp6; list4[6] = temp5;

                list3[4] = temp10; list3[5] = temp11; list4[5] = temp12; list4[4] =temp9;
                        }
                    else{
                    list6[1] = temp7; list5[1] = temp8; list4[3] = temp6; list3[3] = temp5;
                    list2[1] = temp4; list1[1] = temp3;  list3[6] = temp2; list4[6] = temp1;

                    list3[4] = temp12; list3[5] = temp9; list4[5] = temp10; list4[4] =temp11;
                    }

                    break;
                case 'Y': /* moving U and D*/

                if(argv[i][x+1]=='+'){
                    temp1 = list4[1]; temp2 = list3[1];  temp3=list2[0];   temp4=list2[1];
                    temp5 = list3[4]; temp6 = list4[4];  temp7=list5[1];   temp8=list5[0];
                    temp9 = list3[2]; temp10 = list3[3]; temp11= list4[3]; temp12 = list4[2];

                    list5[0] = temp2; list5[1] = temp1; list4[1] = temp3; list3[1] =temp4;
                    list2[0] = temp5; list2[1] = temp6; list3[4] = temp7; list4[4] = temp8;
                    list4[2] = temp9; list4[3] = temp12; list3[3] = temp11; list3[2] = temp10;

                    temp1 = list4[0]; temp2 = list3[0]; temp3 = list1[0]; temp4=list1[1];
                    temp5 = list3[5]; temp6 = list4[5]; temp7= list6[1]; temp8 = list6[0];
                    temp9 = list3[6]; temp10 = list3[7]; temp11= list4[7]; temp12 =list4[6];

                    list4[0] = temp3; list3[0] = temp4; list1[0] = temp5; list1[1] = temp6;
                    list3[5] = temp7; list4[5] = temp8; list6[1] = temp1; list6[0] = temp2;
                    list3[6] = temp12; list3[7] = temp9; list4[7] = temp10; list4[6] = temp11;
                }

                else{

                    temp1 = list4[1]; temp2 = list3[1];  temp3=list2[0];   temp4=list2[1];
                    temp5 = list3[4]; temp6 = list4[4];  temp7=list5[1];   temp8=list5[0];
                    temp9 = list3[2]; temp10 = list3[3]; temp11= list4[3]; temp12 = list4[2];

                    list2[0] = temp1; list2[1] = temp2; list3[4] = temp3; list4[4]= temp4;
                    list5[1] = temp5; list5[0] =temp6; list4[1]= temp7; list3[1] = temp8;
                    list3[3] = temp9; list4[3] = temp10; list4[2] = temp11; list3[2] = temp12;

                    temp1 = list4[0]; temp2 = list3[0]; temp3 = list1[0]; temp4=list1[1];
                    temp5 = list3[5]; temp6 = list4[5]; temp7= list6[1]; temp8 = list6[0];
                    temp9 = list3[6]; temp10 = list3[7]; temp11= list4[7]; temp12 =list4[6];

                    list4[0] = temp7; list3[0] = temp8; list1[0] = temp1; list1[1]=temp2;
                    list3[5] = temp3; list4[5] = temp4; list6[1] = temp5; list6[0] = temp6;
                    list3[6] = temp10; list3[7] = temp11; list4[7] = temp12; list4[6] = temp9;
                }
                    break;
                case 'X':
                    if(argv[i][x+1]=='+'){  /* R+ and L */
                temp1 = list3[0]; temp2 = list3[1]; temp3 = list3[2]; temp4= list3[3];
                temp5= list3[4]; temp6= list3[5]; temp7 = list3[6]; temp8 = list3[7];
                temp9 = list1[0]; temp10 = list1[1]; temp11= list2[1]; temp12 = list2[0];

                list3[7] = temp6; list3[6] = temp5; list3[5] =temp4; list3[4] = temp3;
                    list3[3] = temp2; list3[2] = temp1; list3[1] = temp8; list3[0] = temp7;
                    list2[0] = temp9; list2[1] = temp12; list1[1] = temp11; list1[0] = temp10;

                    temp1 = list4[7]; temp2 = list4[6]; temp3 = list4[5]; temp4= list4[4];
                    temp5 = list4[3]; temp6 = list4[2]; temp7 =list4[1]; temp8=list4[0];

                    temp9 = list5[0]; temp10 = list5[1]; temp11= list6[1]; temp12 = list6[0];

                    list4[0] = temp2; list4[1] = temp1; list4[2] = temp8; list4[3] = temp7;
                list4[4] = temp6; list4[5] = temp5; list4[6] = temp4; list4[7] = temp3;
                list5[0] = temp12; list5[1] = temp9; list6[1] = temp10; list6[0] = temp11;

                    }
                    else{/* R and L+ */
                            temp1 = list3[0]; temp2 = list3[1]; temp3 = list3[2]; temp4= list3[3];
                temp5= list3[4]; temp6= list3[5]; temp7 = list3[6]; temp8 = list3[7];
                temp9 = list1[0]; temp10 = list1[1]; temp11= list2[1]; temp12 = list2[0];

                list3[0] = temp3; list3[1] = temp4; list3[2] = temp5; list3[3] = temp6;
                list3[4] = temp7; list3[5] = temp8; list3[6] = temp1; list3[7] = temp2;
                list1[0] = temp12; list1[1] = temp9; list2[1] = temp10; list2[0] = temp11;

                temp1 = list4[7]; temp2 = list4[6]; temp3 = list4[5]; temp4= list4[4];
                    temp5 = list4[3]; temp6 = list4[2]; temp7 =list4[1]; temp8=list4[0];

                    temp9 = list5[0]; temp10 = list5[1]; temp11= list6[1]; temp12 = list6[0];

                    list4[0] = temp6; list4[1] = temp5; list4[2] = temp4; list4[3]= temp3;
                list4[4]= temp2; list4[5] = temp1; list4[6] =  temp8; list4[7] = temp7;
                list5[0] = temp10; list5[1] = temp11; list6[1] = temp12; list6[0] = temp9;
                    }

                    break;
                case 'Z':
                    if(argv[i][x+1]=='+'){ /* f+ and B  */
                        temp1 = list1[1]; temp2 = list2[1]; temp3 = list3[3]; temp4=list4[3];
                        temp5 = list5[1]; temp6 = list6[1]; temp7 = list3[6]; temp8 = list4[6];
                        temp9= list3[4]; temp10=list3[5]; temp11= list4[5]; temp12=list4[4];

                         list6[1] =  temp4; list5[1] = temp3; list4[3]= temp2; list3[3] =temp1;
                        list2[1] = temp7; list1[1] = temp8; list3[6] = temp6; list4[6] = temp5;
                        list3[4] = temp10; list3[5] = temp11; list4[5] = temp12; list4[4] =temp9;

                    temp1 = list1[0]; temp2 = list2[0]; temp3 = list3[2]; temp4 = list4[2];
                    temp5 = list5[0]; temp6 = list6[0]; temp7 = list3[7]; temp8 = list4[7];
                    temp9 = list3[0]; temp10 = list3[1]; temp11 = list4[1]; temp12 = list4[0];

                    list3[2] = temp1; list4[2] =temp2; list5[0] = temp3; list6[0]=temp4;
                        list3[7] = temp6; list4[7] = temp5; list1[0] = temp8; list2[0] = temp7;
                        list3[0] = temp12; list3[1] = temp9; list4[1] = temp10; list4[0] = temp11;
                    }
                    else{ /*  f and b+ */
                        temp1 = list1[1]; temp2 = list2[1]; temp3 = list3[3]; temp4=list4[3];
                        temp5 = list5[1]; temp6 = list6[1]; temp7 = list3[6]; temp8 = list4[6];
                        temp9= list3[4]; temp10=list3[5]; temp11= list4[5]; temp12=list4[4];

                        list6[1] = temp7; list5[1] = temp8; list4[3] = temp6; list3[3] = temp5;
                        list2[1] = temp4; list1[1] = temp3;  list3[6] = temp2; list4[6] = temp1;
                        list3[4] = temp12; list3[5] = temp9; list4[5] = temp10; list4[4] =temp11;

                       temp1 = list1[0]; temp2 = list2[0]; temp3 = list3[2]; temp4 = list4[2];
                    temp5 = list5[0]; temp6 = list6[0]; temp7 = list3[7]; temp8 = list4[7];
                    temp9 = list3[0]; temp10 = list3[1]; temp11 = list4[1]; temp12 = list4[0];

                    list4[2] = temp6; list3[2] = temp5; list2[0] = temp4; list1[0] =temp3;
                        list3[7] = temp2; list4[7] = temp1; list6[0] = temp7; list5[0] = temp8;
                         list3[0] = temp10; list3[1] = temp11; list4[1] = temp12; list4[0] = temp9;
                    }
                    break;
            }
        }

    }

 printf("   +------+\n");
 printf("  / %c  %c /|\n",list3[2],list3[3]);
 printf(" / %c  %c /%c|\n",list4[2],list4[3],list3[4]);
 printf("+------+%c |\n",list4[4]);
 printf("| %c  %c | %c|\n",list5[0],list5[1],list3[5]);
 printf("|      |%c +\n",list4[5]);
 printf("| %c  %c | /\n",list6[0],list6[1]);
 printf("+------+\n");
 if(list3[2]==list3[3] && list4[2]==list4[3]){

    if(list3[4]==list4[4] && list4[5]==list3[5]){
        if(list3[4]==list4[4] && list4[5]==list3[5]){
            if(list5[0]==list5[1] && list6[0]==list6[1])
                if(list3[2]==list4[3] && list4[2]==list3[3]&& list3[4]==list4[4] && list3[5]==list4[5] && list5[0]==list6[1] && list5[1]==list6[0]){
                    printf("Hurrah!");
                }

        }
    }
 }


    return 0;
 }



