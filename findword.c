#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main () {
	char str[500];
	char str2[500];
	char filename[500] = "NAME_OF_INPUT_FILE";
  char word[500] = "PUT_YOUR_WORD_HERE";
	char *ret;
	FILE *ptr;
	int res;
	ptr = fopen(filename,"r");
	if(ptr == NULL) {
		printf("file called %s is not found",filename);
		return 1;
	}
	while (fgets(str,500,ptr) != NULL) { 
		str[strlen(str) -1] = '\0';
		strcpy(str2,str); 
		ret = strtok(str," ");
		while(ret != NULL) {
			res = strcasecmp(ret,word);  
      if (res == 0) {
              printf("%s",str2);
			}
		  ret =strtok(NULL," ");
		}
	}
	fclose(ptr);
return 0;
}
