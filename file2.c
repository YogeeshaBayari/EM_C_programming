#include<stdio.h>
int main(){
    FILE *f;
    char name[] = "Yogeesh";
    int mark = 55;
    float cgpa = 5.6;

    f = fopen("HI2.txt","w");
    fprintf(f,"Student name : %s\n",name);
    fprintf(f,"Student mark : %d\n",mark);
    fprintf(f,"Student cgpa : %f\n",cgpa);
    fclose(f);

    //

    
    
  
    // f = fopen("HI2.txt","r");
    // printf("-------------\n");
    // fscanf(f,"%d",&mark);
    // printf("%d-------------",mark);
    // fclose(f);

    f = fopen("HI2.txt","r");
    char ch;
    // ch = fgetc(f);
    printf("%c",ch);
    while (ch != EOF)
    {
        printf("%c",ch);
        ch = fgetc(f);
    }
    printf("\n");
    fclose(f);
    

}

 

