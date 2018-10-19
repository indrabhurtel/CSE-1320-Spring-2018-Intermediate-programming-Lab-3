/*Indra Bhurtel*/

#include <stdio.h>
#include <strings.h>

void print_out(int *num, char *f[]){

int j;
printf("%d Flavors:\n",*num);

for (j=0;j<*num;j++){

printf(f[j]);

printf("\n");
}
}

int name_flavors(char *n, char* f[], int *s){

int j;

int count=0;

char bundtcakes;

for (j=0;j<*s;j++){

bundtcakes=*f[j];

if (bundtcakes==*n){

printf("Flavor match! ");
printf(f[j]);
printf("\n");

count++;

}
}
return count;
}

int main(){
int inp, amt, lgth;
int loop=0;
char name[100];
char initial;
char *bundtcakes[]={"Red Velvet", "Cinnamon", "Chocolate", "Apple", "Lemon","Classic Vanilla","Carrot"};

while (loop==0){

printf("\n\n***Menu:***\n");
printf("1-pick how many you want \n");
printf("2-See if any match the first letter of your name \n");
printf("3-to exit\n");
scanf("%d", &inp);

if (inp==1){
printf("How many do you want? ");
scanf("%d",&amt);
print_out(&amt,bundtcakes);
}

 else if (inp==2){
printf("Enter a name: ");
scanf("%s",&name);

initial=toupper(name[0]);
lgth=sizeof(bundtcakes)/sizeof(bundtcakes[0]);
printf("Number of matches: %d\n",name_flavors(&initial,bundtcakes,&lgth));
}

 else if (inp==3){
printf("Bye \n");
loop=1;
}
 else {
printf( "****This is not a valid choice! Please enter 1, 2 or 3****");
}
}
}
