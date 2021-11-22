/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int size = strlen(str);
	int check;
	if (size%2!=0) printf("Invalid!");
	else {
    for (int i =0; i<strlen(str)/2; i++) {
        if ((str[i]=='{' && str[size-i-1]=='}') || (str[i]=='(' && str[size-i-1]==')') || (str[i]=='[' && str[size-i-1]==']')) 
			{
			 check=1;
			} else {
				printf("Invalid!"); 
				break; 
			}
    }
	if (check==1) printf("Valid!");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
