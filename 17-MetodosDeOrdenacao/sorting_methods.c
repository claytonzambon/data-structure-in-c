//Arquivo Sorting_methods.c

//Method Insert Sort
//Metodo de Ordencao Insert Sort
void insert_sort(int vetor[], int tamanho){
  int troca;
  int i, j;

  //Percorrer todo o vetor
  for(i = 1; i < tamanho; i++){
	int proximo = i;

	//Responsavel pelas trocas
    while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
        troca = vetor[proximo];
        vetor[proximo] = vetor[proximo - 1];
        vetor[proximo - 1] = troca;
        proximo--;
    }
  }
}

//Method Select Sort
//Metodo de Ordenação Select Sort
void select_sort(int vetor[], int tamanho){
    int menor = 0, troca = 0;
    int i = 0, j = 0;

    //Loop externo para repassar todo o vetor
    for(i = 0; i < (tamanho - 1); i++){
        menor = i;
        //Loop interno para trabalhar com o próximo elemento
        for(j = (i + 1); j < tamanho; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        //Ocorrendo a troca
        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}

//Method Bubble Sort
//Metodo de Ordenação Bubble Sort
void bubble_sort(int vetor[], int tamanho){
  //variavel auxiliar
  int proximo = 0;
  int i, j;

  //varrer todo o vetor externo
  for(i = 0; i < tamanho; i++){
    //trabalhar com os proximos elementos
    for(j = 0; j < (tamanho - 1); j++){
        //Ocorre a TROCA
        if(vetor[j] > vetor[j+1]){
            proximo = vetor[j];
            vetor[j] = vetor[j+1];
            vetor[j+1] = proximo;
        }
    }
  }
}
