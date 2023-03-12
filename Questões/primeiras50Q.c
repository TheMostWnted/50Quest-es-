
Skip to content
Pulls
Issues
Codespaces
Marketplace
Explore
@TheMostWnted
TheMostWnted /
PI
Public

Cannot fork because you own this repository and are not a member of any organizations.

Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights

More
PI/50Questões.c
@TheMostWnted
TheMostWnted 50 Questões
Latest commit e96177a Apr 6, 2022
History
1 contributor
717 lines (586 sloc) 13.4 KB
//Questões PI

// Q1
int largestElem() {
    int num = 0, big = 0;
    scanf("%d", &num);
    big = num;

    while (num) {
        scanf("%d", &num);
        if (num > big) {
            big = num;
        }
    }

    return big;
}

// Q2
int average() {
    int result = 0, num = 1, counter = 0;
    
    while(num) {
        scanf("%d", &num);
        if (num != 0) counter++;
        result += num;
    }
    if (!counter)
        result = 0;
    else 
        result /= counter;

    return result;
}

// Q3
int secondLargest() {
    int num = 0, big = 0, secBig = 0;
    scanf("%d", &num); 
    big = num;
    secBig = num;

    while (num) {
        scanf("%d", &num);
        if (num > big) {
            secBig = big;
            big = num;
        } 
        else if (num > secBig) 
            secBig = num;
    }

    return secBig;
}

//4  Returns the number of 1's of a binary number represented in decimal by 'n'
void bitsUm(unsigned int n){
    int one = 0;

    while(n!=0){
        if (n%2 == 1)
            one++;
        n = n / 2;
    }

    printf("Number of 1's: %d", one);
}

//5 The opposite of the previous function
int trailingZ(unsigned int n){
    int zero = 0;

    while(n!=0){
        if(n%2==0)
            zero++;
        n /= 2;
    }
    return zero;
}

//6 counts how many digits you need to write the number

int qDig(unsigned int n){
    int i = 0;

    while(n!= 0){
        i++;
        n /= 10;
    }
    return i;
}

//7 concatenate 2 strings 

char *mystrcat (char s1[], char s2[]){
    char newstr[strlen(s1) + strlen(s2)];
    int i, j;

    for (i = 0; i < strlen(s1); i++){
        newstr[i] = s1[i];
    }

    for (j = 0; j < strlen(s2); j++){
        newstr[i + j] = s2[j];
    }

    newstr[strlen(s1) + strlen(s2)] = '\0';

    printf("%s\n", newstr);

    return newstr;
}

//8 

char *mystrcpy(char *dest, char s2[]){
    int i;

    for(i=0; s2[i]!='\0'; i++){
        dest[i] = s2[i];
    }
    dest[i]= '\0';

    return dest;
}

// Q9
int mystrcmp(char s1[], char s2[]) {
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i]; i++);
    
    return s1[i] - s2[i];
}

//10
char *mystrstr (char s1[], char s2[]) {
    char *ret = NULL;
    int i, j, l;
    
    if (!(*s2))
        ret = s1;

    for (i = 0; s1[i] && !ret; i++) {
        for (j = 0, l = i; s1[l] == s2[j] && s2[j]; l++, j++);
        if (!s2[j])
            ret = s1 + i;
    }
  
    return ret;
}

//11 reverse a string

void mystrrev(char s[]){
    int i = strlen(s) - 1, j;
    char s2[strlen(s)];

    for(j=0; j<strlen(s); j++){
        s2[j] = s[i];
        i--;
    }
    s2[j] = '\0';
    printf("%s\n", s2);
}

//12
void strnoV(char s[]){
    int i = 0, j = 0;
    char s2[strlen(s) - contaVogais(s)];

    while(s[i]){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            i++;
        } else {
            s2[j] = s[i];
            j++;
            i++;
        }
    }
    s2[j] = '\0';

}

//13
void truncW (char t[], int n) {
    int i, count = 0, j;

    for (i = 0; t[i]; i++) {
        if (t[i] != ' ') 
            count++;
        else 
            count = 0;

        if (count > n) {
            for (j = i; t[j]; j++)
                t[j] = t[j+1];
            i--;
        }

    }
}

char charMaisfreq(char s[]){
    int i=0, maior = 0, count, j;
    char maisFreq = s[i];
    
    for(i=0; s[i]; i++){
        count = 0;
        for(j=0; s[j]; j++){
            if (s[i] == s[j])
                count++;
            }
        if(count > maior){
            maior = count;
            maisFreq = s[i];
        }
    }

    printf("%c", maisFreq);

    return maisFreq;
}

//15    return the length of the largest sequence of the same number
int iguaisConsecutivos(char s[]){
    int maior = 0;
    int count = 1;
    int i=0;

    while(s[i]){
        while(s[i]==s[i+1]){
            count++;
            i++;
        }
        if(count >= maior)
            maior = count;
        count=1;
        i++;
    }

    printf("%d",maior);

    return maior;
}

//16
int difConsecutivos (char s[]){
    int maior = 0, i = 0, count; 

    while(s[i]){
        count = 1;
        while(s[i] != s[i+1]){
            count++;
            i++;
        }
        if(count >= maior)
            maior = count;
        i++;
    }
    
    printf("%d", maior);

    return maior;
}

//17 the biggest prefix between 2 strings
int maiorPrefixo(char s1[], char s2[]){
    int i, count = 0;

    for(i=0; s1[i]; i++){
        if(s1[i] == s2[i])
            count++;
        else
            return count;
    }
    return count;
}

//18 sufixo

int maiorSufixo (char s1 [], char s2 []) {
    int i = strlen(s1) -1;
    int j = strlen(s2) -1;
    int count = 0;
    
    while(i>=0){
        if(s1[i] == s2[j]){
            count++;
            i--;
            j--;
        } else 
            return count;
    }
    return count;
}

// 19

int sufPref (char s1[], char s2[]) {
    int ans = 0, i, j = 0;
    for(i = 0; s1[i]; i++) {
        if(s1[i] == s2[j++]) ans++;
        else ans = j = 0;
    }
    return ans;
}

// 20

int contaPal (char s[]) {
    int inWord = 0, total = 0;
    for(int i = 0; s[i]; i++) {
        if(s[i] == ' ' || s[i] == '\n') {
            if(inWord) total++;
            inWord = 0;
        }
        else inWord = 1;
    }
    if(inWord) total++;
    return total;
}

//21  

int contaVogais(char s[]){
    int vogais = 0, i = 0;
    while(s[i]){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            vogais++;
            i++;
        } else {
            i++;
        }
    }
    return vogais;
}

//22
int contida (char a[], char b[]) {
    int i, j, ans = 1;
    
    for (i = 0; a[i] && ans; i++) {
        for (j = 0; b[j] && a[i] != b[j]; j++);
        if (!b[j])
            ans = 0;
    }
    
    return ans;
}

// 23

int palindrome (char s[]) {
    int len = 0;
    for(int i = 0; s[i]; i++) len++;
    for(int i = 0; s[i]; i++) if(s[i] != s[len - 1 - i]) return 0;
    return 1;
}

// Q24
int remRep (char x[]) {
    int i, j;

    for (i = 0; x[i]; i++) {
        if (x[i] == x[i+1]) {
            for (j = i+1; x[j]; j++) 
                x[j] = x[j+1];
            i--;
        }
    }

    return i;
}

//25. 
int limpaEspacos(char t[]){
    int i, j;

    for(i=0; s[i]; i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            for(j=i+1; s[j]; j++)
                s[j] = s[j+1];
            i--;
        }
    }
    return i;
}

// Q26 
void insere(int v[], int N, int x) {
    int i;
    for (i = 0; i < N && v[i] < x; i++);
    for (; N > i; N--)
        v[N] = v[N-1];
    v[i] = x;
}

// Q27
void merge (int r [], int a[], int b[], int na, int nb){
    int i, ca, cb;
    
    for (i = ca = cb = 0; i < na + nb; i++) {
        if ((ca < na && cb < nb && b[cb] < a[ca]) || ca >= na) 
            r[i] = b[cb++];
        else 
            r[i] = a[ca++];
    }
}

// Q28
int crescente (int a[], int i, int j){
    int ans = 1;
    for (; i < j && ans; i++)
        ans = a[i] <= a[i+1];
    return ans;
}

// Q29
int retiraNeg (int v[], int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        if (v[i] < 0) {
            for (j = i; j < N; j++) 
                v[j] = v[j+1];
            i--;
            N--;
        }
    }

    return i;
}

// Q30
int menosFreq (int v[], int N){
    int i, j, count = 1, min = N, mf = v[0];
    
    for (i = 0; i < N; i = j, count = 1) {
        for (j = i+1; j < N && v[i] == v[j]; j++, count++);
        if (count < min) {
            min = count;
            mf = v[i];
        }
    }
    return mf;
}

// Q31
int maisFreq (int v[], int N){
    int i, j, max = 0, count = 1, mf = v[0];
    
    for (i = 0; i < N; i = j, count = 1) {
        for (j = i+1; j < N && v[j] == v[i]; j++, count++);
        if (count > max) {
            max = count;
            mf = v[i];
        }
    }

    return mf;
}


// Q32
int maxCresc (int v[], int N) {
    int i, j, count = 1, max = 0;
    
    for (i = 0; i < N; i++, count = 1) {
        for (j = i+1; j < N && v[j] >= v[j-1]; j++, count++);
        if (count > max) 
            max = count;
    }
    return max;
}

// Q33
int elimRep (int v[], int n) {
    int i, j, l;

    for (i = 0; i < n; i++) 
        for (j = i+1; j < n; j++) 
            if (v[i] == v[j]) {
                for (l = j; l < n; l++) 
                    v[l] = v[l+1];
                j--;
                n--;
            }
    
    return i;   
}

// Q34
int elimRepOrd (int v[], int n) {
    int i, j, l;

    for (i = 0; i < n; i++) 
        for (j = i+1; j < n && v[i] == v[j]; j++) {
           for (l = j; l < n; l++) 
                v[l] = v[l+1];
            j--;
            n--;
        }
            
    
    return i;   
}

// Q35
int comunsOrd (int a[], int na, int b[], int nb) {
    int i = 0, j = 0, count = 0;
    while(i < na && j < nb) {
        if(a[i] == b[j]) {
            count++;
            i++;
            j++;
        }
        else if(a[i] > b[j]) j++;
        else i++;
    }
    return count;
}

// Q36
int comuns (int a[], int na, int b[], int nb){
    int i, j, count = 0;
    for (i = 0; i < na; i++) {
        for (j = 0; j < nb && b[j] != a[i]; j++);
        if (j < nb)
            count++;
    }
    return count;
}

// Q37
int minInd (int v[], int n) {
    
    int r;
    if (n < 1) r = -1;
    else {
        int i;
        r = 0;
        for (i = 1; i < n; i++)
            if (v[i] < v[r]) 
                r = i;
    }

   return r;
}

// Q38
void somasAc (int v[], int Ac [], int N) {
    int acum = 0, i;

    for (i = 0; i < N; i++) {
        acum += v[i];
        Ac[i] = acum;
    }
}

// Q39
int triSup (int N, float m [N][N]) {
    int i, j, ans = 1;
    
    for (i = 0; i < N && ans; i++) 
        for (j = 0; j < i && ans; j++)
            ans = m[i][j] == 0;
    
    return ans;
}

// Q40
void transposta (int N, float m [N][N]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < i; j++) {
            float temp = m [i][j];
            m [i][j] = m [j][i];
            m [j][i] = temp;  
        }
    }
}

// Q41
void addTo (int N, int M, int a [N][M], int b[N][M]) {
    int i, j;
    for (i = 0; i < N; i++) 
        for (j = 0; j < M; j++)
            a [i][j] += b [i][j];
}

// Q42
int unionSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i = 0; i < N; i++)
        r[i] = v1[i] || v2[i];
    return i;
}

// Q43
int intersectSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i = 0; i < N; i++)
        r[i] = v1[i] && v2[i];
    return i;
}

// Q44
int intersectMSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i = 0; i < N; i++)
        r[i] = v1[i] < v2[i] ? v1[i] : v2[i];
    return i;
}

// Q45
int unionMSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for (i = 0; i < N; i++)
        r[i] = v1[i] > v2[i] ? v1[i] : v2[i];
    return i;
}

// Q46
int cardinalMSet (int N, int v[N]) {
    int i, res = 0;

    for (i = 0; i < N; i++) 
        res += v[i];
    
    return res;
}

// Q47
typedef enum movimento {
    Norte, Oeste, Sul, Este
} Movimento;

typedef struct posicao {
    int x, y;
}Posicao;

Posicao posFinal (Posicao inicial, Movimento mov[], int N) {
    int i;
    
    for (i = 0; i < N; i++) 
        switch (mov[i]) {
            case Norte: 
                inicial.y++;
                break;
            case Oeste:
                inicial.x--;
                break;
            case Este:
                inicial.x++;
                break;
            case Sul:
                inicial.y--;
                break;
        }
    
    return inicial;
}

// Q48
int iguais(Posicao p1, Posicao p2) {
    return p1.y == p2.y && p1.x == p2.x;
}

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i, r = -1;
    
    for (i = 0; i < N && !iguais(inicial,final); i++) {
        if (inicial.y > final.y) {
            mov[i] = Sul;
            inicial.y--;
        } 
        else if (inicial.y < final.y) {
            mov[i] = Norte;
            inicial.y++;
        } 
        else if (inicial.x > final.x) {
            mov[i] = Oeste;
            inicial.x--;
        } 
        else {
            mov[i] = Este;
            inicial.x++;
        }
    }
    if (iguais(inicial,final))
        r = i;
        
    return r;
}

// Q49
int maiscentral (Posicao pos[], int N) {
    int min, dist, r = 0, i;
    for (i = 0; i < N; i++) {
        dist = pow(pos[i].x, 2) + pow(pos[i].y, 2);
        if (!i || dist < min) {
            min = dist;
            r = i;
        }
    }
    return r;
}

// Q50
int vizinhos (Posicao p, Posicao pos[], int N) {
    int i, count = 0;
    for (i = 0; i < N; i++) 
        count += pow(pos[i].x - p.x, 2) + pow(pos[i].y - p.y, 2) < 2 && !iguais(p, pos[i]);
    return count;;
}
Footer
© 2023 GitHub, Inc.
Footer navigation

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

PI/50Questões.c at main · TheMostWnted/PI

