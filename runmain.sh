gcc -Wall -Wextra -Werror -c main.c -o main.o
gcc -o main main.o libftprintf.a -g -fsanitize=address
./main
rm main main.o