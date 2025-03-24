#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>//se algo quebrar, ver essa biblioteca

int main()
{
	
	int jogar,sair,comecar,jogando,rodada;
	char failsafe,j1[30],j2[30];
	
	//gousmas
	int f1,f2,fA,fB,acao,fimacao,atacar,separar,sepf,v1,v2,vA,vB,turno;
	char gousma1,gousmaA,gousma2,gousmaB;
	
	/*Titulo do Jogo*/
	printf("\t_____________________________________________________________________________________\n");
    printf("\t)  ___  __  __  __  _  __  _____  ______  ___  __  _____      __  _  __  _  ____    (\n");
	printf("\t) /\\  `'  \\/\\ \\/\\ `\\ \\/\\ \\/\\   _\\/\\  __ \\/\\  `'  \\/\\  ==:    /\\ \\\\ \\/\\ \\\\ \\/\\   `   (\n");
	printf("\t) \\ \\      \\ \\ \\ \\    \\ \\ \\ \\ \\_-- \\ --- \\ \\      \\ \\  ==:   \\ \\    \\ \\ \\\\ \\ \\  <   (\n");
	printf("\t)  \\ \\_\\`'\\_\\ \\_\\ \\_\\`_\\ \\_\\ \\____\\ \\_\\-\\_\\ \\_\\`'\\_\\ \\____\\   \\ \\_\\\\_\\ \\____\\ \\___' (\n");
	printf("\t)   \\/_/ \\/_/\\/_/\\/_//_/\\/_/\\/____/\\/_/\\/_/\\/_/ \\/_/\\/____/    \\/_//_/\\/____/\\/___/ (\n");
	printf("\t)___________________________________________________________________________________(\n");
	
	while(1)
	{
		/*Opcoes*/
		printf("\n\t=====================================================================================");
		printf("\n\n\tESCOLHA UM MODO DE JOGO E DIGITE O SEU NUMERO PARA JOGAR!!\n\n");
	   	printf("\t1: Pergunta e Resposta\n");
	   	printf("\t2: Cobra na Caixa!\n");
	   	printf("\t3: Gousmas War\n");
	   	printf("\t4: Sair do Programa\n\n");
	   	printf("\tDIGITE UM DOS NUMEROS PARA CONTINUAR: ");
			  	
		jogar = 0;
			  	
	   	scanf("%i", &jogar);
	   	
	   	if (jogar != 0){
		   		  
			//Pergunta e Resposta-----------------------------------------------------------------------------------------------------------------------------
			if(jogar == 1)
			{
				printf("\n\t---------------------------");
				printf("\n\t| - Pergunta e Resposta - |");
				printf("\n\t---------------------------");
				printf("\n\n\t  Responda 5 perguntas e descubra o quao esperto voce e em matematica basica!");
				printf("\n\n\t-= MODO DE JOGO =-\n\n\t-Digite a sua resposta.\n\t\t-E so isso.\n\t\t-Serio.");
				printf("\n\n\tPara comecar, digite 1 novamente: ");
				jogando = 0;
				scanf("%i",&jogando);
				while(jogando == 1){
				   	char pergunta[10]; 
    			   	int respostacorreta1 = 3; 
   	   	   	    	int respostacorreta2 = 4; 
 	   	  	    	int respostacorreta3 = 1; 
  	  	  	    	int respostacorreta4 = 1; 
 	   	  	    	int respostacorreta5 = 2; 
 	   	  	    	int respostadousuario;
 	   	  	    	int total;
 	   	  	    	total = 0;
 	   	  	    	printf("\n\t------------------------------------------------------------------------------------------------------------");
					//1 questao
    				printf("\n\tQual o resultado de 5 + 3?\n\t\t1) 6\n\t\t2) 7\n\t\t3) 8\n\t\t4) 9\n\tDigite a sua resposta: ");
    				scanf("%s", pergunta);
    				respostadousuario = atoi(pergunta);
    				if (respostadousuario == respostacorreta1){
    			    	printf("\n\tResposta correta!\n\n");
    			    	total++;
    				}else{
       	   	    		printf("\n\tResposta incorreta! A resposta correta e %i) 8!\n\n",respostacorreta1);
   	   	   	    	}
					//2 questao 
					printf("\tQuantos lados tem um triangulo?\n\t\t1) 4\n\t\t2) 9\n\t\t3) -3\n\t\t4) 3\n\tDigite a sua resposta: ");
					scanf("%s", pergunta);
					respostadousuario = atoi(pergunta);
					if (respostadousuario == respostacorreta2) {
        				printf("\n\tResposta correta!\n\n");
        				total++;
    				} else {
        				printf("\n\tResposta incorreta! A resposta correta e %i) 3!\n\n",respostacorreta2);
    				}
					//3 questao
    				printf("\tQual o proximo numero na sequencia: 2, 4, 6, ...?\n\t\t1) 8\n\t\t2) 12\n\t\t3) 10\n\t\t4) 9999\n\tDigite a sua resposta: ");
    				scanf("%s", pergunta);
    				respostadousuario = atoi(pergunta);
				    if (respostadousuario == respostacorreta3) {
        				printf("\n\tResposta correta!\n\n");
        				total++;
    				} else {
        				printf("\n\tResposta incorreta! A resposta correta e %i) 8!\n\n",respostacorreta3);
    				}
					//4 questao
    				printf("\t10+2*(6-3)?\n\t\t1) 16\n\t\t2) 36\n\t\t3) 4\n\t\t4) 8\n\tDigite a sua resposta: ");
    				scanf("%s", pergunta);
    				respostadousuario = atoi(pergunta);
				    if (respostadousuario == respostacorreta4) {
        				printf("\n\tResposta correta!\n\n");
        				total++;
    				} else {
        			printf("\n\tResposta incorreta! A resposta correta e %i) 16!\n\n",respostacorreta4);
    				}
					//5 questao 
    				printf("\tQuanto e 3 x 3?\n\t\t1) 1\n\t\t2) 9\n\t\t3) 4\n\t\t4) 16\n\tDigite a sua resposta: ");
    				scanf("%s", pergunta);
    				respostadousuario = atoi(pergunta);
				    if (respostadousuario == respostacorreta5) {
        				printf("\n\tResposta correta!\n\n");
        				total++;
    				} else {
        			printf("\n\tResposta incorreta! A resposta correta e %i) 9!\n\n",respostacorreta5);
    				}
					printf("\n\t============================================================================================================");
					printf("\n\tVoce acertou %i de 5 questoes!",total);
					printf("\n\t============================================================================================================");
					printf("\n\n\tVoce deseja jogar de novo? Digite 1 novamente para recomecar: ");
					jogando = 0;
					scanf("%i",&jogando);
				}
			}				 		  		
			//Cobra na Caixa!---------------------------------------------------------------------------------------------------------------------------------
			if(jogar == 2)
			{
				printf("\n\t-----------------------");
				printf("\n\t| - Cobra na Caixa! - |");
				printf("\n\t-----------------------");
				printf("\n\n\t   Nas profundezas das tumbas egipcias do Farao Esquecido, conhecida por esconder riquezas\n\timensuraveis, dois exploradores estao para se tornar vitimas de uma armadilha mortal.\n\t   Dentro de uma sala trancada com cinco caixas no centro, os exploradores encontram uma tabua com\n\tinstrucoes escritas em uma lingua antiga...");
				printf("\n\n\t-= PARA AQUELES QUE FORAM TRAIDOS PELA GANANCIA =-\n\n\t-Ao centro deste salao existem cinco caixas sorteadas:\n\t\t-UMA caixa possui um mecanismo que abrira uma passagem para a superficie.\n\t\t-UMA caixa esconde uma serpente magica e letal, cria de Apofis\n\t\t-As TRES caixas restantes nao contem nada.\n\t-Cada aventureiro que estiver presente deve abrir uma caixa, um de cada vez, alternadamente.\n\t\t-Caso um dos aventureiros abra a caixa contendo a serpente, ela matara todos os\n\t\taventureiros presentes.\n\t\t-Caso um aventureiro ache o mecanismo, todos os aventureiros terao a oportunidade\n\t\tde escapar para a superficie.\n\t\t-Caso um aventureiro abra uma caixa vazia, as caixas serao sorteadas novamente,\n\t\tsendo assim, a serpente e o mecanismo poderao mudar de caixa.");
				printf("\n\n\tPara comecar, digite 2 novamente: ");
				comecar = 0;
				scanf("%i",&comecar);
				while(comecar == 2){
					
					int selecao,cobra,botao,nome1,nome2,abrir,abrindo,fimdejogo;
					
					//pre jogo
					nome1 = 0;
					nome2 = 0;
					while(nome1 == nome2){
						selecao = 1;
						while(selecao == 1){
							printf("\n\tPara o JOGADOR 1, escolha um desses nomes:\n\t\t.Renata (1)\n\t\t.Polyana (2)\n\t\t.Pedro (3)\n\t\t.Ricardo (4)\n\t\t.Gousma Perdida (5)\n\t\t.Alessandra (6)\n\t\t.Erick (7)\n\tEscolha um numero: ");
							scanf("%i",&nome1);
							scanf("%c",&failsafe);
							if(nome1 >= 1 && nome1 <= 7){
								selecao = 2;	
							}else{
								printf("\n\tO programa nao reconhece este numero!\n");
							}
						}
						while(selecao == 2){
							printf("\n\tPara o 	JOGADOR 2, escolha um desses nomes:\n\t\t.Renata (1)\n\t\t.Polyana (2)\n\t\t.Pedro (3)\n\t\t.Ricardo (4)\n\t\t.Gousma Perdida (5)\n\t\t.Alessandra (6)\n\t\t.Erick (7)\n\tEscolha um numero: ");
							scanf("%i",&nome2);
							scanf("%c",&failsafe);
							if(nome2 >= 1 && nome2 <= 7){
								selecao = 0;	
							}else{
								printf("\n\tO programa nao reconhece este numero!\n");
							}
						}
						if(nome1 == nome2){
							printf("\n\t------------------------------------------------------------------------------------------------------------");
							printf("\n\tDois jogadores nao podem ter o mesmo nome!");
							printf("\n\t------------------------------------------------------------------------------------------------------------\n");
							selecao = 1;
						}
					}
					
					//decide quem joga primeiro
					srand((unsigned)time(NULL));
					rodada = (rand() % 2);
										
					jogando = 1;
					fimdejogo = 0;
					
					//jogo comeca
					while(jogando == 1){
						
						//jogo aleatoriza as caixas
						printf("\n\t------------------------------------------------------------------------------------------------------------");
						printf("\n\n\tAs caixas comecam a se mexer...\n");
						cobra = 0;
						botao = 0;
						while(cobra == botao){
							srand((unsigned)time(NULL));
						   	cobra = (rand() % 5) + 1;
						   	botao = (rand() % 5) + 1;
					   	}
						
						printf("\n\t ______  \t\t\t ______  \t\t\t ______  ");
					    printf("\n\t|\\     \\ \t\t\t|\\     \\ \t\t\t|\\     \\ ");
					    printf("\n\t| \\_____\\ \t\t\t| \\_____\\ \t\t\t| \\_____\\ ");
					    printf("\n\t| |     |\t\t\t| |     |\t\t\t| |     |");
					    printf("\n\t\\ | (1) |\t\t\t\\ | (2) |\t\t\t\\ | (3) |");
					    printf("\n\t \\|_____|\t\t\t \\|_____|\t\t\t \\|_____|");
					    printf("\n\n\t\t\t ______  \t\t\t ______  ");
					    printf("\n\t\t\t|\\     \\ \t\t\t|\\     \\ ");
					    printf("\n\t\t\t| \\_____\\ \t\t\t| \\_____\\ ");
					    printf("\n\t\t\t| |     |\t\t\t| |     |");
					    printf("\n\t\t\t\\ | (4) |\t\t\t\\ | (5) |");
					    printf("\n\t\t\t \\|_____|\t\t\t \\|_____|");
						printf("\n\n\tAs caixas param de se mexer...\n");
						
						//printf("%i  %i",cobra,botao);//colocar como comentario ao final
						
						if(rodada == 0){
							abrindo = 1;
							while(abrindo == 1){
								printf("\n\tJogador ");
								//nome
								if(nome1 == 1){
									printf("Renata");
								}else if(nome1 == 2){
									printf("Polyana");
								}else if(nome1 == 3){
									printf("Pedro");
								}else if(nome1 == 4){
									printf("Ricardo");
								}else if(nome1 == 5){
									printf("Gousma Perdida");
								}else if(nome1 == 6){
									printf("Alessandra");
								}else if(nome1 == 7){
									printf("Erick");
								}
								//escolha da caixa
								abrir = 0;
								printf(", escolha qual caixa voce deseja abrir: ");
								scanf("%i",&abrir);
								scanf("%c",&failsafe);
								if(abrir <= 5 && abrir >= 1){
									if(abrir == cobra){
										printf("\n\t--Voce ouve um rastejar ao abrir a caixa...--\n\n\tAntes que os aventureiros possam tomar conta da situacao,\n\tuma serpente salta pra fora da caixa e os ataca em uma velocidade\n\tinimaginavel.");
										fimdejogo = 1;
										abrindo = 0;
									}else if(abrir == botao){
										printf("\n\t--Voce ouve um som metalico ao abrir a caixa...--\n\n\tOs aventureiros encontram o suposto mecanismo que pode abrir uma passagem\n\tpara a liberdade. Sem outras opcoes, eles apertam o botao do mecanismo e\n\tum ruido ecoa pela sala. Uma parede se moveu, revelando uma escadaria.");
										fimdejogo = 2;
										abrindo = 0;
									}
									if(abrir != cobra && abrir != botao){
										printf("\n\tA caixa e aberta, mas nao ha nada dentro dela.");
										abrindo = 0;
										//incrementa a rodada
										rodada++;
									}
								}else{
									printf("\n\tO programa nao reconhece este numero!\n");
								}
							}
						}else{
							abrindo = 1;
							while(abrindo == 1){
								printf("\n\tJogador ");
								//nome
								if(nome2 == 1){
									printf("Renata");
								}else if(nome2 == 2){
									printf("Polyana");
								}else if(nome2 == 3){
									printf("Pedro");
								}else if(nome2 == 4){
									printf("Ricardo");
								}else if(nome2 == 5){
									printf("Gousma Perdida");
								}else if(nome2 == 6){
									printf("Alessandra");
								}else if(nome2 == 7){
									printf("Erick");
								}
								//escolha da caixa
								abrir = 0;
								printf(", escolha qual caixa voce deseja abrir: ");
								scanf("%i",&abrir);
								scanf("%c",&failsafe);
								if(abrir <= 5 && abrir >= 1){
									if(abrir == cobra){
										printf("\n\t--Voce ouve um rastejar ao abrir a caixa...--\n\n\tAntes que os aventureiros possam tomar conta da situacao,\n\tuma serpente salta pra fora da caixa e os ataca em uma velocidade\n\tinimaginavel.");
										fimdejogo = 1;
										abrindo = 0;
									}else if(abrir == botao){
										printf("\n\t--Voce ouve um som metalico ao abrir a caixa...--\n\n\tOs aventureiros encontram o suposto mecanismo que pode abrir uma passagem\n\tpara a liberdade. Sem outras opcoes, eles apertam o botao do mecanismo e\n\tum ruido ecoa pela sala. Uma parede se moveu, revelando uma escadaria.");
										fimdejogo = 2;
										abrindo = 0;
									}
									if(abrir != cobra && abrir != botao){
										printf("\n\tA caixa e aberta, mas nao ha nada dentro dela.");
										abrindo = 0;
										//decrementa a rodada
										rodada--;
									}
								}else{
									printf("\n\tO programa nao reconhece este numero!\n");
								}
							}
						}
						
						//fim de jogo
						if(fimdejogo == 1){
							printf("\n\t------------------------------------------------------------------------------------------------------------");
							printf("\n\t============================================================================================================");
							printf("\n\tOs aventureiros sucumbem ao veneno letal da serpente. FIM DE JOGO...");
							printf("\n\t============================================================================================================");
							jogando = 0;
						}else if(fimdejogo == 2){
							printf("\n\t------------------------------------------------------------------------------------------------------------");
							printf("\n\t============================================================================================================");
							printf("\n\tOs aventureiros escapam da armadilha e vivem para contar as suas historias. FIM DE JOGO!!!");
							printf("\n\t============================================================================================================");
							jogando = 0;
						}
					}
					comecar = 0;
					printf("\n\n\tVoce deseja jogar de novo? Digite 2 caso queira reiniciar o jogo: ");
					scanf("%i",&comecar);
				}
			}
				 		
	   	   	//Gousmas War-------------------------------------------------------------------------------------------------------------------------------------
			if(jogar == 3)
			{
				printf("\n\t-------------------");
				printf("\n\t| - Gousmas War - |");
				printf("\n\t-------------------");
				printf("\n\n\t   Em uma terra distante, criaturas chamadas de \"Gousmas\" enfrentam-se em uma guerra sem fim.\n\t   Certo dia, adentrando uma foresta escura, duas duplas de Gousmas de faccoes adversas se encontraram,\n\tiniciando mais uma feroz batalha na historia da especie...");
				printf("\n\n\t-= MODO DE JOGO =-\n\n\t-Cada jogador comecara com duas Gousmas. O objetivo do jogo e desintegrar todas as Gousmas do adversario.\n\t-Ao inicio de cada rodada, cada Gousma presente recebera +1 Furia.\n\t-Em seu turno, o jogador decide se vai ATACAR, SEPARAR ou ESPERAR:\n\t\t-ATACAR > A Gousma transfere todos os seus PONTOS DE FURIA (PF) para a Gousma adversaria escolhida;\n\t\t-SEPARAR > Caso so exista uma Gousma e esta tenha 2 ou mais PF, ela pode se separar, criando outra \n\t\tGousma e repartindo os PF do modo que o jogador quiser;\n\t\t\t-Portanto, so pode haver no maximo duas Gousmas em cada time.\n\t\t\t-Uma Gousma nao pode se separar caso tenha menos de 2 PF.\n\t\t-ESPERAR > A Gousma nao faz nada, pulando a sua acao.\n\t-Se, ao final de uma acao, uma Gousma tiver 6 ou mais PF, ela se DESINTEGRA.\n\t\t-Caso a Gousma tenha 6 PF por conta do inicio da rodada, ela tambem se desintegrara.\n\t");
				printf("\n\n\tPara comecar, digite 3 novamente: ");
				comecar = 0;
				scanf("%i",&comecar);
				while(comecar == 3){
					
					
					
					//pre jogo
					printf("\n\tDigite o nome do PRIMEIRO JOGADOR: ");
					scanf("%s",&j1);
					printf("\n\tDigite o nome do SEGUNDO JOGADOR: ");
					scanf("%s",&j2);
					jogando = 1;
					rodada = 1;
					turno = 1;
					gousma1 = 'O';
					gousma2 = 'O';
					gousmaA = 'O';
					gousmaB = 'O';
					v1 = 1;
					v2 = 1;
					vA = 1;
					vB = 1;
					f1 = 1;
					f2 = 1;
					fA = 1;
					fB = 1;
					
					//jogo comeca
					while(jogando == 1){
					   	printf("\n\t------------------------------------------------------------------------------------------------------------\n\n\tRodada %i",rodada);
					   	printf("\n\n\t-= %s =-",j1);
					   	printf("\n\n\tGousma 1: %c (Furia: %i)                          Gousma 2: %c (Furia: %i)",gousma1,f1,gousma2,f2);
					   	printf("\n\n\n\n\n\n\n\t\t\t\t\tGousma A: %c (Furia: %i)                          Gousma B: %c (Furia: %i)",gousmaA,fA,gousmaB,fB);
					   	printf("\n\n\t\t\t\t\t-= %s =-",j2);
					   	
					   	//Turno da Gousma 1
					   	if(turno == 1){
					 		if(v1 == 1){
					   	   		acao = 0;
					   	   		fimacao = 0;
			   		   			while(fimacao == 0){
			   		   				printf("\n\n\t Turno do jogador %s, selecione uma acao para a GOUSMA 1:\n\t  .ATACAR (1)\n\t  .DIVIDIR (2)\n\t  .ESPERAR (3)\n\tDigite o numero: ",j1);
							   		scanf("%i",&acao);
							   		scanf("%c",&failsafe);
							   	
							   		//ATACAR-----------
									if(acao == 1){
										while(acao == 1){
											printf("\n\tSelecione uma Gousma inimiga para ATACAR:\n\t  .Gousma A (1)\n\t  .Gousma B (2)\n\tDigite o numero: ");
											scanf("%i",&atacar);
							   		   	   	scanf("%c",&failsafe);
											if(atacar == 1 && vA == 1){
												fA = fA + f1;
												f1 = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma 1 ATACOU a Gousma A com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar == 2 && vB == 1){
												fB = fB + f1;
												f1 = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma 1 ATACOU a Gousma B com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar != 1 || atacar != 2){
									   	   		printf("\n\tO programa nao pode ler isto nesse momento!");
									   	   		atacar = 0;
											}
										}
									}else if(acao == 2){//SEPARAR--------------
										if(f1 < 6 && f1 > 1 && v2 == 0){
									   		printf("\n\tPara SEPARAR a Gousma 1, decida quanto PF a Gousma 2 recebera!\n\tDigite o numero: ");
											while(acao == 2){
									   	   		scanf("%i",&sepf);
									  	    	separar = f1 - sepf;
												if(separar < 1){
											  	   	printf("\n\tA Gousma 1 nao consegue se dividir sem sobrar PF. Escolha outro numero: ");
												}else if(separar >= 1){
													f1 = separar;
													f2 = sepf;
													v2 = 1;
													gousma2 = 'O';
													acao = 0;
													fimacao = 1;
													printf("\n\t------------------------------------------------------------------------------------------------------------");
													printf("\n\tA Gousma 1 se separou, formando uma outra Gousma 2 com %i PF!",f2);
												}
												scanf("%c",&failsafe);
											}
										}else{
											printf("\n\tNao e possivel SEPARAR a Gousma 1 com a Gousma 2 ainda nao desintegrada!");
										}
									}else if(acao == 3){//ESPERAR--------------
										printf("\n\t------------------------------------------------------------------------------------------------------------");
										printf("\n\tA Gousma 1 ESPERA, pulando o seu turno!");
										acao = 0;
										fimacao = 1;
									}else if((acao != 1 || acao != 2 || acao != 3) && fimacao == 0){
									   	printf("\n\tO programa nao pode ler isto nesse momento!");
										acao = 0;
									}
						   		}
							}else if(v1 == 0){
								printf("\n\t------------------------------------------------------------------------------------------------------------");
								printf("\n\tA Gousma 1 esta desintegrada, portanto o seu turno foi pulado!");
							}
						}
						//Turno da Gousma A
					   	if(turno == 2){
					 		if(vA == 1){
					   	   		acao = 0;
					   	   		fimacao = 0;
			   		   			while(fimacao == 0){
			   		   				printf("\n\n\t Turno do jogador %s, selecione uma acao para a GOUSMA A:\n\t  .ATACAR (1)\n\t  .DIVIDIR (2)\n\t  .ESPERAR (3)\n\tDigite o numero: ",j2);
							   		scanf("%i",&acao);
							   		scanf("%c",&failsafe);
							   	
							   		//ATACAR-----------
									if(acao == 1){
										while(acao == 1){
											printf("\n\tSelecione uma Gousma inimiga para ATACAR:\n\t  .Gousma 1 (1)\n\t  .Gousma 2 (2)\n\tDigite o numero: ");
											scanf("%i",&atacar);
							   		   	   	scanf("%c",&failsafe);
											if(atacar == 1 && v1 == 1){
												f1 = f1 + fA;
												fA = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma A ATACOU a Gousma 1 com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar == 2 && v2 == 1){
												f2 = f2 + fA;
												fA = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma A ATACOU a Gousma 2 com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar != 1 || atacar != 2){
									   	   		printf("\n\tO programa nao pode ler isto nesse momento!");
									   	   		atacar = 0;
											}
										}
									}else if(acao == 2){//SEPARAR--------------
										if(fA < 6 && fA > 1 && vB == 0){
									   		printf("\n\tPara SEPARAR a Gousma A, decida quanto PF a Gousma B recebera!\n\tDigite o numero: ");
											while(acao == 2){
									   	   		scanf("%i",&sepf);
									  	    	separar = fA - sepf;
												if(separar < 1){
											  	   	printf("\n\tA Gousma A nao consegue se dividir sem sobrar PF. Escolha outro numero: ");
												}else if(separar >= 1){
													fA = separar;
													fB = sepf;
													vB = 1;
													gousmaB = 'O';
													acao = 0;
													fimacao = 1;
													printf("\n\t------------------------------------------------------------------------------------------------------------");
													printf("\n\tA Gousma A se separou, formando uma outra Gousma B com %i PF!",fB);
												}
												scanf("%c",&failsafe);
											}
										}else{
											printf("\n\tNao e possivel SEPARAR a Gousma A com a Gousma B ainda nao desintegrada!");
										}
									}else if(acao == 3){//ESPERAR--------------
										printf("\n\t------------------------------------------------------------------------------------------------------------");
										printf("\n\tA Gousma A ESPERA, pulando o seu turno!");
										acao = 0;
										fimacao = 1;
									}else if((acao != 1 || acao != 2 || acao != 3) && fimacao == 0){
									   	printf("\n\tO programa nao pode ler isto nesse momento!");
										acao = 0;
									}
						   		}
							}else if(vA == 0){
								printf("\n\t------------------------------------------------------------------------------------------------------------");
								printf("\n\tA Gousma A esta desintegrada, portanto o seu turno foi pulado!");
							}
						}
						//Turno da Gousma 2
					   	if(turno == 3){
					 		if(v2 == 1){
					   	   		acao = 0;
					   	   		fimacao = 0;
			   		   			while(fimacao == 0){
			   		   				printf("\n\n\t Turno do jogador %s, selecione uma acao para a GOUSMA 2:\n\t  .ATACAR (1)\n\t  .DIVIDIR (2)\n\t  .ESPERAR (3)\n\tDigite o numero: ",j1);
							   		scanf("%i",&acao);
							   		scanf("%c",&failsafe);
							   	
							   		//ATACAR-----------
									if(acao == 1){
										while(acao == 1){
											printf("\n\tSelecione uma Gousma inimiga para ATACAR:\n\t  .Gousma A (1)\n\t  .Gousma B (2)\n\tDigite o numero: ");
											scanf("%i",&atacar);
							   		   	   	scanf("%c",&failsafe);
											if(atacar == 1 && vA == 1){
												fA = fA + f2;
												f2 = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma 2 ATACOU a Gousma A com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar == 2 && vB == 1){
												fB = fB + f2;
												f2 = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma 2 ATACOU a Gousma B com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar != 1 || atacar != 2){
									   	   		printf("\n\tO programa nao pode ler isto nesse momento!");
									   	   		atacar = 0;
											}
										}
									}else if(acao == 2){//SEPARAR--------------
										if(f2 < 6 && f2 > 1 && v1 == 0){
									   		printf("\n\tPara SEPARAR a Gousma 2, decida quanto PF a Gousma 1 recebera!\n\tDigite o numero: ");
											while(acao == 2){
									   	   		scanf("%i",&sepf);
									  	    	separar = f2 - sepf;
												if(separar < 1){
											  	   	printf("\n\tA Gousma 2 nao consegue se dividir sem sobrar PF. Escolha outro numero: ");
												}else if(separar >= 1){
													f2 = separar;
													f1 = sepf;
													v1 = 1;
													gousma1 = 'O';
													acao = 0;
													fimacao = 1;
													printf("\n\t------------------------------------------------------------------------------------------------------------");
													printf("\n\tA Gousma 2 se separou, formando uma outra Gousma 1 com %i PF!",f1);
												}
												scanf("%c",&failsafe);
											}
										}else{
											printf("\n\tNao e possivel SEPARAR a Gousma 2 com a Gousma 1 ainda nao desintegrada!");
										}
									}else if(acao == 3){//ESPERAR--------------
										printf("\n\t------------------------------------------------------------------------------------------------------------");
										printf("\n\tA Gousma 2 ESPERA, pulando o seu turno!");
										acao = 0;
										fimacao = 1;
									}else if((acao != 1 || acao != 2 || acao != 3) && fimacao == 0){
									   	printf("\n\tO programa nao pode ler isto nesse momento!");
										acao = 0;
									}
						   		}
							}else if(v2 == 0){
								printf("\n\t------------------------------------------------------------------------------------------------------------");
								printf("\n\tA Gousma 2 esta desintegrada, portanto o seu turno foi pulado!");
							}
						}
						//Turno da Gousma B
					   	if(turno == 4){
					 		if(vB == 1){
					   	   		acao = 0;
					   	   		fimacao = 0;
			   		   			while(fimacao == 0){
			   		   				printf("\n\n\t Turno do jogador %s, selecione uma acao para a GOUSMA B:\n\t  .ATACAR (1)\n\t  .DIVIDIR (2)\n\t  .ESPERAR (3)\n\tDigite o numero: ",j2);
							   		scanf("%i",&acao);
							   		scanf("%c",&failsafe);
							   	
							   		//ATACAR-----------
									if(acao == 1){
										while(acao == 1){
											printf("\n\tSelecione uma Gousma inimiga para ATACAR:\n\t  .Gousma 1 (1)\n\t  .Gousma 2 (2)\n\tDigite o numero: ");
											scanf("%i",&atacar);
							   		   	   	scanf("%c",&failsafe);
											if(atacar == 1 && v1 == 1){
												f1 = f1 + fB;
												fB = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma B ATACOU a Gousma 1 com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar == 2 && v2 == 1){
												f2 = f2 + fB;
												fB = 0;
												printf("\n\t------------------------------------------------------------------------------------------------------------");
												printf("\n\tA Gousma B ATACOU a Gousma 2 com sucesso!");
												fimacao = 1;
												acao = 0;
											}else if(atacar != 1 || atacar != 2){
									   	   		printf("\n\tO programa nao pode ler isto nesse momento!");
									   	   		atacar = 0;
											}
										}
									}else if(acao == 2){//SEPARAR--------------
										if(fB < 6 && fB > 1 && vA == 0){
									   		printf("\n\tPara SEPARAR a Gousma B, decida quanto PF a Gousma A recebera!\n\tDigite o numero: ");
											while(acao == 2){
									   	   		scanf("%i",&sepf);
									  	    	separar = fB - sepf;
												if(separar < 1){
											  	   	printf("\n\tA Gousma B nao consegue se dividir sem sobrar PF. Escolha outro numero: ");
												}else if(separar >= 1){
													fB = separar;
													fA = sepf;
													vA = 1;
													gousmaA = 'O';
													acao = 0;
													fimacao = 1;
													printf("\n\t------------------------------------------------------------------------------------------------------------");
													printf("\n\tA Gousma B se separou, formando uma outra Gousma A com %i PF!",fA);
												}
												scanf("%c",&failsafe);
											}
										}else{
											printf("\n\tNao e possivel SEPARAR a Gousma B com a Gousma A ainda nao desintegrada!");
										}
									}else if(acao == 3){//ESPERAR--------------
										printf("\n\t------------------------------------------------------------------------------------------------------------");
										printf("\n\tA Gousma B ESPERA, pulando o seu turno!");
										acao = 0;
										fimacao = 1;
									}else if((acao != 1 || acao != 2 || acao != 3) && fimacao == 0){
									   	printf("\n\tO programa nao pode ler isto nesse momento!");
										acao = 0;
									}
						   		}
							}else if(vB == 0){
								printf("\n\t------------------------------------------------------------------------------------------------------------");
								printf("\n\tA Gousma B esta desintegrada, portanto o seu turno foi pulado!");
							}
						}
						//turnos
						turno = turno + 1;
						if(turno > 4){
							turno = 1;
							rodada = rodada + 1;
							if(v1 == 1){
								f1 = f1 + 1;
							}
							if(v2 == 1){
								f2 = f2 + 1;
							}
							if(vA == 1){
								fA = fA + 1;
							}
							if(vB == 1){
								fB = fB + 1;
							}
							printf("\n\tNOVA RODADA! Todas as Gousmas recebem +1 PF!");
						}
						//detecta se alguma Gousma deve se desintegrar
						if(f1 >= 6){
							v1 = 0;
							gousma1 = 'X';
							printf("\n\tA Gousma 1 possui %i PF e se desintegra!",f1);
							f1 = 0;
						}
						if(f2 >= 6){
							v2 = 0;
							gousma2 = 'X';
							printf("\n\tA Gousma 2 possui %i PF e se desintegra!",f2);
							f2 = 0;
						}
						if(fA >= 6){
							vA = 0;
							gousmaA = 'X';
							printf("\n\tA Gousma A possui %i PF e se desintegra!",fA);
							fA = 0;
						}
						if(fB >= 6){
							vB = 0;
							gousmaB = 'X';
							printf("\n\tA Gousma B possui %i PF e se desintegra!",fB);
							fB = 0;
						}
						//fim de jogo
						if(v1 == 0 && v2 == 0){
							printf("\n\t------------------------------------------------------------------------------------------------------------");
							printf("\n\t============================================================================================================");
							printf("\n\tAs Gousmas 1 e 2 se desintegraram!!\n\n\tO JOGADOR %s VENCE!!",j2);
							printf("\n\t============================================================================================================");
							jogando = 0;
						}else if(vA == 0 && vB == 0){
							printf("\n\t------------------------------------------------------------------------------------------------------------");
							printf("\n\t============================================================================================================");
							printf("\n\tAs Gousmas A e B se desintegraram!!\n\n\tO JOGADOR %s VENCE!!",j1);
							printf("\n\t============================================================================================================");
							jogando = 0;
						}
					}
					printf("\n\n\tVoce deseja jogar de novo? Digite 3 caso queira reiniciar o jogo: ");
					scanf("%i",&comecar);
				}
				
	   	   	}
						 			 		
	   	   	//Sair--------------------------------------------------------------------------------------------------------------------------------------------
			if(jogar == 4)
			{
				printf("\n\tVoce tem certeza de que quer fechar o programa?\n\tDigite 4 novamente: ");
			   	scanf("%i",&sair);	
				if (sair == 4)
				{
					break;
		 	    }
		 		else
				{
					printf("\n");
			   	}
		   	}
		   	
		   	//Erro--------------------------------------------------------------------------------------------------------------------------------------------
			if(jogar < 1 || jogar > 4)
			{
				printf("\n\t--O PROGRAMA NAO RECONHECE ESTE NUMERO--");
	 	    }
	 	     	
		}else{
			
			printf("\n\t--O PROGRAMA NAO RECONHECE LETRAS NESSE MOMENTO--");
			
		}
		scanf("%c", &failsafe);
	}
	
	
    return 0;
}