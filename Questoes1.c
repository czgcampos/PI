int ex1 () {
	int x=1, y=0;
	while (x!=0){
		scanf ("%d", &x);
        y += x;
	}
	return y;
}

int ex2 () {
	int x=1, y=0;
	while (x!=0){
		scanf ("%d", &x);
        if (x>y)
        	y = x;
	}
	return y;
}

int ex3 () {
	int x=1, y=0, z=0;
	while (x!=0){
		scanf ("%d", &x);
        y += x;
        z++;
	}
	printf("%d\n", y/(z-1));
	return 0;
}

int ex4 () {
	int x=1,maior=0,segmaior=0;
	while (x!=0){
		scanf("%d",%x);
		if (x>maior) {segmaior=maior;maior=x;}
		if (x>segmaior && x<maior) segmaior=x;
	}
	return segmaior;
}

int bitsUm (unsigned int n) {
	int conta=0;
	while (n>0) {
		if ((n%2)!=0) conta++;
		n=n/2;
	}
	return conta;
}

int trailingZ (unsigned int n){
	int conta=0; 
    while ((n%2)==0){
    	conta ++;
    	n=n/2;
    }
	return conta;
}

int qDig (unsigned int n){
	int conta=0;
	while (n>0){
		conta++;
		n=n/10;
	}
	return conta;
}

int mystrlen (char str[]){
	int i;
	for(i=0;str[i]!='\0';i++);
    return i;
}

char* mystrcat (char s1[], char s2[]){
	int i;
	int u=0;
	int s = strlen (s1)+ strlen (s2);
	for(i=0;i<s;i++){
		if (s1[i]=='\0'){
			s1[i] = s2[u];
			u++;
			s1[i+1] = '\0';
		}
	}
	return s1;
}

char *mystrcpy (char *dest, char source[]){
	int i;
	for(i=0;source[i]!='\0';i++)
		dest [i]= source[i];
	dest[i]='\0';
	return dest;
}

int mystrcmp(char s1[], char s2[]) {
    int i;
    for (i = 0; s1[i] == s2[i]; i++) 
        if (s1[i] == '\0')
            return 0;
    return s1[i] - s2[i];
}

char *mystrstr (char s1[], char s2[]) {
    int i,j,n;    
    for (i=0;  s1[i]!='\0' ; i++) {
        for (j=0, n=i; (s1[n] == s2[j]) && (s1[n]!='\0'); j++,n++);
        if (s2[j] == '\0') return (&(s1[i]));
        }
    if (s1[0] == '\0') return s1;
    return NULL;
}

void strrev (char s[]) {
    int i, j, tmp;
    for (i=0,j=strlen(s)-1;i<j;i++,j--){
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

int vogal1 (char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return 0;
    else return 1;
}

void strnoV (char t[]){
    int r,w;
    for (r=0,w=0; t[r]!='\0'; r++)
        if (myvogal(t[i])==1) t[w++] = t[r];
    t[w] = '\0';    
}

void truncW (char s[], int n){
    int conta = 0, j, i;
    for (i=0,j=0; s[i]!='\0' ; i++){
    	if (s[i]!=' '){
    		if (conta < n){
    		s[j++] = s[i];
    		conta++;
    	    }
    	}
    	else{
            conta=0;
    		s[j++]= ' '; 
    	}
    }
    s[j] ='\0';
}

int contach (char t[], char ch) {
    int i, conta=0;
    for (i=0; t[i]!='\0' ; i++) 
        if (t[i] == ch) conta++;        
    return conta;
}

char charMaisFreq (char t[]){
    int i, max = 0 , conta = 0;
    char ch = 0;
    for (i=0; t[i]!='\0' ; i++) {
        if ((contach(t,t[i])) > max) { max = (contach(t,t[i]));
                                      ch = t[i]; }
    }
    return ch;
}

int iguaisConsecutivos (char s[]) {
    int i, j, r=0, conta=0;
    char ch;    
    for(i=0; s[i]!='\0'; i++) {
        ch =  s[i];
        for (j=i; ch == s[j] && s[j]!='\0'; j++, conta++);
        if(conta>r) r = conta;
        conta = 0;
    }
    return r;
}

int mpsr (char s[]){
	int i,j;
	for (i=0;s[i]!='\0';i++)
		for (j=0;j<i;j++)
			if (s[i]==s[j])
				return i;
	return i;		
}

int difConsecutivos (char s[]){
	int m=0,r,i;
	for (i=0;s[i]!='\0';i++){
		 	r = mpsr (s+i);
		 	if (m<r) m=r;
		 }
	return m;	 
}

int maiorPrefixo (char s1 [], char s2 []) {
    int i, conta=0;
    for (i=0;s1[i]==s2[i];i++)
    conta++;
    return conta;
}

int maiorSufixo (char s1 [], char s2 []) {
    int i = strlen (s1) -1;
    int j = strlen (s2) -1;
    int conta = 0;
    for( ; s1[i] == s2[j] && i>=0 && j>=0; i--,j--)
    conta++;
    return conta;
}

int sufPref (char s1[], char s2[]) {
    int i, conta=0;    
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[conta]) conta++; 
        else conta=0; 
    }
    return conta;
}

int contaPal (char s[]) {
    int i, conta=0;
    for (i=0;s[i]!='\0';i++){
        if (s[i]!=' '&&s[i+1]==' ') conta++;
        if (s[i]!=' '&&s[i+1]=='\0') conta++;
    }
    return conta;
}

int contaVogais (char s[]) {
    int i,conta=0;
    for (i=0; s[i]!='\0'; i++)
        if (vogal1(s[i])) conta++;
    return conta;
}

int existe(char a, char b[]){
    int i,r;
    for(i=0,r=0;b[i]!='\0';i++)
        if(b[i]==a) return 1;
    return 0;
}

int contida (char a[], char b[])
{
    int i,r=0;
    for(i=0;a[i]!='\0';i++)
        if(existe(a[i],b)) r=1;
        else return 0;
    return r;
}

int palindroma (char s[]) {
    int i, j, conta=1;
    for (i=0,j=strlen(s)-1;i<=j;i++,j--){
        if(s[i]==s[j]) conta = 1;
        else {conta=0;break;}
    }
    return conta;
}

int remRep (char texto []) {
    int r=0,i,j=0;
    for (i=0; texto[i]!='\0'; i++) {
        if (texto[i]!=texto[i+1]) {texto[j++] = texto[i];}
    }
    texto[j] = '\0';
    r = strlen (texto);
    return r;
}

int limpaEspacos (char t[]) {
    int r,w;
    for (r=0,w=0; t[r]!='\0'; r++)
        if ((t[r]!=' ')||((t[r]==' ')&&(t[r+1]!=' ')) t[w++] = t[r];
    t[w] = '\0';
    return strlen (t);
}

void insere (int v[], int n, int x){
    int i;
    for (i=n;(i>=1)&&(v[i-1]>x);i--)
    v[i]=v[i-1];
    v[i]=x;
}

void merge (int r [], int a[], int b[], int na, int nb){
    int ia,ib,ir;
    for(ir=0,ib=0,ia=0;(ia<na)&&(ib<nb);ir++)
    if(a[ia]>=b[ib]) r[ir]=b[ib++];
    else r[ir] = a[ia++];
    for(;ib<nb;ib++,ir++) r[ir] = b[ib];
    for(;ia<na;ia++,ir++) r[ir] = a[ia];
}

int crescente (int a[], int i, int j){
    int r;
    if (i!=j){
    	for (;i<j;i++)
        if (a[i]<=a[i+1]) r=1;
        else {r=0; break;}
    }
    else r=1;
    return r;
}

int retiraNeg (int v[], int N){
       int r,w,conta;
       for (r=0,w=0;r<N;r++)
       if (v[r]>=0) v[w++]=v[r];
       return w;
}

int menosFreq (int v[], int N){
    int i,conta=1,min=N,res=v[0];
    for (i=0; i<N ; i++){
        if (v[i]==v[i+1]) conta++;
        else{ 
            if (conta<min){
                min = conta;
                res = v[i];
                conta = 1; 
            }
            else conta=1;
        }
    }
    return res;
}

int maisFreq (int v[], int N){
    int i,conta=1,max=0,res=v[0];
    for (i=0; i<N ; i++) {
        if (v[i]==v[i+1]) conta++;
        else{ 
            if (conta>max) {
                max = conta;
                res = v[i];
                conta = 1; 
            }
            else conta=1;
        }
    }
    return res;
}

int maxCresc (int s[], int N){
    int i, conta=1, max=1;
    for (i=0; i<N ; i++) {
        if (s[i]<=s[i+1]) conta++; 
        else {
            if (conta>max) { 
                max = conta; conta = 1;
            }
               else conta=1;
        }
    }
    return max;
}

int elimRep (int v[], int N){
       int r,w,i;
       for (r=w=0;r<N;r++){
           for (i=0;(i<w)&&(v[i]!=v[r]);i++);
           if (i==w) v[w++]=v[r];
       }
       return w;
}

int elimRepOrd (int v[], int N){
    int r,w;
    for (r=0,w=0;r<N;r++)
    	if (v[r]!=v[r+1]) v[w++]=v[r];
    if (w==0) w=1;
    return w;
}

int comunsOrd (int a[], int na, int b[], int nb){
    int ia=0,ib=0,conta=0;
    while (ia<na && ib<nb){
        if (a[ia]==b[ib]) {
            conta++;
            ia++;
            ib++;
        }
        else if (a[ia]>b[ib]) 
            ib++;
        else 
            ia++;
    } 
    return conta;
}

int comuns (int a[], int na, int b[], int nb){
    int ia,ib,conta=0;
    for (ia=0; ia<na; ia++) {
        for (ib=0; ib<nb && b[ib]!=a[ia]; ib++);
            if (ib<nb)
                conta++;
    }
    return conta;
}

int minInd (int v[], int n) {
   int i,r=0,menor=v[0];
   for (i=0;i<n;i++){
       if (v[i]<menor) {menor = v[i]; r=i;}
   }
   return r;
}

void somasAc (int v[], int Ac [], int N){
   int i,acomula=0;
   for (i=0;i<N;i++){
        acomula += v[i];
        Ac[i] = acomula;
   }   
}

int triSup (int N, float m [N][N]){
    int i,j,conta=0;
    for (i=0;i<N;i++){
        for (j=0;j<i;j++){
            if (m [i][j]==0) conta = 0;
            else {conta=1; break;}
        }
        if (conta!=0) break;
    }
    if (conta!=0) return 0;
    else return 1;
}

void transposta (int N, float m [N][N]){
    int i,j,tmp;
    for (i=0;i<N;i++){
        for (j=i;j<N;j++)
        if (i==j);
        else{
            tmp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = tmp;
        }
    }
}

void addTo(int N, int M, int a [N][M], int b[N][M]){
    int i,j;
    for (i=0;i<N;i++){
        for (j=0;j<M;j++){
            a[i][j] += b[i][j];
        }
    }
}

void sumDiag(int N, int m [N][N]){
    int i,j,acumula=0;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++) if (i!=j) acumula += m[i][j];
        m[i][i] = acumula;
        acumula = 0;
    }
}

int main(){
    char c;
    for (c=65;c<91;c++)
    printf("O Valor ASCII de %c = %d\n",c,c);
    for (c=97;c<123;c++)
    printf("O Valor ASCII de %c = %d\n",c,c);
    return 0;
}

int unionSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i=0;i<N;i++){
        if (v1[i]==1||v2[i]==1) r[i] = 1;
        else r[i] = 0;
    }
}

int intersectSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i=0;i<N;i++){
        if (v1[i]==1&&v2[i]==1) r[i] = 1;
        else r[i] = 0;
    }
}

int intersectMSet (int N, int v1[N], int v2[N], int r[N]){
    int c = 0,i;
    for (i=0;i<N;i++){
        if (v1[i]<=v2[i]) r[i] = v1[i];
        else r[i] = v2[i];
    }
    return c;
}

int unionMSet (int N, int v1[N], int v2[N], int r[N]){
    int c = 0,i;
    for (i=0;i<N;i++){
        if (v1[i]>=v2[i]) r[i] = v1[i];
        else r[i] = v2[i];
    }
    return c;
}

int cardinalMSet (int N, int v[N]){
    int c=0,i;
   	for (i=0;i<N;i++)
   	if (v[i]!=0) c += v[i];
   	return c;
}