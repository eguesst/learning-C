main(){
    int a = getnum();
    printf("este es el numero %d",a);
    return 0;
}
int getnum(){
    int cad[80];
    gets(cad);
    return (atoi(cad)); /*atoi convierte a entero una cadena*/
}
