#include<stdio.h>
struct Classmate
{
	int age;
	char name[20];

};
int main()
{
	struct Classmate ashan = { 20, "��ɼɼ" };
	printf("I Love%s\n", ashan.name);
	struct Classmate*I = &ashan;
	printf("I Love%s\n", I->name);
	strcpy(ashan.name, "��ɼɼlike me");
	printf("%s\n", ashan.name);
	printf("%s\n", I->name);
	return 0;
}