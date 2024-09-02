# Implementação de Pilha Estática em C

## Descrição
Este projeto em C implementa uma pilha estática utilizando um array de tamanho fixo. A pilha permite operações básicas como empilhar, desempilhar e obter o topo da pilha. É ideal para cenários onde o número máximo de elementos na pilha é conhecido antecipadamente.

## Funcionalidades
- **Criação de Pilha**: Inicializa uma pilha vazia e pronta para uso.
- **Verificação de Pilha Vazia**: Verifica se a pilha está vazia.
- **Verificação de Pilha Cheia**: Verifica se a pilha atingiu sua capacidade máxima.
- **Empilhar Elemento**: Adiciona um novo elemento no topo da pilha.
- **Desempilhar Elemento**: Remove o elemento do topo da pilha e retorna o valor.
- **Obter Topo da Pilha**: Acessa o elemento que está no topo da pilha sem removê-lo.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o pilha_estatica pilha_estatica.c
   ```
2. Execute o programa e utilize as funções para manipular a pilha conforme necessário:
   - Crie a pilha com `criarPilha(&p)`.
   - Empilhe elementos com `empilharElemento(&p, elemento)`.
   - Desempilhe elementos com `desempilharElemento(&p, &elemento)`.
   - Verifique o topo da pilha com `obterTopo(p, &elemento)`.

## Estrutura de Dados
O projeto utiliza uma estrutura de pilha (`pilha`), que armazena os elementos em um array fixo:

- **elem[MAX]**: Array que armazena os elementos da pilha.
- **topo**: Índice do topo da pilha.

### Funções Principais
- **criarPilha(pilha *p)**: Inicializa a pilha com topo definido como -1.
- **pilhaVazia(pilha p)**: Verifica se a pilha está vazia.
- **pilhaCheia(pilha p)**: Verifica se a pilha está cheia.
- **empilharElemento(pilha *p, elemento e)**: Adiciona um elemento no topo da pilha.
- **desempilharElemento(pilha *p, elemento *e)**: Remove e retorna o elemento no topo da pilha.
- **obterTopo(pilha p, elemento *e)**: Retorna o elemento no topo da pilha sem removê-lo.

## Exemplo de Uso
```c
pilha p;
criarPilha(&p);

elemento e1 = 10;
empilharElemento(&p, e1);

elemento topo;
if (obterTopo(p, &topo)) {
    printf("Elemento no topo: %d\n", topo);
}

elemento desempilhado;
if (desempilharElemento(&p, &desempilhado)) {
    printf("Elemento desempilhado: %d\n", desempilhado);
}
```

## Limitações
- **Capacidade Fixa**: A pilha tem uma capacidade máxima de `MAX` elementos, onde `MAX` é definido como 100. Se a pilha atingir essa capacidade, não será possível adicionar mais elementos.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
