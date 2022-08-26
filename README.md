# Como rodar ?!
```shell
gcc -o run exercicios/1.1.6_quadrado.c 
./run
```

```
gcc -o run exercicios/menu_simple.c
```


## Linux / Mac, and whant compile a .exe?!  

### Install on Linux:   
```shell
brew install mingw-w64
```

### Install on Linux:  
```shell
sudo apt-get install mingw-w64
```

```shell
x86_64-w64-mingw32-g++ -o run exercicios/menu_simple.c
```


# Explicação

Pq não podemos simplesmente rodar o `sample.c` ?
Como o `C` é uma linguagem que é compilada, precisamos 'traduzir' para a maquiana usando o comando:
```shell
gcc -o sample sample.c
```
Que basicamente vai gerar um executavel quando finalizar a 'compilação' 

```shell
./sample
```


// Don't forget link library: gcc -o run exercicios/1.1.8_fotossintese.c -lform -lncurses
#include <ncurses.h>



