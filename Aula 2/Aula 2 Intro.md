# 🎓 AULA 2 — Tipos de Dados e Memória em C

## 🎯 Objetivo da aula

Ao final desta aula você deve:

* Entender **o que são tipos de dados em C**
* Saber **quanto cada tipo ocupa na memória**
* Entender **overflow**
* Usar `sizeof`
* Conseguir **prever bugs antes deles acontecerem**

---

## 🧠 1. O que é um tipo de dado em C (mentalidade correta)

Em C, um tipo de dado define **duas coisas**:

1️⃣ **Quantos bytes na memória**
2️⃣ **Como esses bytes serão interpretados**

👉 O computador **só vê bits**.
👉 O tipo diz **como interpretar esses bits**.

---

## 🔢 2. Tipos básicos em C

### 🔹 `int`

* Inteiro
* Normalmente **4 bytes** (32 bits)
* Faixa típica:

```
-2.147.483.648 até 2.147.483.647
```

```c
int idade = 24;
```

---

### 🔹 `float`

* Número decimal (precisão simples)
* **4 bytes**
* Menos preciso

```c
float altura = 1.80;
```

---

### 🔹 `double`

* Número decimal (precisão dupla)
* **8 bytes**
* Muito mais preciso

```c
double salario = 3500.75;
```

📌 **Regra prática**:
👉 Use `double` quase sempre. `float` só quando memória importa muito.

---

### 🔹 `char`

* Um **byte**
* Pode representar:

  * Um caractere
  * Um número pequeno
  * Um byte cru

```c
char letra = 'A';
```

📌 Em C:

```c
char == 1 byte
```

Sempre.

---

## 📦 3. Tamanho em bytes (isso é crucial)

Aqui entra a RAM na jogada.

| Tipo   | Tamanho típico |
| ------ | -------------- |
| char   | 1 byte         |
| int    | 4 bytes        |
| float  | 4 bytes        |
| double | 8 bytes        |

⚠️ **“Típico”**, não garantido.
Depende da arquitetura e compilador.

👉 **Nunca assuma**. Sempre use `sizeof`.

---

## 🧪 4. O operador `sizeof`

`sizeof` retorna **quantos bytes** um tipo ou variável ocupa.

### Exemplo:

```c
printf("%lu\n", sizeof(int));
```

📌 `%lu` porque `sizeof` retorna `unsigned long`.

---

### Exemplo completo:

```c
#include <stdio.h>

int main() {
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("char: %lu bytes\n", sizeof(char));

    return 0;
}
```

Esse código **vale ouro**.
Ele te mostra **como sua máquina realmente funciona**.

---

## 💥 5. Overflow (bug silencioso e mortal)

Overflow acontece quando:

> Você tenta colocar um valor maior do que o tipo suporta.

### Exemplo clássico:

```c
int x = 2147483647;
x = x + 1;
```

Resultado?

```
-2147483648
```

😈 O valor **dá a volta**.

📌 O mais perigoso:

* Compila
* Executa
* Não avisa
* Pode quebrar sistemas inteiros

---

## 🧠 Por que overflow acontece?

Porque a memória é **finita**.

Um `int` de 32 bits:

```
11111111 11111111 11111111 11111111
```

Adicionar +1:

```
00000000 00000000 00000000 00000000
```

👉 Estouro → volta ao início.

---

## 🧪 6. EXERCÍCIO (obrigatório)

### 📌 Exercício — Mostrar tamanho dos tipos

👉 Crie um programa que:

* Mostre o tamanho de:

  * `int`
  * `float`
  * `double`
  * `char`
* Mostre também o tamanho de uma variável de cada tipo

📌 Exemplo de saída:

```
int: 4 bytes
float: 4 bytes
double: 8 bytes
char: 1 byte
```

---

## 🏆 7. DESAFIO — Detectar overflow manualmente

Agora vem a parte **engenharia de verdade**.

### 🎯 Objetivo

Detectar **ANTES** da soma se vai acontecer overflow.

---

### 📌 Regras

* Use `int`
* Não use bibliotecas prontas
* Faça a verificação manual
* Se houver overflow:

  * Imprima uma mensagem de erro
* Se não houver:

  * Faça a soma normalmente

---

### 💡 Dica conceitual (não é a resposta pronta)

Para dois números positivos `a` e `b`:

> Se `a > INT_MAX - b` → overflow vai acontecer

📌 Você vai precisar:

```c
#include <limits.h>
```

---

### Exemplo de comportamento esperado:

```
Digite dois números:
2147483647
1
Erro: overflow detectado
```

Ou:

```
Digite dois números:
10
20
Resultado: 30
```
# 🎓 AULA 2 (REEXPLICADA) — Tipos de Dados, Memória e Overflow

## 🧠 Antes de tudo: o computador NÃO entende números

O computador **não entende números**, palavras ou letras.

👉 Ele só entende **bits**:

```
0 e 1
```

Tudo o que você vê como:

* `10`
* `-5`
* `3.14`
* `'A'`

… é só uma **interpretação humana** de um **conjunto fixo de bits na memória**.

---

## 📦 O papel do tipo (`int`, `float`, etc.)

Um **tipo em C define duas coisas**:

1️⃣ **Quantos bytes serão reservados na memória**
2️⃣ **Como interpretar os bits desses bytes**

Exemplo:

```c
int x = 10;
```

Em uma máquina comum:

* `int` → 4 bytes → 32 bits

Ou seja:

```
00000000 00000000 00000000 00001010
```

Esses bits **não são o número 10** por si só.
Eles **representam** o número 10 **porque o tipo `int` diz isso**.

---

## 🔢 Quanto um `int` consegue armazenar?

Se temos **32 bits**, quantos valores diferentes isso dá?

👉 Cada bit pode ser 0 ou 1
👉 Total de combinações:

```
2^32 = 4.294.967.296 valores
```

Como `int` é **com sinal**, metade é negativa e metade positiva:

```
-2.147.483.648  até  2.147.483.647
```

📌 **Isso é um limite físico**, não uma regra da linguagem.

---

## 💥 AGORA: o que é overflow (de verdade)

Overflow acontece quando você tenta colocar **um valor que NÃO cabe** nesse espaço fixo.

### Analogia perfeita (guarde essa):

🪣 Imagine um balde que comporta **10 litros**
Se você tentar colocar **11 litros**:

👉 A água **transborda**
👉 O balde não cresce
👉 A água extra se perde

📌 Em C:

* A memória **não cresce**
* O número **não avisa**
* O valor **“dá a volta”**

---

## 🔁 Overflow na prática (visual)

Máximo de um `int` (simplificado):

```
11111111
```

Agora soma +1:

```
00000000
```

👉 Ele **volta para o início**
👉 Isso se chama **wrap-around**

Em C:

```c
int x = INT_MAX;
x = x + 1;
```

Resultado:

```
INT_MIN
```

😈 E o compilador **não reclama**.

---

## ⚠️ Por que o compilador NÃO impede isso?

Porque:

* Verificar overflow **custa performance**
* C foi criado para sistemas críticos
* A filosofia é:

  > “Eu confio que você sabe o que está fazendo”

👉 **Responsabilidade total do programador**

---

## 🧠 Resumo mental obrigatório

> Overflow acontece porque:
>
> * Tipos têm tamanho fixo
> * Memória é limitada
> * Bits não “estouram”, eles apenas se reorganizam
> * O tipo interpreta esses bits como outro número

---

# 🧪 EXERCÍCIOS (TREINO)

Agora sim, prática **progressiva**.

---

## 📝 Exercício 1 — Explorando os limites

Crie um programa que:

1️⃣ Declare:

```c
int max = INT_MAX;
int min = INT_MIN;
```

2️⃣ Imprima:

* O valor de `max`
* O valor de `min`
* `max + 1`
* `min - 1`

📌 Use:

```c
#include <limits.h>
```

🎯 **Objetivo**:
Ver o overflow acontecer **com seus próprios olhos**.

---

## 📝 Exercício 2 — Comparando tipos

Crie um programa que:

1️⃣ Declare:

```c
int a = 2000000000;
int b = 2000000000;
long long c = 2000000000;
```

2️⃣ Some:

* `a + b`
* `c + c`

3️⃣ Imprima os resultados

🎯 **Objetivo**:
Entender como **o tipo muda completamente o resultado**, mesmo com os mesmos números.

---

# 🏆 DESAFIO — Detectar overflow manualmente

Agora sim, **nível faculdade / engenharia**.

---

## 🎯 Objetivo do desafio

Você vai **impedir o overflow antes que ele aconteça**.

---

## 📌 Regras

* Use `int`
* Leia dois números do usuário
* NÃO deixe a soma acontecer se for estourar
* Detecte manualmente

---

## 🧠 Lógica que você precisa entender (isso é a chave)

Para **números positivos**:

```
Se a > INT_MAX - b → overflow
```

Para **números negativos**:

```
Se a < INT_MIN - b → underflow
```

---

## 📌 Comportamento esperado

Entrada:

```
Digite dois numeros:
2147483647
1
```

Saída:

```
Erro: overflow detectado
```

Outro caso:

```
Digite dois numeros:
10
20
Resultado: 30
```

