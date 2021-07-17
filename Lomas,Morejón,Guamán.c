#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define tam 100

void calendario(int,int,int);
void alarmas(float, float,float);


void main()
{
    int op[tam],dia,mes,anno;
    float h=0, m=0, n=0, stat=0,(hora);
    time_t tiempo;
    char dias_mes[2];
    
    while(op!=5)
    {
     printf("\n1.Horario\n2.Calendario\n3.Notas\n4.Alarmas\n5.Salir\n");
     printf("Seleccione una opci�n: ");
     scanf("%d",&op[0]);
     switch(op[0])
     {
        case 1:
                do{
                	printf("\nHorario\n1.Ingresa horario\n2.Modificar horario\n3.Ver horario\n4.Salir\nOpcion: ");
                	scanf("%d",&op[1]);
				}while(op[1]!=4)
				 
				
				printf("\nIngrese un dia de la semana\n1.Lunes\n2.Martes\n3.Miercoles\n4.Jueves\n5.Viernes\n6.Sabado\7.Domigo");
                
                
        break;
        case 2:
                calendario(dia,mes,anno);
                getchar();
                getchar();
                system("clear");


        break;
        case 3:
                printf("\nNotas");
        break;
        case 4:
                alarmas ((hora),m,h);
                getchar();
                getchar();
                system("clear");
        break;
        case 5:
                printf("\nSalir");
        break;

        default:
             printf("\nNo es una opción\n");    
        break;
     }    
}


void calendario(int dia,int mes,int anno);
{
    int r,i;
    printf("\nCalendario");
    printf("Introduzca un dia, mes y año: ");
    scanf("%d %d %d", &dia, &mes, &anno);            
        if(dia>31 || dia<1)
        {
            printf("\nEl dia introducido no es valido, introduzca otra fecha\n");
        }
            
        if(mes>12 || mes <1)
        {
            printf("\nEl mes introducido no es valido, introduzca otra fecha\n");
        }
            
    	if(anno%4==0 || anno%4==0 && anno%100==0)
            dias_mes[2] = 29;
        else
            dias_mes[2] = 28;
            
        for(i = mes; i<13; i++)
        {
            r += dias_mes[i];
        }
            
        printf("\n\nQuedan %d dias para que acabe el año.\n\n", r);

}


void alarmas (float hora, float m,float h)
{
    float i;
    int stat;
    printf("\nAlarmas");
    time(&tiempo);
    hora = localtime(&tiempo);
    printf ( "Esta es la hora: %s\n\n");
    scanf("%f",&hora);
    printf ( "¿A que hora quieres que suene la alarma?: ");
    scanf ("%f %f",&h,&m);

    i=time(NULL);

    for(;;)
    {
        if(time(NULL)!=i && stat!=1)
        {
            system("cls");
            printf ( "%s\n", asctime (hora) );
            i=time(NULL);
        }

        time(&tiempo);
        hora = localtime( &tiempo);

        if((*hora).tm_hour==h && (*hora).tm_min==m && n<10)
        {
            printf("\a");
            printf("DESPIERTA!!\n");
            n++;
            stat=1;
        }
        else if (n==10)
        {
            i=time(NULL);
            while (n==10)
            {
                if (time(NULL)==i+4) n=0;
            }
        }
}
