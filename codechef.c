#include <stdio.h>
#include <string.h> //U@code4CHEFINA
int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--) {
	    int count = 0;
	    int up = 0;
	    int lo = 0;
	    int num = 0;
	    int spe = 0;
	    char s[20];
	    scanf("%s",s);
	    
	    if(strlen(s)<10) {
	        printf("NO\n");
	        continue;
	    }
	    int i;
	    for( i = 0; i< strlen(s) ; i++) {
	        
	        if(s[i] >= 'A' && s[i]<='Z' ) {
	            up++;
	        }
	        if(s[i] >= 'a' &&s[i]<= 'z') {
	            lo++;
	        }
	        if(s[i] >= 48 &&s[i]<= 57) {
	            num++;
	        }
	        if(s[i] == '@'||s[i] == '#'||s[i] == '%'||s[i] == '&'||s[i] == '?') {
	            spe++;
	        }
	    }
	    if(up==1 && (s[0] >= 'A' &&s[0]<='Z') ) {
	        
	        printf("NO\n");
	        continue;
	    }
	    if(num==1 &&(s[0] >= 48 && s[0] <= 57) ) {
	        printf("NO\n");
	        continue;;
	    }
	    if(spe == 1 &&( s[0] == '@'||s[0] == '#'||s[0] == '%'||s[0] == '&'||s[0] == '?'  ) ){
	        printf("NO\n");
	        continue;
	    }
	    if(up==1 && (s[strlen(s)-1] >= 'A' &&s[strlen(s)-1]<='Z')) {
	    	printf("NO\n");
	        continue;
		}
		if(num==1 && (s[strlen(s)-1] >= 48 &&s[strlen(s)-1]<=57) ) {
			printf("NO\n");
	        continue;
		}
		if(spe==1 && (s[strlen(s)-1]=='@'||s[strlen(s)-1] == '#'||s[strlen(s)-1] == '%'||s[strlen(s)-1]=='&'||s[strlen(s)-1]=='?')) {
			printf("NO\n");
	        continue;
		}
	    //printf(" %d %d %d %d ", up , lo , num , spe);
	    //printf("last : %c ",s[strlen(s)-1]);
	    if(up>0&&lo>0&&num>0&&spe>0) {
	        printf("YES\n");
	    }
	    else {
	        printf("NO\n");
	    }
	}
	return 0;
}


