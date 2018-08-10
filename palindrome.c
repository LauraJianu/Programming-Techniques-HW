int isPalindrome(int n){
    int m;
    int p;
    p=n;/* p memoreaza valoarea numarului care se pierde dupa parcurgerea cifrelor*/
    m=0;/*m reprezinta oglinditul lui n*/
    while(n!=0){
        m=(m*10)+(n%10);
        n=n/10;
    }
    if(p == m){
    	return 1; /* numarul este palindrom */
    }
    else
    {
    	return 0; /* numarul nu este palindrom */
    }

 }
