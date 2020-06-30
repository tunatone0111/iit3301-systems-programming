#include "myheader.h"
#include <stdio.h>
#include <string.h>

size_t HashFunc(char* x){
	size_t r = 0;
    int a = 17;

	for(int i = 0; i < strlen(x); i++){
		 r += r*a + x[i];
	}

    r %= HASHLEN;

	return r;
}

word_t* IsInTab(word_t* head[], char* x){
    word_t* temp = head[HashFunc(x)];
    while((temp != NULL) && (strcmp(x, temp->val) != 0)){
        temp = temp->next;
    }
    return temp;
}

void TableTraverse(word_t* head[]){
    printf("traverse\n");
    getchar();

    word_t *temp;
    for(int i = 0; i < HASHLEN; i++){
        temp = head[i];
        while(temp != NULL){
            printf("Hash[%4d] | %2d of %s\n", i, temp->count, temp->val);
            temp = temp->next;
        }
    }
}