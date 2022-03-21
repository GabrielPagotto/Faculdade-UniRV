# Levantamento de Requisitos

O levantamento de requisitos (também chamado elicitação de requisitos) combina elementos de
resolução de problemas, elaboração, negociação e especificação. Para encorajar uma abordagem 
colaborativa e orientada às equipes em relação ao levantamento de requisitos, os interessados 
trabalham juntos para identificar o problema, propor elementos da solução, negociar diferentes 
abordagens e especificar um conjunto preliminar de requisitos da solução.

## 5.3.1 Coleta colaborativa de requisitos

Foram propostas várias abordagens para a coleta colaborativa de requisitos. Cada uma delas faz uso de
um cenário ligeiramente diferente, porém todas aplicam alguma variação das seguintes diretrizes básicas:

* As reuniões são conduzidas por e com a participação tanto dos engenheiros de software quanto de outros interessados.
* São estabelecidas regras para preparação e participação.
* É sugerida uma agenda suficientemente formal para cobrir todos os pontos importantes, porém, suficientemente informal para encorajar o fluxo livre de ideias.
* Um “facilitador” (pode ser um cliente, um desenvolvedor ou uma pessoa de fora) dirige a reunião.
* É utilizado um “mecanismo de definições” (que pode ser planilhas, flip charts, adesivos de parede ou um boletim eletrônico, salas de bate-papo ou fóruns virtuais).

A meta é identificar o problema, propor elementos da solução, negociar diferentes abordagens e especificar um conjunto 
preliminar de requisitos da solução em uma atmosfera que seja propícia para o cumprimento da meta. Para melhor compreender
o fluxo de eventos à medida que ocorrem, apresento um breve cenário que descreve em linhas gerais a sequência
de eventos que levam à reunião para levantamento de requisitos e que acontecem durante e após a reunião.

Durante a concepção perguntas e respostas estabelecem o escopo do problema e a percepção geral de uma solução. Como resultado dessas 
reuniões iniciais, o desenvolvedor e os clientes redigem uma “solicitação de produto” de uma ou duas páginas.

São escolhidos um local, hora e data para a reunião; é escolhido um facilitador; e os membros da equipe de software e de outros 
departamentos interessados são convidados a participar. A solicitação de produto é distribuída a todos os participantes antes da data da reunião.

Como exemplo, consideremos um trecho de uma solicitação de produto redigida por uma pessoa de marketing envolvida no projeto CasaSegura. 
Esta pessoa escreve a seguinte narrativa sobre a função de segurança domiciliar que faz parte do CasaSegura:

> Nossa pesquisa indica que o mercado para sistemas de administração domiciliar está crescendo com taxas de 40% ao ano. A primeira 
> função do CasaSegura que lançaríamos no mercado seria a função de segurança domiciliar. A maioria das pessoas está familiarizada com 
> “sistemas de alarme”, de modo que seria algo fácil de vender.

> A função de segurança domiciliar protegeria e/ou reconheceria uma série de “situações” indesejáveis como acesso ilegal, incêndios, 
> inundações, níveis de monóxido de carbono e outras. Ela usará nossos sensores sem fio para detectar cada uma dessas situações. 
> Poderá ser programada pelo proprietário da casa e, automaticamente, ligará para uma agência de monitoramento quando for detectada uma situação destas.

Na realidade, outras pessoas contribuiriam para essa narrativa durante a reunião para levantamento de requisitos e um número consideravelmente maior de 
informações ficariam disponíveis. Contudo, mesmo com essas informações adicionais, a ambiguidade estaria presente, provavelmente existiriam omissões 
e poderiam ocorrer erros. Por enquanto, a “descrição funcional” anterior será suficiente.

Ao rever a solicitação de produto nos dias que antecedem a reunião, é pedido a cada participante uma lista de objetos que fazem parte do 
ambiente que cerca o sistema, outros que devem ser produzidos pelo sistema e aqueles usados pelo sistema para desempenhar suas funções. Além disso, 
pede-se a cada participante uma outra lista de serviços (processos ou funções) que manipulam ou interagem com os objetos. Por fim, também são desenvolvidas 
listas de restrições (por exemplo, custo, dimensões, regras comerciais) e de critérios de desempenho (por exemplo, velocidade, precisão). Os participantes 
são informados que não se espera que as listas sejam exaustivas, mas que reflitam a percepção do sistema de cada pessoa.

Entre os objetos descritos para o CasaSegura poderíamos ter o painel de controle, detectores de fumaça, sensores para janelas e portas, detectores de movimento, 
um alarme, um evento (por exemplo, um sensor foi ativado), um display, um PC, números de telefone, uma ligação telefônica e assim por diante. A lista de 
serviços poderia incluir configurar o sistema, acionar o alarme, monitorar os sensores, discar o telefone, programar o painel de controle e ler o display (note 
que os serviços atuam sobre os objetos). De maneira similar, cada participante irá criar listas de restrições (por exemplo, o sistema tem de reconhecer quando 
os sensores não estão operando, ser amigável, interfacear diretamente com uma linha telefônica comum) e de critérios de desempenho (por exemplo, um evento de sensor
seria reconhecido em um intervalo de um segundo e seria implementado um esquema de prioridade para os eventos).

As listas de objetos poderiam ser afixadas nas paredes da sala de reunião utilizando-se grandes folhas de papel, coladas nas paredes por meio 
de folhas adesivas ou escritas em mural. Como alternativa, poderiam ser postadas em um boletim eletrônico, em um site interno ou colocadas em um 
ambiente de salas de bate-papo para revisão antes da reunião. De modo ideal, cada entrada deveria ser capaz de ser manipulada separadamente, de modo que as listas 
pudessem ser combinadas, as entradas modificadas e adições feitas. Nesse estágio, críticas e polêmicas são estritamente proibidas.

Depois de as listas individuais terem sido apresentadas, o grupo cria uma lista combinada eliminando entradas redundantes, acrescentando quaisquer ideias 
novas que surjam durante a discussão, mas não se elimina nada. Segue-se então uma discussão (coordenada pelo facilitador). A lista combinada é reduzida, 
ampliada ou escrita de outra maneira para refletir apropriadamente o produto/sistema a ser desenvolvido. O objetivo é criar uma lista consensual deobjetos, 
serviços, restrições e desempenho para o sistema a ser construído.

Em muitos casos, um objeto ou serviço descrito em uma lista exigirá maiores explicações. Para tanto, os interessados desenvolvem miniespecificações para 
as entradas das listas. Cada miniespecificação é a elaboração de um objeto ou serviço. Por exemplo, a miniespecificação para o objeto **Control Panel** do CasaSegura 
poderia ser:

> O painel de controle é a unidade que pode ser montada na parede com tamanho aproximado de 9 x 5 polegadas. O painel de controle possui conectividade 
> sem fio a sensores e a um PC. A interação com os usuários ocorre com um teclado numérico contendo 12 teclas. Um display colorido LCD de 3 x 3 polegadas 
> fornece o feedback do usuário. O software fornece prompts interativos, eco e funções similares.

As miniespecificações são apresentadas a todos os interessados para discussão. Adições, supressões e mais detalhamentos são feitos. Em alguns casos, 
o desenvolvimento de miniespecificações irá revelar novos objetos, serviços, restrições, ou requisitos de desempenho acrescentados às listas originais. 
Durante todas as discussões, a equipe pode levantar um assunto que não pode ser resolvido durante a reunião. É mantida uma lista de questões pendentes para que 
essas ideias sejam trabalhadas posteriormente.

[](resources/reqsoft3image_1.png)

## 5.3.2 Disponibilização da função de qualidade
A disponibilização da função de qualidade (quality function deployment, QFD) é uma técnica de gestão da qualidade que traduz as necessidades do 
cliente para requisitos técnicos do software. O QFD “concentra-se em maximizar a satisfação do cliente por meio do processo de engenharia de software”. 
Para tanto, enfatiza o entendimento daquilo que é valioso para o cliente e emprega esses valores ao longo do processo de engenharia. O QFD identifica três 
tipos de necessidades:

* **Requisitos normais:** Refletem os objetivos e metas estabelecidos para um produto ou sistema durante reuniões com o cliente. Se esses requisitos estiverem 
presentes, o cliente fica satisfeito. Exemplos de requisitos normais poderiam ser tipos de displays gráficos solicitados, funções de sistema específicas e 
níveis de desempenho definidos.
* **Requisitos esperados:** Esses requisitos estão implícitos no produto ou sistema e podem ser tão fundamentais que o cliente não os declara explicitamente. 
Sua ausência será causa de grande insatisfação. Exemplos de requisitos esperados são: facilidade na interação homem–máquina, confiabilidade e correção 
operacional global e facilidade na instalação do software.
* **Requisitos fascinantes:** Esses recursos vão além da expectativa dos clientes e demonstram ser muito satisfatórios quando presentes. Por exemplo, 
o software para um novo celular vem com recursos-padrão, mas junto vem um conjunto de capacidades não esperadas (por exemplo, tecla multitoque, correio de 
voz visual) que deleitam todos os usuários do produto.

Embora os conceitos QFD possam ser aplicados ao longo de todo o processo de software, técnicas QFD específicas são aplicáveis à atividade de levantamento 
de requisitos. O QFD usa observação e entrevistas com clientes, pesquisas e exame de dados históricos (por exemplo, relatórios de problemas) como dados 
brutos para a atividade de levantamento de requisitos. Esses dados são então traduzidos em uma tabela de requisitos — denominada tabela da voz do cliente — 
revisada com o cliente e outros interessados. Uma série de diagramas, matrizes e métodos de avaliação é então usada para extrair os requisitos esperados 
e para tentar obter os requisitos fascinantes.
