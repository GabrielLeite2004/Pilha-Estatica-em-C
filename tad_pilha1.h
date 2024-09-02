#define MAX 100
typedef struct {
		 		elemento elem[MAX];
		 		int topo;
			} pilha;
typedef pilha tipo_pilha;


void criarPilha(pilha *p) {
	p->topo=-1;
}

int pilhaVazia(pilha p) {
	 return (p.topo < 0);
}

int pilhaCheia(pilha p) {
	 return (p.topo == MAX-1);
}


int empilharElemento(pilha *p, elemento e) {
	if (!pilhaCheia(*p)) {
		p->topo = p->topo + 1;
		p->elem[p->topo] = e;
		return 1;
   } else
   	return 0;
}


int desempilharElemento(pilha *p, elemento *e) {
	if (!pilhaVazia(*p)) {
		*e = p->elem[p->topo];
		p->topo = p->topo - 1;
      return 1;
	} else
   	return 0;
}


int obterTopo(pilha p, elemento *e) {
	if (!pilhaVazia(p)) {
		*e = p.elem[p.topo];
		return 1;
   } else
   	return 0;
}