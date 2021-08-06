// SFINAE - Substitution Failure Is Not An Error


/* Este recurso é usado na metaprogramação de template. 
Se ao tentar instanciar uma template for detectada 
uma falha no cabeçalho (por exemplo, um método ou operador 
é usado mas ele não existe na classe que substituiu o tipo) 
isso não gera um erro de compilação - apenas o compilador 
segue em frente tentando encontrar outra template que case
com os parâmetros passados. 

Essa regra se aplica durante a resolução de sobrecarga de templates 
de função: Quando a substituição do tipo explicitamente especificado 
ou deduzido pelo parâmetro do template falha, a especialização é 
descartada do conjunto de sobrecarga em vez de causar um erro de compilação.

*/ 
