# 📚 SUMÁRIO GERAL DO CURSO (Roadmap)

## 🔹 MÓDULO 1 — Fundamentos da Programação em C

> Aqui você aprende a conversar com o computador sem intermediários.

### Aula 1 — Introdução ao C e ao pensamento de baixo nível [ ]

* O que é C e por que ele ainda domina o mundo
* Compilação vs interpretação
* GCC, Clang
* Estrutura básica de um programa em C

📌 **Exercício**

* Criar um `Hello World`
* Modificar para imprimir seu nome e idade

📌 **Desafio**

* Fazer um programa que imprima uma tabela de valores (1 a 10)

---

### Aula 2 — Tipos de dados e memória

* `int`, `float`, `double`, `char`
* Tamanho em bytes
* Overflow
* `sizeof`

📌 **Exercício**

* Programa que mostra o tamanho de cada tipo

📌 **Desafio**

* Detectar overflow manualmente em uma soma

---

### Aula 3 — Operadores e expressões

* Aritméticos
* Relacionais
* Lógicos
* Ordem de precedência

📌 **Exercício**

* Calculadora simples

📌 **Desafio**

* Simular uma calculadora científica básica

---

### Aula 4 — Controle de fluxo

* `if`, `else`
* `switch`
* `for`, `while`, `do while`

📌 **Exercício**

* Verificar se um número é primo

📌 **Desafio**

* Gerar a sequência de Fibonacci

---

### Aula 5 — Funções

* Declaração
* Parâmetros
* Retorno
* Passagem por valor

📌 **Exercício**

* Função que calcula fatorial

📌 **Desafio**

* Biblioteca matemática própria (`math_utils.c`)

---

## 🔹 MÓDULO 2 — Ponteiros e Memória (o divisor de águas)

> Aqui 70% das pessoas desistem. Quem passa, vira engenheiro.

### Aula 6 — Ponteiros

* O que é um ponteiro
* Endereço de memória
* `&` e `*`

📌 **Exercício**

* Imprimir o endereço de variáveis

📌 **Desafio**

* Trocar valores de duas variáveis usando ponteiros

---

### Aula 7 — Arrays e ponteiros

* Arrays na memória
* Aritmética de ponteiros

📌 **Exercício**

* Percorrer um array usando ponteiros

📌 **Desafio**

* Implementar busca linear

---

### Aula 8 — Strings em C

* `char[]`
* `'\0'`
* `string.h`

📌 **Exercício**

* Contar caracteres de uma string

📌 **Desafio**

* Implementar sua própria `strlen`

---

### Aula 9 — Alocação dinâmica

* `malloc`
* `calloc`
* `realloc`
* `free`
* Memory leaks

📌 **Exercício**

* Criar vetor dinâmico

📌 **Desafio**

* Implementar um array dinâmico manual

---

## 🔹 MÓDULO 3 — Estruturas e Arquivos

> Aqui você começa a modelar o mundo real.

### Aula 10 — `struct`

* Criação
* Acesso
* Ponteiros para struct

📌 **Exercício**

* Struct `Aluno`

📌 **Desafio**

* Sistema simples de cadastro

---

### Aula 11 — Arquivos

* `fopen`, `fread`, `fprintf`
* Texto vs binário

📌 **Exercício**

* Salvar dados em arquivo

📌 **Desafio**

* CRUD simples em arquivo

---

### Aula 12 — Modularização

* `.h` e `.c`
* Separação de responsabilidades

📌 **Desafio Final de C**

* **Sistema de gerenciamento em C (arquivo + structs + ponteiros)**

---

# 🔹 MÓDULO 4 — Introdução ao C++

> Aqui você sobe de nível sem perder performance.

### Aula 13 — O que muda do C para o C++

* `iostream`
* `namespace`
* `cin` / `cout`

---

### Aula 14 — Programação Orientada a Objetos

* Classes
* Construtores
* Encapsulamento

---

### Aula 15 — Ponteiros em C++

* `new` / `delete`
* Diferença de `malloc`

---

### Aula 16 — STL

* `vector`
* `map`
* `set`

---

### Aula 17 — RAII e boas práticas

* Gerenciamento automático de recursos
* Segurança de memória

---

## 🔹 MÓDULO 5 — Projeto Final

🎯 **Projeto sugerido**

* Sistema de gerenciamento (agenda, estoque, jogo simples ou motor básico)
* Versão C e versão C++
