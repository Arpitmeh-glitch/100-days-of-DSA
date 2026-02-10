#include <stdio.h>
#include <string.h>
int main(){
char s[1000];
scanf("%s",s);
int l=0,r=strlen(s)-1,f=1;
while(l<r){
if(s[l]!=s[r]){f=0;break;}
l++;
r--;
}
if(f)printf("YES");
else printf("NO");
return 0;
}
