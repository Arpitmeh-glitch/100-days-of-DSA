#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)scanf("%d",&a[i]);
int k,c=0,idx=-1;
scanf("%d",&k);
for(int i=0;i<n;i++){
c++;
if(a[i]==k){idx=i;break;}
}
if(idx!=-1)printf("Found at index %d\n",idx);
else printf("Not Found\n");
printf("Comparisons = %d",c);
return 0;
}
