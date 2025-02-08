#include<stdio.h>
int main()
{
	int num,plateform;
	char code,ch;
	printf("100. Special Train. \n101. Express Train. \n102. Superfase Train. \n103. Passenger Train. \n104. Goods Train.\n\n");
	do{
		printf("If You Stop the train there have 2 Plateforms.\n\n");
		printf("Enter the Train Number : ");
		scanf("%d",&num);
		switch(num)
		{
			case 100:{
				printf("Special train is Coming.\n");
				fflush(stdin);
				printf("Code is { r, g, y, s } \n");
				printf("Enter Color Code : ");
				scanf("%c",&code);
				switch(code)
				{
					case 'r':{
						printf("Stop.\n");
						fflush(stdin);
						printf("Enter Stop Point : ");
						scanf("%d",&plateform);
						switch(plateform)
						{
							case 0:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
							case 1:{
								printf("Plateform No 1.");
								break;
							}
							case 2:{
								printf("Plateform No 2.");
								break;
							}
							default:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
						}
						break;
					}
					case 'y':{
						printf("Ready.");
						break;
					}
					case 's':{
						printf("Go Slow.");
						break;
					}
					case 'g':{
						printf("Go.");
						break;
					}
					default:{
						printf("Wrong Code.");
						break;
					}
				}
				break;
			}
			case 101:{
				printf("Express train is Coming.\n");
				fflush(stdin);
				printf("Code is { r, g, y, s } \n");
				printf("Enter Color Code : ");
				scanf("%c",&code);
				switch(code)
				{
					case 'r':{
						printf("Stop.\n");
						fflush(stdin);
						printf("Enter Stop Point : ");
						scanf("%d",&plateform);
						switch(plateform)
						{
							case 0:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
							case 1:{
								printf("Plateform No 1.");
								break;
							}
							case 2:{
								printf("Plateform No 2.");
								break;
							}
							default:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
						}
						break;
					}
					case 'y':{
						printf("Ready.");
						break;
					}
					case 's':{
						printf("Go Slow.");
						break;
					}
					case 'g':{
						printf("Go.");
						break;
					}
					default:{
						printf("Wrong Code.");
						break;
					}
				}
				break;
				break;
			}
			case 102:{
				printf("Super Fast train is Coming.\n");
				fflush(stdin);
				printf("Code is { r, g, y, s  } \n");
				printf("Enter Color Code : ");
				scanf("%c",&code);
				switch(code)
				{
					case 'r':{
						printf("Stop.\n");
						fflush(stdin);
						printf("Enter Stop Point : ");
						scanf("%d",&plateform);
						switch(plateform)
						{
							case 0:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
							case 1:{
								printf("Plateform No 1.");
								break;
							}
							case 2:{
								printf("Plateform No 2.");
								break;
							}
							default:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
						}
						break;
					}
					case 'y':{
						printf("Ready.");
						break;
					}
					case 's':{
						printf("Go Slow.");
						break;
					}
					case 'g':{
						printf("Go.");
						break;
					}
					default:{
						printf("Wrong Code.");
						break;
					}
				}
				break;
				break;
			}
			case 103:{
				printf("Passenger train is Coming.\n");
				fflush(stdin);
				printf("Code is { r, g, y, s } \n");
				printf("Enter Color Code : ");
				scanf("%c",&code);
				switch(code)
				{
					case 'r':{
						printf("Stop.\n");
						fflush(stdin);
						printf("Enter Stop Point : ");
						scanf("%d",&plateform);
						switch(plateform)
						{
							case 0:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
							case 1:{
								printf("Plateform No 1.");
								break;
							}
							case 2:{
								printf("Plateform No 2.");
								break;
							}
							default:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
						}
						break;
					}
					case 'y':{
						printf("Ready.");
						break;
					}
					case 's':{
						printf("Go Slow.");
						break;
					}
					case 'g':{
						printf("Go.");
						break;
					}
					default:{
						printf("Wrong Code.");
						break;
					}
				}
				break;
				break;
			}
			case 104:{
				printf("Goods train is Coming.\n");
				fflush(stdin);
				printf("Code is { r, g, y, s } \n");
				printf("Enter Color Code : ");
				scanf("%c",&code);
				switch(code)
				{
					case 'r':{
						printf("Stop.\n");
						fflush(stdin);
						printf("Enter Stop Point : ");
						scanf("%d",&plateform);
						switch(plateform)
						{
							case 0:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
							case 1:{
								printf("Plateform No 1.");
								break;
							}
							case 2:{
								printf("Plateform No 2.");
								break;
							}
							default:{
								printf("STOP ! Wait For Singnal.");
								break;
							}
						}
						break;
					}
					case 'y':{
						printf("Ready.");
						break;
					}
					case 's':{
						printf("Go Slow.");
						break;
					}
					case 'g':{
						printf("Go.");
						break;
					}
					default:{
						printf("Wrong Code.");
						break;
					}
				}
				break;
				break;
			}
			default:{
				printf("Not Listed!");
				break;
			}
		}
		fflush(stdin);
		printf("\nDo You want to Continue (Y/N).");
		scanf("%c",&ch);
	}while(ch=='y' || ch=='Y');
	return 0;
}
