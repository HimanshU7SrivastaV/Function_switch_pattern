#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
	int n,i;char ch='n';
	do
	{
	//	clrscr();
	printf("enter the choice what you want to find or buy:\n");
	printf("1.\tFOOTWERE\n2.\tCLOTHS\n3.\tBIKES\n4.\tGAMES\n5.\tJWELLARY\n6.\tFURNITURE\n7.\tFOOD & FAST FOODS\n");
	printf("8.\tELECTRONICS & ACCESSERISE\n9.\tBOOKS\n10.\tDEODERENTS\n11.\tExit\n");
	printf("\nENTER YOUR CHOICE :\t");
	scanf("%d",&i);
	printf("\n");
	switch(i)
	{
		case 1:  {
			              int a;
			              printf("1.\tADDIDAS\n2.\tWOODLAND\n3.\tFILA\n4.\tACTION\n5.\tPARAGON\n6.\tNIKE\n");
			              printf("ENTER YOUR CHOICE :\t");
			              scanf("%d",&a);
			              switch(a)
			              {
								case 1: {
									         
									         printf("\n1.\tMENS SHOES\n2.\tMENS SLEEPER\n3.\tWOMENS SHOES\n4.\tWOMEN SLEEPER\n5.\tSANDELS MENS/WOMENS");
									         printf("\nFOR ANY OF YOUR CHOICE YOU HAVE TO GO TO THE THIRD FLOOR FLAT NO. 31\n");
									    }   break;
								case 2: {
									         printf("\n1.\tMENS SHOES\n2.\tMENS SLEEPER\n3.\tWOMENS SHOES\n4.\tWOMEN SLEEPER\n5.\tSANDELS MENS/WOMENS");
									         printf("\nFOR ANY OF YOUR CHOICE YOU HAVE TO GO TO THE SECOND FLOOR FLAT NO. 25\n");
									    }   break;
								case 3: {
									          printf("\n1.\tMENS SHOES\n2.\tMENS SLEEPER\n3.\tWOMENS SHOES\n4.\tWOMEN SLEEPER\n5.\tSANDELS MENS/WOMENS");
									         printf("\nFOR ANY OF YOUR CHOICE YOU HAVE TO GO TO THE SECOND FLOOR FLAT NO. 27\n");
									    }   break;
								case 4: {
									           printf("\n1.\tMENS SHOES\n2.\tMENS SLEEPER\n3.\tWOMENS SHOES\n4.\tWOMEN SLEEPER\n5.\tSANDELS MENS/WOMENS");
									         printf("\nFOR ANY OF YOUR CHOICE YOU HAVE TO GO TO THE THIRD FLOOR FLAT NO. 34\n");
									    }   break;
								case 5: {
									            printf("\n1.\tMENS SHOES\n2.\tMENS SLEEPER\n3.\tWOMENS SHOES\n4.\tWOMEN SLEEPER\n5.\tSANDELS MENS/WOMENS");
									         printf("\nFOR ANY OF YOUR CHOICE YOU HAVE TO GO TO THE THIRD FLOOR FLAT NO. 33\n");
									    }  break;
								case 6: {
									             printf("\n1.\tMENS SHOES\n2.\tMENS SLEEPER\n3.\tWOMENS SHOES\n4.\tWOMEN SLEEPER\n5.\tSANDELS MENS/WOMENS");
									         printf("\nFOR ANY OF YOUR CHOICE YOU HAVE TO GO TO THE SECOND FLOOR FLAT NO. 21\n");
									    } break;
							}  break;
					    }
			case 2: {
					        int b;
					        printf("1.\tRAYMONDS\n2.\tZENMIN\n3.\tADDIDAS\n4.\tPUMA\n5.\tNIKE\n6.\tSHIVNARESH\n7.\tLOCAL\n");
					        printf("enter the choice of your company:\t");
					        scanf("%d",&b);
					        printf("\n");
					        switch(b)
					        {
								case 1: {
									        printf("\n1.\tSUIT\n2.\tSHIRT-PAINT\n3.\tPEICE OF CLOTH");
									        printf("\nFOR ANY OF THE CHOICE YOU HAVE TO GO TO THE FIRST FLOOR FLAT NO. 13\n");
									    } break;
								case 2: {
									        printf("\n1.\tSUIT\n2.\tSHIRT-PAINT\n3.\tPEICE OF CLOTH");
									        printf("\nFOR ANY OF THE CHOICE YOU HAVE TO GO TO THE FIRST FLOOR FLAT NO. 15\n");
									    } break;
								case 3: {
									         printf("\n1.\tSUIT\n2.\tSHIRT-PAINT\n3.\tPEICE OF CLOTH\n4.\tT-SHIRT\n5.\tTROUSER\n6.\tUNDERGARMENTS");
									        printf("\nFOR ANY OF THE CHOICE YOU HAVE TO GO TO THE FIRST FLOOR FLAT NO. 11\n");
									    }  break;
								case 4: {
									         printf("\n1.\tSUIT\n2.\tSHIRT-PAINT\n3.\tPEICE OF CLOTH\n4.\tT-SHIRT\n5.\tTROUSER\n6.\tUNDERGARMENTS");
									        printf("\nFOR ANY OF THE CHOICE YOU HAVE TO GO TO THE SECOND FLOOR FLAT NO. 22\n");
									    }  break;
								case 5: {
									        printf("\n1.\tSUIT\n2.\tSHIRT-PAINT\n3.\tPEICE OF CLOTH\n4.\tT-SHIRT\n5.\tTROUSER\n6.\tUNDERGARMENTS");
									        printf("\nFOR ANY OF THE CHOICE YOU HAVE TO GO TO THE SECOND FLOOR FLAT NO. 24\n");
									    }  break;	    
							   case 6: {
									        printf("\n1.\tSUIT\n2.\tSHIRT-PAINT\n3.\tPEICE OF CLOTH\n4.\tT-SHIRT\n5.\tTROUSER\n6.\tUNDERGARMENTS");
									        printf("\nFOR ANY OF THE CHOICE YOU HAVE TO GO TO THE FIRST FLOOR FLAT NO. 19\n");
									   }  break;
						   }  break;
            	}
            	case 3: {
					        int c;
					        printf("\n1.\tHERO HONDA\n2.\tSUZUAKI\n3.\tHONDA\n4.\tBAJAJ\n");
					        printf("ENTER THE CHOICE OF YOUR COMPANY:\t");
					        scanf("%d",&c);
					        switch(c)
					        {
							 case 1: {
									    printf("FOR BAJAJ GO TO THE GROUND FLOOR \n FLAT NO. 2\n");
									 }  break;
							 case 2: {
									    printf("FOR BAJAJ GO TO THE GROUND FLOOR \n FLAT NO. 1\n");
									 }   break;
							 case 3: {
									    printf("FOR BAJAJ GO TO THE GROUND FLOOR \n FLAT NO. 3\n");
									 }   break;
							 case 4: {
									   printf("FOR BAJAJ GO TO THE GROUND FLOOR \n FLAT NO. 4\n");
									 }   break;
							}  break;
					    }
				case 4: {
					       printf("\nFOR GAME ZONE YOU HAVE TO GO TO THE THIRD FLOOR\n");
			    	    }  break;
			    case 5: {
					       int d;
					      
					       printf("\n1.\tTANISQUE\n2.\tASPERA");
					       printf("ENTER YOUR CHOICE :\n");
					       scanf("%d",&d);
					       printf("\n");
					       switch(d)
					       {
								case 1:  {
									          printf("\n1.\tNECKLESS\n2.\tOTHERS\n");
									          printf("\nFOR ANY OF THESE YOU HAVE TO GO SECOND FLOOR FLAT NO. 29\n");
									     } break;
								case 2:  {
									          printf("\n1.\tNECKLESS\n2.\tOTHERS\n");
									          printf("\nFOR ANY OF THESE YOU HAVE TO GO THIRD FLOOR FLAT NO. 39\n");
									     }   break;
						   }  break;
					    }
				case 6:  {
					         int f;
					         printf("\n1.\tPLYWOOD\n2.\tGREENWOOD\n3.\tGREENPLY\n");
					         printf("ENTER THE NAME OF SHOP:\t");
					         scanf("%d",&f);
					         switch(f)
					         {
									case 1:  {
										         printf("\n1.\tTABLE\n2.\tCHAIR\n3.\tSOFA\n4.\tOTHERS\n");
										         printf("\nFOR ANY OF THESE GO TO THE 2ND FLOOR FLAT NO. 27\n");
										     }  break; 
									case 2:  {
										        printf("\n1.\tTABLE\n2.\tCHAIR\n3.\tSOFA\n4.\tOTHERS\n");
										         printf("\nFOR ANY OF THESE GO TO THE 2ND FLOOR FLAT NO. 28\n");
										     }  break;
									case 3:  {
										        printf("\n1.\tTABLE\n2.\tCHAIR\n3.\tSOFA\n4.\tOTHERS\n");
										         printf("\nFOR ANY OF THESE GO TO THE THIRD FLOOR FLAT NO. 37\n");
										     }   break;
							 }   break;
					     }
					case 7:  {
						          int g;
						          printf("\n1.\tICE-CREAMS\n2.\tFAST-FOODS\n3.\tFOOD-NIGHT\n");
						          printf("ENTER YOUR CHOICE OF SHOP:\t");
						          scanf("%d",&g);
						          printf("\n");
						          switch(g)
						          {
										case 1:  {
											         printf("\nFOR ICECREAM GO TO SHOP NO. 17 TO 19 FIRST FLOOR\n");
											     }   break;
										case 2:  {
											         int h;
											         printf("\n1.\tPIZZA HUT\n2.\tSUBWAY\n3.\tKFC\n");
											         printf("ENTER YOUR CHOICE:\t");
											         scanf("%d",&h);
											         printf("\n");
											         switch(h)
											         {
													case 1:  {
															     printf("\nFOR PIZZA HUT GO TO THE THIRD FLOOR SHOP NO. 37\n");
														     }   break;
													case 2:  {
														        printf("\nFOR SUBWAY GO TO THE THIRD FLOOR SHOP NO. 36\n");
														     }    break;
													case 3:  {
														        printf("\nFOR KFC GO TO THE THIRD FLOOR SHOP NO. 39\n");
														     }   break;
												 }  break;
											     }  break;
								  }  break;
						 }
					case 8:  {
						         int i;
						         printf("\n1.\tMOBILES\n2.\tLAPTOPS\n3.\tTV\n4.\tWASHING MACHINES & FRIDGE\n");
						         printf("\nENTER YOUR CHOICE:\t");
								 scanf("%d",&i);
								 printf("\n");
								 switch(i)
	                             {
								case 1:		{
									            printf("\n1.\tMICROSOFT\n2.\tMICROMAX\n3.\tSAMSUNG\n4.\tSONY\n5.\tLG\n");
									           	printf("\nFOR ANY OF THE PRODUCT GO TO THE SECOND FLOOR SHOP NO. 26\n");
									        } break;
								case 2:     {
									             printf("\n1.\tLENOVO\n2.\tDELL\n3.\tSAMSUNG\n4.\tSONY\n5.\tLG\n");
									    	printf("\nFOR ANY OF THE PRODUCT GO TO THE SECOND FLOOR SHOP NO. 26 \n");
									        }  break;
								case 3:    {
									            printf("\n1.\tSONY\n2.\tMICROMAX\n3.\tSAMSUNG\n4.\tPANASONIC\n5.\tLG\n");
									    	printf("\nFOR ANY OF THE PRODUCT GO TO THE SECOND FLOOR SHOP NO. 26\n");
									       }  break;
								case 4:    {
									           printf("\n1.\tWERPOOL\n2.\tMICROMAX\n3.\tSAMSUNG\n4.\tPANASONIC\n5.\tLG\n");
									    	printf("\nFOR ANY OF THE PRODUCT GO TO THE SECOND FLOOR SHOP NO. 26\n");
									       }   break;
								 }   break;
								 
						     }
					case 9:  {
						        printf("\nFOR ALL TYPES OF BOOKS YOU HAVE TO GO TO THE 1st FLOOR SHOP NO. 18\n");
						     }  break;
					case 10:  {
						            printf("\n1.\tAXE\n2.\tADDICTION\n3.\tADDIDAS\n4.\tGOOD MORNING\n5.\tEVA\n");
							    	printf("\nFOR ANY OF THE PRODUCT GO TO THE THIRD FLOOR SHOP NO. 38\n");
						      }  break;
					case 11:
							  exit(1);
							  break;
						      
                default: 
							  printf("Wrong Input!!!\n Please provide inputes between 1 and 11!!!");
							  break;
			} printf("\nExit Y/N\n"); fflush(stdin); scanf("%c",&ch);
			}while(ch!='y');
	getch();
}
