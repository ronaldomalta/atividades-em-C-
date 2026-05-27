//trlen (String Length)
//O que faz: Conta quantos caracteres existem na string (sem contar o caractere nulo \0 do final).
char cidade[] = "Recife";
int tam = strlen(cidade); // Retorna 6

//strcpy (String Copy)
//O que faz: Copia o conteúdo de uma string para outra (equivalente ao operador = que não funciona direto em strings no C).
char destino[20];
strcpy(destino, "C Progressivo"); // destino agora guarda "C Progressivo"

//strcat (String Concatenate)
//O que faz: Junta (junta/concatena) duas strings. Ela pega o texto da segunda string e cola logo no final da primeira.
char saudacao[30] = "Bom dia, ";
char nome[] = "Ronaldo";
strcat(saudacao, nome); // saudacao passa a ser "Bom dia, Ronaldo"

//strcmp (String Compare)
//O que faz: Compara duas strings caractere por caractere (baseado no valor deles na Tabela ASCII) para ver se são iguais ou quem vem primeiro no dicionário.
if (strcmp("a", "b") < 0) {
    // Verdadeiro, porque 'a' vem antes de 'b' na tabela ASCII/alfabeto
}

//strcspn O nome vem de String Complementary Span (algo como "intervalo complementar de uma string").

//O que ele faz: Ele varre a sua string principal e conta quantos caracteres existem antes de encontrar o primeiro caractere proibido (um caractere que você definiu em uma lista).
tamanho = strcspn(string_principal, caracteres_proibidos);
int posicao = strcspn(nome, "\n");