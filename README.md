# 🚀 Jornada C: Dominando a Memória e o Baixo Nível

Este repositório documenta a minha evolução no estudo da linguagem **C**, com foco profundo em gerenciamento de memória, ponteiros e estruturas de dados. O objetivo não é apenas aprender a sintaxe, mas entender **como o computador funciona por baixo do capô**.

> "Para entender o software, você precisa entender o hardware."

## 📚 Tópicos Estudados

Abaixo, o meu progresso nos conceitos fundamentais:

- [x] **Estrutura Básica:** `stdio.h`, `main`, tipos primitivos.
- [x] **Structs:** Criação de tipos de dados personalizados.
- [x] **Ponteiros:** Manipulação de endereços de memória, operador `&` e `*`.
- [x] **Ponteiros com Structs:** Acesso via operador seta (`->`).
- [ ] **Alocação Dinâmica:** `malloc`, `free`, `calloc` (Stack vs Heap).
- [ ] **Manipulação de Arquivos:** Leitura e escrita persistente.
- [ ] **Algoritmos de Ordenação:** Bubble Sort, etc.

## 🛠️ Projetos Práticos (Mini-Labs)

Ao invés de apenas exercícios teóricos, aplico os conceitos em mini-cenários do mundo real:

| Projeto | Descrição | Conceitos Chave |
| :--- | :--- | :--- |
| **RPG Inventory System** | Sistema de inventário onde itens (armas) têm durabilidade e afetam o jogador. | `Structs`, `Ponteiros`, `Passagem por Referência` |
| **Simulador Bancário** | Sistema de pagamentos que valida saldo e atualiza estados de conta. | `Condicionais`, `Lógica de Negócio`, `Input Sanitization` |
| **CPU Overclock** | Simulação de hardware que monitora temperatura e clock com travas de segurança. | `Manipulação de Estado`, `Alertas`, `Lógica de Hardware` |
| **Carro & Viagem** | Controle de consumo de combustível baseado em distância percorrida. | `Matemática Básica em C`, `Atualização de Structs` |

## 💻 Como Rodar

Para compilar e executar qualquer um dos arquivos, certifique-se de ter o **GCC** instalado.

```bash
# Exemplo de compilação
gcc nome_do_arquivo.c -o app

# Rodar no Windows
./app.exe

# Rodar no Linux/Mac
./app
```
## 📝 Anotações de Aprendizado

### Stack vs Heap (Memória)
- **Stack:** Onde ficam as variáveis locais (ex: `struct Heroi h`). Rápida, mas limitada.
- **Heap:** Onde usamos `malloc`. Memória gigante, mas exige limpeza manual (`free`).

### O Poder dos Ponteiros
Aprendi que passar uma estrutura inteira por valor copia todos os dados (lento). Passar por referência (`&struct`) envia apenas o endereço (rápido e eficiente).

---

Autor: **Leandro** - Estudante de Análise e Desenvolvimento de Sistemas
