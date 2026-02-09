#include <stdio.h>
#include <string.h>
int main(){
char s[1000],t;
scanf("%s",s);
int l=0,r=strlen(s)-1;
while(l<r){
t=s[l];
s[l]=s[r];
s[r]=t;
l++;
r--;
}
printf("%s",s);
return 0;
}
