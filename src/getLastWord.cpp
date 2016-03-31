/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int length(char* str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
char * get_last_word(char * str){
	if ((str == "")){
		return "";
	}
	else if ((str != NULL))
	{

		//	char sentences[][100] = {"abc is a word","he he","   ","d ab   ","  x","asd324","","a"};
		//	char ans[][100] = { "word", "he","","ab","x","asd324","","a"};
		int len = length(str);
		int i = len - 1;
		while (str[i] == ' ' && i >= 0){
			i = i - 1;
		}
		if (i == -1){
			return "";
		}
		str[i + 1] = '\0';
		len = length(str);
		char* res = (char*)malloc(sizeof(char) * 10);
		int  p = 0;
		i = len - 1;
		while (str[i] != ' ' && i >= 0){
			i--;
		}
		if (i == -1){
			return str;
		}
		for (int k = i + 1; str[k]; k++){
			res[p++] = str[k];
		}
		res[p] = '\0';
		return res;
	}
	return NULL;
}
