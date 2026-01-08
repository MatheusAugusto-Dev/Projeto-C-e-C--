# 🎓 AULA 1 — Introdução ao C e ao Pensamento de Baixo Nível

## 🎯 Objetivo da aula

Ao final desta aula você deve:

* Entender **o que é a linguagem C**
* Entender **como um programa em C nasce e é executado**
* Saber **ler e escrever a estrutura básica** de um programa em C
* Compilar e executar seu **primeiro programa em C**

---

## 🧠 1. O que é a linguagem C (de verdade)

C **não é só uma linguagem antiga**.
Ela é uma **linguagem de sistema**, criada para escrever coisas como:

* Sistemas operacionais
* Drivers
* Compiladores
* Engines
* Bancos de dados
* Tudo que precisa ser **rápido, previsível e com controle de memória**

💡 Ideia-chave:

> **Em C, você conversa quase diretamente com a memória e o processador.**

Ela fica **muito próxima do Assembly**, mas ainda legível para humanos.

---

## ⚙️ 2. Compilação vs Interpretação

Aqui começa a diferença de mentalidade em relação ao Python.

### 🐍 Python (interpretação)

* Código → executado linha por linha
* Mais lento
* Mais flexível
* Menos controle de memória

### ⚡ C (compilação)

* Código → compilador → arquivo binário
* Muito rápido
* Total controle de memória
* Erros aparecem **antes de rodar**

📌 Em C:

```
arquivo.c → compilador (gcc) → programa.exe
```

Se o código **não compila**, ele **não roda**.

---

## 🛠️ 3. Ferramentas básicas

Você vai precisar de:

* **Compilador**: GCC ou Clang
* **Editor**: VS Code (recomendado)
* **Terminal**

No Windows:

* MinGW ou WSL

No Linux:

* GCC já vem instalado

Verifique no terminal:

```bash
gcc --version
```

---

## 🧩 4. Estrutura básica de um programa em C

Agora o coração da aula.

```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

Vamos dissecar isso **linha por linha**.

---

### 🔹 `#include <stdio.h>`

* Importa a biblioteca de entrada e saída padrão
* `printf` vem daqui
* É processado **antes da compilação**

---

### 🔹 `int main()`

* Todo programa em C **começa no `main`**
* `int` → retorna um valor inteiro para o sistema operacional

📌 `return 0;`
Significa: “programa executou com sucesso”.

---

### 🔹 `{ }`

* Bloco de código
* Tudo dentro é executado

---

### 🔹 `printf`

* Imprime texto no console
* `\n` = quebra de linha

---

## ▶️ 5. Compilando e executando

No terminal, dentro da pasta do arquivo:

```bash
gcc main.c -o programa
```

Executar:

```bash
./programa
```

No Windows:

```bash
programa.exe
```

---

## 🧪 6. Exercícios (obrigatórios)

### 📝 Exercício 1 — Hello customizado

Crie um programa que imprima:

```
Meu nome é Neco
Tenho XX anos
Estou aprendendo C
```

---

### 📝 Exercício 2 — Múltiplos prints

Imprima:

```
*****
* C *
*****
```

---

## 🧠 7. Desafio

### 🎯 Desafio 1 — Primeiro programa “pensante”

Faça um programa que:

* Imprima seu nome
* Imprima o ano atual
* Imprima quantos anos você terá em 2030

📌 **Regras**

* Tudo fixo (ainda não usamos entrada de dados)
* Organize bem o código
* Use comentários explicando o que cada parte faz

---

## 🧠 8. Conceito importante da aula

> **C não te protege.**
>
> Se você errar, o programa:
>
> * quebra
> * gera comportamento indefinido
> * ou simplesmente faz besteira silenciosamente

E isso é exatamente o que faz você **aprender de verdade**.

---

## 📌 Tarefa para a próxima aula

Antes de seguir para a Aula 2:

* ✔ Compilar pelo menos 1 programa em C
* ✔ Entender o papel do `main`
* ✔ Saber explicar o que é compilação

---