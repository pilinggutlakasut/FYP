#include <stdio.h>

int main(void) {
	char name[50];
	char fav_lang[50];
	printf("Name: ");
    scanf("%s", &name);
    printf("Favorite language: ");
    scanf("%s", &fav_lang);
    printf("Your name is %s and your favorite language is %s", name, fav_lang);
	return 0;
}
