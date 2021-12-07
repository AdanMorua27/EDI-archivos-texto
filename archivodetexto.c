#include<studio.b>

int main()
{
    FILE *archivo;
    int cerrado;
    int valor;
    char nombre[50];
    int finalArchivo;

    archivo = fopen("Ejemplo2.txt", "r")
    do
    {
        fscanf(archivo, "%s",nombre);
        fscanf(archivo, "%d",&valor);

        printf("%s - %d", nombre, valor);

        finalArchivo = feat(archivo);
    }while(finalArchivo ! = EDF);
      cerrado = fclose(archivo);

      it (cerrado == EDF);
      printf("El archivo no se cerrara bien");

      return 0;
    }
}

