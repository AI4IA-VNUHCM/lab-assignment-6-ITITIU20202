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
	int max=0,count=0,index;
    char t[100];
    
    int min=100,count1=0,index1;
    char t1[100];
    
    for (int i = 0 ; i < strlen(str); i++) {
        
        if (str[i]!=' ') {
            count1++;
        }
            else {
            if (count1 < min) {
                min=count1;
                index1=i-min;
                }
                count1=0;
            }
            int k=0;
            for (int i =index1; i<index1+min;i++) {
                    t1[k++]=str[i];
                }
                t1[k]='\0';
             }
    
    for (int i = 0 ; i < strlen(str); i++) {
        
        if (str[i]!=' ') {
            count++;
        }
            else {
            if (count > max) {
                max=count;
                index=i-max;
                }
                count=0;
            }
            
            if (count > max ) {
                max = count;
                index = strlen(str)-max;
            }
            
            int j=0;
            for (int i =index; i<index+max;i++) {
                    t[j++]=str[i];
                }
                t[j]='\0';
             }
    printf("Shortest word: %s\n",t1);
    printf("Longest word: %s",t);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
