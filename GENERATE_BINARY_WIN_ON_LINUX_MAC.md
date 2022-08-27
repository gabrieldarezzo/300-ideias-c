
# Está no Linux / Mac, e quer gerar binario de 'Windows'?  

## Instalar compiler do (binario) exe no Mac:
```shell
brew install mingw-w64
```
## Instalar compiler do (binario) exe no Linux:
```shell
sudo apt-get install mingw-w64
```

### Compilar um exe no Mac/Linux: 
```shell
x86_64-w64-mingw32-g++ -o run exercicios/menu_simple.c
```



