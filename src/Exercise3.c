/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int max = 0,min=strlen(str);
	int count =0;
	int start=0;
	char temp[100],temp1[100];
	for(int i =0;i<strlen(str);i++) {
	    
			if (str[i]==' ') {
				if (count > max) {

					max = count;
					for (int t =0; t <max;t++) {
						temp[t]=str[start++];
					}
					temp[max] ='\0';
				}
				count =0;
				start = i+1;
				continue;
			}
			count++;
		}
	printf("Longest word: %s\n",temp);

	for(int i =0;i<strlen(str);i++) {
	    
			if (str[i]==' ') {
				if (count < min) {

					min = count;
					for (int t =0; t <count;t++) {
						temp1[t]=str[start++];
					}
					temp1[count] ='\0';
				}
				count =0;
				start = i+1;
				continue;
			}
			count++;
		}
	printf("Shortest word: %s",temp1);



}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
