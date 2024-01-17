 #include<stdio.h>

int main(){

	FILE *fr = fopen("hello.txt","r");
	char c;
	
	if (fr == NULL){
		printf("Error in file opening");
		return 1;
	}

	while((c=fgetc(fr))!=EOF){
		putchar(c);
	}

	fclose(fr);
}
