#include<stdio.h>
#include"heap.h";
int main() {
 int a[50];
 int EXIT_FAILURE;
 int i,n,j;
 FILE *o;
 o = fopen("in.txt", "rt");
 if(o == NULL){/*deschidere in.txt*/
		printf ("Error1");
        EXIT_FAILURE;
        }
 fscanf(o,"%d", &n);
 for(i=0; i<n; i++)
 {
   fscanf(o,"%d",&a[i]);
   heap(a,n);
}
 fclose(o);
 FILE *c;
 c = fopen("out.txt", "wt");
 fprintf(c,"Heap sorting: ");
 for(i=0; i<n; i++)
     fprintf(c,"%d ",a[i]);
 getch();
 fclose(c);
 return 0;

}

