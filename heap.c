int heap(int *a,int n) {/*functia principala de sortare*/
	int i,aux;
	heapify(a,n);
	for (i=n-1;i>0;i--) {/*interschimbare valori*/
		aux = a[0];
		a[0] = a[i];
		a[i] = aux;
		arrange(a,i);
	}
}
void heapify(int *a,int n) {
	int k,i,j,element;
	for (k=1;k<n;k++) {/*radacina are indicele 1*/
		element = a[k];
		i = k;/*nodul din pozitia k*/
		j = (i-1)/2;
		while((i>0)&&(element > a[j])) {
			a[i] = a[j];
			i = j;
			j = (i-1)/2;
		}
		a[i] = element;
	}
}
void arrange(int *a,int n) {
	int i,j,element;
	j = 0;
	element = a[j];
	i = 2*j+1;
	while(i+1 <= n) {
		if((i+2 <= n)&&(a[i] < a[i+1]))
		    i++;
		if(element < a[i]) {
			a[j] = a[i];
			j = i;
			i = 2*j+1;
		}
		 else
            break;
	}
	a[j] = element;
}
