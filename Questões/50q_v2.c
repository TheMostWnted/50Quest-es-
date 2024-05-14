

//4 

int bitsUm (unsigned int n){
    int count=0;
    while(n>0){
    if (n%2==1){
        count++;
    }
    n=n/2;
    }
    return count;
}

//5

int trailingZ (unsigned int n){
    int count=0;
    if(n==0){count=32;}
    while(n>0){
    if (n%2==0){
        count++;
    }
    n=n/2;
    }
    return count;
}

//6
int qDig (unsigned int n){
    int count=0;
    while(n>0){
        count++;
    
    n=n/10;
    }
    return count;
}

//7
char *mystrcat (char s1[], char s2[]){
	int s1len = strlen(s1);
	int i = 0;
	for (s1len; s2[i] != '\0'; s1len++, i++){
		s1[s1len] = s2[i];
	}
	s1[s1len] = '\0';
	return s1;
}

//8
char *mystrcpy (char *dest, char source[]){
    int i=0;
    while(source[i]!='\0'){
        dest[i]=source[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

//9
int mystrcmp(char s1[], char s2[]) {
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i]; i++);
    
    return s1[i] - s2[i];
}

int mystrcmp (char s1[], char s2[]){
    int i;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++){
        if (s1[i] < s2[i]){
            return -1;
        } else if (s1[i] > s2[i]){
            return 1;
        }
    }
    return 0;
}


//10
char *mystrstr (char s1[], char s2[]){
    if (s2[0] == '\0') {
        return s1;
    }
    int i, j, k;
    for (i = 0; s1[i] != '\0'; i++){
    	if (s1[i] == s2[0]){
            for (k = i, j = 0; s1[k] != '\0' && s2[j] != '\0'; k++, j++){
                if (s1[k] != s2[j]){
                    break;
                }
            }
            if (s2[j] == '\0'){
                return s1 + i;
            }
    	}
    }
    return NULL;
}

//11
void strrev (char s[]){
	int stop = strlen(s);
	int slen = stop;
	int i;
	char copy[slen];
	strcpy(copy, s);
	slen--;
	for (i = 0; i < stop; i++, slen--){
		s[i] = copy[slen];
	}
	s[i] = '\0';
}

//12
void strnoV (char s[]){
    int i;
    int len = strlen(s);
    char sAux[len];
    int j=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            
        }
        else{
            sAux[j]=s[i];
            j++;
        }
    }
    sAux[j]='\0';
    strcpy(s,sAux);
}

//13

void truncW(char t[], int n) {
    int i, j = 0, count = 0;
    for (i = 0; t[i] != '\0'; i++) {
        if (!isspace(t[i])) {
            if (count < n) {
                t[j++] = t[i];
                count++;
            }
        } else {
            t[j++] = ' ';
            count = 0;
        }
    }
    t[j] = '\0';
}

//14
char charMaisfreq (char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    int i,j;
    char maisFreq=s[0];
    int count;
    int maxCount=0;
    for(i=0;s[i]!='\0';i++){
        count=0;
        for(j=0;s[j]!='\0';j++){
            if(s[i]==s[j]){
                count++;
            }

        }
        if(count>maxCount){
            maxCount = count;
            maisFreq = s[i];
        }
    }
    return maisFreq;
}

//15
int iguaisConsecutivos (char s[]){
    int i;
    int count=1;
    int maxCount=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>maxCount){
            maxCount = count;
        }
    }
    return maxCount;
}

//16 ??????????????????????????
int difConsecutivos (char s[]){
    int i;
    int count=1;
    int maxCount=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=s[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>maxCount){
            maxCount = count;
        }
    }
    return maxCount;
}

//17
int maiorPrefixo (char s1 [], char s2 []){
    int i;
    int count=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[i]){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

//18
int maiorSufixo (char s1 [], char s2 []){
    int s1len = strlen(s1)-1;
    int s2len = strlen(s2)-1;
    int i;
    int count=0;
    for(i=s1len;i>=0;i--,s2len--){
        if(s1[i]==s2[s2len]){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

//19
int sufPref (char s1[], char s2[]) {
	int i, j;
	for (i = 0, j = 0; s1[i] != '\0'; i++){
		if (s1[i] == s2[j]) {
			j++;
		} else {
			j = 0;
		}
	}
	return j;
}


//20
#include <ctype.h>

int contaPal (char s[]) {
	int i;
	int palavras = 0;
	for (i = 0; s[i] != '\0'; i++){
		if (!(isspace(s[i])) && (isspace(s[i+1]) || s[i+1] == '\0')){
			palavras++;
		}
	}
	return palavras;
}

//21
int contaVogais (char s[]) {
    int i=0;
    int count=0;
    while(s[i]!='\0'){
        if (s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i'
         || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            count++;
            }
        i++; 
    }
    return count;
}

//22
int contida (char a[], char b[]) {
    int i;
    int j;
    for(i=0;a[i]!='\0';i++){
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){
                break;
            }
            
        }
        if(b[j]=='\0'){
            return 0;
        }
    }
    return 1;
}

//23
int palindroma (char s[]){
    int len = strlen(s)-1;
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=s[len]){
            return 0;
        }
        len--;

    }
    return 1;
}

//24
int remRep (char x[]) {
    int i, j = 0;
    for(i = 0; x[i] != '\0'; i++) {
        if(x[i] != x[i+1]) {
            x[j] = x[i];
            j++;
        }
    }
    x[j] = '\0';
    return j;
}

//25
int limpaEspacos (char texto[]) {
    char copy[strlen(texto)];
    int i, j;
    strcpy(copy, texto);
    for (i = 0, j = 0; copy[i] != '\0'; i++){
    	if (copy[i] == copy [i+1] && copy[i] == ' '){
    		texto[j] = copy[i];
    	} else {
    		texto[j] = copy[i];
    		j++;
    	}
    }
    texto[j] = '\0';
    return strlen(texto);
}

//26
void insere (int s[], int N, int x){
	int i, j;
	if (x > s[N-1]) {
		s[N] = x;
		return;
	}
	for (i = 0; x > s[i]; i++);
	for (j = N; j - i != 0; j--){
		s[j] = s[j-1];
	}
	s[i] = x;
}

//27
void merge(int r[], int a[], int b[], int na, int nb){
    int i = 0, j = 0, k = 0;
    while (i < na && j < nb){
        if (a[i] < b[j]){
            r[k] = a[i];
            k++;
            i++;
        }
        else{
            r[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < na){
        r[k] = a[i];
        k++;
        i++;
    }
    while (j < nb){
        r[k] = b[j];
        k++;
        j++;
    }
}

//28
int crescente (int a[], int i, int j){
    while(i<j){
        if(a[i]>a[i+1]){
            return 0;
        }
        else {
        i++;
        }
    }
    return 1;
}

//29
int retiraNeg (int v[], int N){
    int i=0;
    int aux[N];
    int j=0;
    while(i<N){
        if(v[i]<0){
            i++;
        }
        else{
            aux[j]=v[i];
            j++;
            i++;
        }
    }
    aux[j]='\0';
    for(i=0;i<j;i++){
        v[i]=aux[i];
    }
    return j;
}

//30
int menosFreq(int v[], int N){
    int minCont = 1000;
    int menor = 0;
    for (int i = 0; i < N; i++) {
        int num = v[i];
        int cont = 0;
        for (int j = 0; j < N; j++) {
            if (v[j] == num) cont++;
        }
        if (cont < minCont) {
            menor = i;
            minCont = cont;
        }
    }
    return v[menor];
}


//31
int maisFreq (int v[], int N){
    int i,j;
    int count=0;
    int maxCount=0;
    int fre;
    int mFreq;
    for(i=0;i<N;i++){
        count=0;
        for(j=i;j<N;j++){
            if(v[i]==v[j]){
                count++;
            }
            else{
                break;
            }
        }
        if(count>maxCount){
            maxCount = count;
            mFreq= v[i];
        }
        
    }
    return mFreq;
}

//32
int maxCresc (int v[], int N){
    int i,j;
    int count=1;
    int maxCount=0;
    for(i=0;i<N;i++){
        if(v[i]<=v[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>maxCount){
            maxCount = count;
        }
    }
return maxCount;
}

//33
int elimRep (int v[], int n){
    int i;
    int j=0;
    int aux[n];
    for(i=0;i<n;i++){
        if(exists(aux,j,v[i])){

        }
        else{
            aux[j]=v[i];
            j++;
        }
    }

    aux[j]='\0';
    for(i=0;i<j;i++){
        v[i]=aux[i];
    }
    return j;
}

int exists(int v[], int n, int elem){
    int i;
    for(i=0;i<n;i++){
        if(v[i]==elem){
            return 1;
        }
    }
    return 0;
}

//34
int elimRepOrd(int v[], int N){
    if (N == 0) return 0; // Add this line to handle the case when the array is empty

    int k = 0;
    v[k] = v[0]; // Add this line to preserve the first element

    int i;
    for (i = 1; i < N; i++) {
        if (v[i] != v[i-1]) {
            k++;
            v[k] = v[i];
        }
    }
    return k+1;
}

//35
int comunsOrd (int a[], int na, int b[], int nb){
    int i = 0, j = 0;
    int count = 0;
    while (i < na && j < nb) {
        if (a[i] == b[j]) {
            count++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    return count;
}


// 36
int comuns (int a[], int na, int b[], int nb){
    int i,j, count = 0;
    for(i=0;i < na; i++){
        for(j=0;j<nb;j++){
            if(a[i]==b[j]){
                count++;
                break;
            }
        }
    }
    return count;
}

//37
int minInd (int v[], int n){
    int min=1000;
    int indMin;
    int i;
    for(i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
            indMin=i;
        }
    }
    return indMin;
}

//38
void somasAc (int v[], int Ac [], int N){
    int i,j;
    int ac=0;
    for(i=0;i<N;i++){
        ac+=v[i];
        Ac[i]=ac;
        
    }
}

//39
int triSup (int N, float m [N][N]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;i++){
            if(i>j){
                if(m[i][j]==0){
                    break;
                }
                else{
                    return 0;
                }
            }
            else{
                break;
            }
        }
    }
    return 1;
}

//40
void transposta (int N, float m [N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
                float temp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = temp;
        }
    }
}

//41
void addTo(int N, int M, int a[N][M], int b[N][M]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            a[j][i] += b[j][i];
        }
    }
}

//42
int unionSet (int N, int v1[N], int v2[N], int r[N]){
int cont = 0;
    for (int i = 0; i < N; i++) {
        if (v1[i] == 1 || v2[i] == 1) r[i] = 1, cont++;
    }
    return cont;
}

//43
int intersectSet(int N, int v1[N], int v2[N], int r[N]){
    int cont = 0;

    // Initialize all elements in r to 0
    for (int i = 0; i < N; i++) {
        r[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        if (v1[i] == 1 && v2[i] == 1) r[i] = 1, cont++;
    }
    return cont;
}

//44
int intersectMSet(int N, int v1[N], int v2[N], int r[N]){
    int cont = 0;

    // Initialize all elements in r to 0
    // for (int i = 0; i < N; i++) {
    //     r[i] = 0;
    // }
    for (int i = 0; i < N; i++) {
        if (v1[i] < v2[i]){
            r[i]=v1[i];
        }
        else{
            r[i]=v2[i];
        }
    }
    return 0;
}

//45
int unionMSet (int N, int v1[N], int v2[N], int r[N]){
        int cont = 0;

    // Initialize all elements in r to 0
    // for (int i = 0; i < N; i++) {
    //     r[i] = 0;
    // }
    for (int i = 0; i < N; i++) {
        if (v1[i] > v2[i]){
            r[i]=v1[i];
        }
        else{
            r[i]=v2[i];
        }
    }
    return 0;
}

//46
int cardinalMSet (int N, int v[N]){
    int i;
    int acc=0;
    for (int i = 0; i < N; i++) {
        acc += v[i];
    }
    return acc;

}

// typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
// typedef struct posicao {
// int x, y;
// } Posicao;

//47
Posicao posFinal (Posicao inicial, Movimento mov[], int N){
    int i;
    Posicao pos = inicial;
    for(i=0;i<N;i++){
        if(mov[i]==Norte){
            pos.y++;
        }
        else if(mov[i]==Oeste){
            pos.x--;
        }
        else if(mov[i]==Este){
            pos.x++;
        }
        else if(mov[i]==Sul){
            pos.y--;
        }
    }
    return pos;
}

//48
int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i;
    int count=0;
    for(i=0;i<N;i++){
        if(inicial.y<final.y){
            mov[i]=Norte;
            inicial.y++;
        }
        else if(inicial.y>final.y){
            mov[i]=Sul;
            inicial.y--;
        }
        else if(inicial.x<final.x){
            mov[i]=Este;
            inicial.x++;
        }
        else if (inicial.x>final.x){
            mov[i]=Oeste;
            inicial.x--;
        }
        else if (inicial.y==final.y || inicial.x==final.x){
            break;
        }
        count++;
    }
     if (inicial.x == final.x && inicial.y == final.y) return count;
    else return -1;
    return count;
}

//49
int maisCentral (Posicao pos[], int N){
    int menor = pos[0].x*pos[0].x + pos[0].y*pos[0].y;
    int indice = 0;
    for (int i = 0; i < N; i++) {
        if (pos[i].x*pos[i].x + pos[i].y*pos[i].y < menor){
            menor = pos[i].x*pos[i].x + pos[i].y*pos[i].y;
            indice = i;
        }
    }
    return indice;
}

//50
int vizinhos(Posicao p, Posicao pos[], int N){
    int cont = 0;
    for (int i = 0; i < N; i++) {
        if (pos[i].x == p.x+1 && pos[i].y == p.y || pos[i].x == p.x && pos[i].y == p.y+1
         || pos[i].x == p.x && pos[i].y == p.y-1 || pos[i].x == p.x-1 && pos[i].y == p.y)
            cont ++;
    }
    return cont;
}



