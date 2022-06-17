#include<stdio.h>
#include<math.h>
int main()
{
	
	int choice,c2;
	c:
	printf("Enter the conversion of your choice(1,2 or 3) from the Menu:-\n");
	printf("1\tTemperature Conversion\n2\tWeight Conversion\n3\tHeight Conversion\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the type of conversion from the menu:-\n");
			printf("1\tCelcius to Fahrenheit\n2\tFahrenheit to Celcius\n3\tCelcius to Kelvin\n");
			scanf("%d",&c2);
			switch(c2)
			{
				
				float userinput;
				c1:
				case 1:
					{
						printf("Please enter the Celcius degree: \n");
	        			scanf("%f",&userinput);
	        			float celciusToFahrenheit=((9.0/5.0)*userinput+32);
	        			printf("Fahrenheit: %.2f",celciusToFahrenheit);
	      			}
      				break;
      			
      			case 2:
      				{
      					printf("Please enter the Fahrenheit:\n");
      					scanf("%f",&userinput);
      					float fahrenheitToCelcius=((userinput-32) * (5.0/9.0));
          				printf("Celcius: %.2f",fahrenheitToCelcius);
					}
					break;
      			
      			case 3:
      				{
      					printf("Please enter the Celcius degree:\n");
      					scanf("%f",&userinput);
      					float CelciusToKelvin=(userinput+273.15);
          				printf("Kelvin: %.2f",CelciusToKelvin);
					}
      				break;
      			default:
      				{
					  
      				printf("Enter a valid choice!\n");
      				goto c1;
      				}
      				break;
      		}
      	break;
      	
      	case 2:																//Second Conversion type
      		{
      			
      			float userinput;
      			c3:
      			printf("Enter the type of conversion from the menu:-\n");
      			printf("1\tKilograms to Grams\n2\tGrams to Kilograms\n");
      			scanf("%d",&c2);
      			switch(c2)
	      			{
		      			case 1:
							{
								printf("Please enter the Kilograms: \n");
			        			scanf("%f",&userinput);
			        			float KGtoG=userinput*pow(10,3);
			        			printf("Grams: %.2f",KGtoG);
			      			}
		      				break;
		      			
		      			case 2:
		      				{
		      					printf("Please enter the Grams:\n");
		      					scanf("%f",&userinput);
		      					float GtoKG=userinput/pow(10,3);
		          				printf("Kilograms: %.2f",GtoKG);
							}
							break;
		      			default:
		      				{
		      				printf("Enter a valid choice!\n");
		      				goto c3;
		      				}
		      				break;
					}
			}
			break;
      		
      	case 3:																//Third Conversion type
      		{
      			
      			float userinput;
      			c4:
      			printf("Enter the type of conversion from the menu:-\n");
      			printf("1\tFeet to Inches\n2\tInches to Feet\n3\tInches to Centimeters\n");
      			scanf("%d",&c2);
      			switch(c2)
	      			{
		      			case 1:
							{
								printf("Please enter the Feet: \n");
			        			scanf("%f",&userinput);
			        			float FtoI=userinput*12;
			        			printf("Inches: %.2f",FtoI);
			      			}
		      				break;
		      			
		      			case 2:
		      				{
		      					printf("Please enter the Inches:\n");
		      					scanf("%f",&userinput);
		      					float ItoF=userinput/12;
		          				printf("Feet: %.2f",ItoF);
							}
							break;
						case 3:
							{
								printf("Please enter the Inches:\n");
		      					scanf("%f",&userinput);
		      					float ItoCM=userinput*2.54;
		          				printf("Centimeters: %.2f",ItoCM);
							}
							break;
		      			default:
		      				{
							  
		      				printf("Enter a valid choice!\n");
		      				goto c4;
		      				}
		      				break;
					}
			}
			break;
		default:
			{
				printf("Enter a Valid Choice!\n");
				goto c;
			}
		break;
			
	}
}
