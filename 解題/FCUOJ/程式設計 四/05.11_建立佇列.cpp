#include <bits/stdc++.h>

typedef struct node{
	char arr[20];
	struct node *next;
}Node;

int main(){
	
	FILE *input=fopen("input.txt","r");
	FILE *output=fopen("output.txt","w");
	
	while(true){
		Node a[200];
		Node *now = &a[0];
		if(fscanf(input,"%s",now->arr)==EOF)
			break;
		fprintf(output,"%s\n",now->arr);
		now = now -> next;
	}
	fclose(input);
	fclose(output);
	return 0;
}
