# 🧵 Processamento de Vetor com Múltiplas Threads

Repositório contendo um programa desenvolvido para demonstrar o uso de **múltiplas threads** na execução simultânea de operações sobre um vetor de números.

O projeto tem como foco ilustrar conceitos de **programação concorrente**, permitindo observar na prática como diferentes tarefas podem ser executadas em paralelo dentro de um mesmo processo.

![Linguagem](https://img.shields.io/badge/Linguagem-Java-orange)
![Paradigma](https://img.shields.io/badge/Paradigma-Concorrente-blue)
![Status](https://img.shields.io/badge/Status-Acadêmico-green)

---

## 📑 Sumário

* [Autoria](#autoria)
* [Propósito do Projeto](#propósito-do-projeto)
* [Funcionalidades Principais](#funcionalidades-principais)
* [Tecnologias Utilizadas](#tecnologias-utilizadas)
* [Arquitetura do Programa](#arquitetura-do-programa)
* [Estrutura do Projeto](#estrutura-do-projeto)
* [Como Executar](#como-executar)

---

## 👩‍💻 Autoria

**Discente:**
Maria Vitória Fernandes Rocha

---

## 🎯 Propósito do Projeto

Este projeto foi desenvolvido com fins didáticos para:

* Demonstrar o uso de **threads** em programação.
* Explorar o conceito de **execução concorrente**.
* Permitir a observação de tarefas sendo executadas simultaneamente.
* Evidenciar a independência entre múltiplas operações em um mesmo vetor.

---

## ⚙️ Funcionalidades Principais

| Funcionalidade           | Descrição                                    |
| ------------------------ | -------------------------------------------- |
| Criação de Threads       | Inicializa até quatro threads independentes  |
| Processamento Paralelo   | Execução simultânea de operações             |
| Operações em Vetor       | Cada thread realiza uma operação distinta    |
| Identificação de Threads | Exibe o nome da thread em execução           |
| Exibição de Resultados   | Mostra o resultado individual de cada thread |

---

## 🧠 Operações Implementadas

O programa pode incluir operações como:

* Soma dos elementos do vetor
* Cálculo da média
* Identificação do maior valor
* Identificação do menor valor

*(As operações podem variar conforme a implementação.)*

---

## 🏗️ Arquitetura do Programa

O sistema foi estruturado de forma simples para facilitar o entendimento:

* **Classe Principal:**
  Responsável por inicializar o vetor e criar as threads.

* **Threads de Processamento:**
  Cada thread executa uma operação específica de forma independente.

* **Saída (Console):**
  Exibe o nome da thread e o resultado da operação realizada.

---

## 📁 Estrutura do Projeto

```bash
threads-vetor/
├── src/
│   └── Main.java
├── README.md
└── .gitignore
```

---

## ▶️ Como Executar

### Pré-requisitos

* Java instalado

### 1. Clonar o repositório

```bash
git clone <URL_DO_REPOSITORIO>
```

### 2. Acessar a pasta

```bash
cd threads-vetor
```

### 3. Compilar

```bash
javac Main.java
```

### 4. Executar

```bash
java Main
```

---

## 📚 Conceitos Abordados

* Threads
* Concorrência
* Paralelismo
* Processamento simultâneo
* Manipulação de vetores

---

## 📌 Observações

Este projeto possui caráter **acadêmico** e foi desenvolvido com o objetivo de facilitar a compreensão prática de conceitos fundamentais de **Sistemas Operacionais** e **Programação Concorrente**.

---
