// aqui se definen las funciones que se van a usar en el programa y que luego, este archivo, 
// sera fusionado con el archivo principal para generar un solo ejecutable (.exe)
int menor(int x, int y)
{
    int z = 0;
    z = (x < y) ? x : y;
    return z;
}