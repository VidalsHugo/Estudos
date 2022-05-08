#include <stdio.h>
 
int main() {
 
	int gi, gg, N, grenal, vi, vg, emp;
	
	vi=0;
	vg=0;
	emp=0;
	do{
		scanf("%d %d", &gi, &gg);
		grenal++;
		if(gi>gg){
			vi++;
		}
		else if(gg>gi){
			vg++;
		}
		else if(gi==gg){
			emp++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &N);
		if(N==1){
			continue;
		}
		else{
			break;
		}
	}while(1);
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", vi);
	printf("Gremio:%d\n", vg);
	printf("Empates:%d\n", emp);
	if(vi>vg){
		printf("Inter venceu mais\n");
	}
	else if(vg>vi){
		printf("Gremio venceu mais\n");
	}
	else if(vi==vg){
		printf("Nao houve vencedor\n");
	}
	
	
    return 0;
}
