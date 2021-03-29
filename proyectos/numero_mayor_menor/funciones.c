// aqui se definen las funciones que se van a usar en el programa y que luego, este archivo, 
// sera fusionado con el archivo principal para generar un solo ejecutable (.exe)
int mayor(int x, int y)
{
    int z = 0;
    z = (x > y) ? x : y;
    return z;
}
// z representa al numero mayor de los dos valores comparados

int menor(int x, int y)
{
    int z = 0;
    z = (x < y) ? x : y;
    return z;
}
// z representa al numero menor de los dos valores comparados