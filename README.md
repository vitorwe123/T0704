
## T0704 
T0704 consiste no cojunto de 3 softwares construíds para o uso diário, programados na Linguagem C.

## <?>
**T0704** utiliza **<?>** como arquitetura de construção e padrão de notação.
**<?>**, ou <sigla>, é uma arquitetura de construção e padrão de notação focado na organização e esclarescimento de softwares de uso comum.

**<sigla>** Baseia-se na divisão do script por 4 simples partes. São elas:
- Parte 1, Declaração de Variáveis
- Parte 2, Interação com o Usuário e Coleta de Dados
- Parte 3, Trabalho da Máquina
- Parte 4, Interação Final com o Usuário

Além disso, **<?>** determina que os softwares sejam construídos através de dois métodos: _check e main_.
> A função _check_ valida os valores inseridos pelo Usuário, enquanto a função _main_ executa o programa e suas respectivas Partes.

Existem, da mesma forma, notações de agentes padrões dentro de todos os códigos: _Usuário, Máquina e Mensagens de Interação_.

> Por arquitetar softwares de uso trivial, <sigla> possui um entendimento muito intuitivo, e auxilia programadores a entenderem os códigos e a editá-los, caso necessário.

*<?>*, a fim de auxiliar programadores, também suporta **construção audiovisual** da _Parte 3, Trabalho da Máquina_ - essa que geralmente demanda mais atenção.
Durante a construção dos softwares, várias **produções audiovisuais** foram projetadas para auxiliar na visualização dessa etapa do código.



## Software 1 
### (Script Primitivo)

O Software 1 possui **duas versões**: _Script Primitivo_ e _Script Refinado_. 
As duas versões se diferenciam pela _Parte 3, Trabalho da Máquina_, por apresentar diferentes mecanismos de manipulação dos dados.

O objetivo do Software 1 é calcular a média aritmética das notas de uma equipe de ginástica olímpica. Porém, de todas as seis notas dos atletas, o cálculo desse valor utiliza as quatro maiores da equipe.

Como o próprio nome anuncia, por mais que execute seu trabalho corretamente, o _Script Primitivo_ acaba se tornando um **código denso e de difícil visualização**.

(Software 1 (Script Primitivo) - Parte 3, Trbalho da Máquina - Video)

### (Script Refinado)

Com o mesmo objetivo que o Software 1 (Script Primitivo), essa versão trabalha com os mesmos dados e interações que sua versão anterior.

A Parte 3, Trabalho da Máquina do Software 1 (Script Refinado), apresenta um laço *For Loop*, que manipula os dados com **mais clareza e simplicidade** comparado ao _Script Primitivo_.

> Essa versão se torna a oficial entre os dois códigos.

(Software 1 (Script Refinado) - Parte 3, Trbalho da Máquina - Video)



## Software 2

O Software 2 possui como objetivo calcular a média avaliativa de um aluno a partir de quatro notas (pesos iguais) inseridas. Três das notas inseridas são provas, e a última é uma nota de trabalho.

Há, porém, uma **condição** inserida na nota do trabalho, e, dependendo de sua validade, o programa irá tomar um entre dois possíveis caminhos.

- Caso há valor maior do que zero inserido no trabalho, o programa calcula normalmente a média avaliativa.

- Caso essa nota seja igual a 0, o programa compreende
que ele ainda não foi realizado, e informa ao Usuário a nota necessária, a fim de atingir
média sete.

(Software 2 - Parte 3, Trbalho da Máquina - Video)

Software 3
