#include<stdio.h>

int main() {

    FILE *fr , *fp;

//    fr = fopen("hi3.txt" , "w");

  //  fputs("hi my name is YOggesh " , fr);
    //fputs("hi my name is YOggesh\n " , fr);
    //fputs("hi my name is YOggesh " , fr);

    //fclose(fr);


    fp = fopen("hi3.txt", "r");
    char buf[100];
    
    if (fp != NULL) {
        while (fgets(buf, sizeof(buf), fp) != NULL) {
            printf("%s",buf);
	
        }
        fclose(fp);
    } else {
        printf("Failed to open file\n");
    }


}
