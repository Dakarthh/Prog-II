
Questão 3.

q é um ponteiro para o inteiro 42
r é um ponteiro para o inteiro 100
r passa a apontar para o mesmo endereço de q
logo o valor de r e q é 42

q2 é um ponteiro compartilhado que aponta para o inteiro 42
r2 é um ponteior compartilhado que aponta para o inteiro 100
r2 começou a apontar para o mesmo endereço de q2
r2 e q2 agora tem o mesmo valor

As diferenças entre os ponteiros é que r e q apontam para o mesmo endereço e se um deles for deletado, ambos apontariam para lugar algum, já com os ponteiros inteligentes, ao deletar um dos dois, o outro ainda apontaria para o endereço de memoria por que ambos apontam para um endereço compartilhado


Questão 4.

Não, o parametro da função recebe um ponteiro compartilhado do tipo inteiro, logo seria process(p), sem a necessidade de declarar que é um ponteiro compartilhado

Questão 5.

Não, pois ao atribuir o ponteiro bruto de p em c o ponteiro inteligente c desconhece a origem e acabam liberando o mesmo endereço de memoria duas vezes pois desconhecem a referencia um do outro
