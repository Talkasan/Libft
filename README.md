*This project has been created as part of the 42 curriculum by <taalkasa>.*

# Libft

## Açıklama

- Libft, C programlama dilinin temel yapı taşlarını derinlemesine kavramak amacıyla geliştirilen, standart C kütüphanesindeki temel fonksiyonların yeniden kodlandığı kişisel bir kütüphane projesidir. Bu proje; string manipülasyonları, bellek yönetimi ve veri yapıları gibi konularda temel oluşturmayı hedefler.

Proje Kazanımları:

- Karakter kontrolleri
- String İşlemleri
- Bellek Yönetimi
- Veri Yapıları

## İçerik

- Libc Fonksiyonları
- Ek Fonksiyonlar
- Linked List Fonksiyonları

## Talimatlar

Derleme:

- Oluşturulan kütüphaneyi derlemek için terminalde kök dizinine giderek `make` komutunu çalıştırın. Bu komut, `libft.a` statik kütüphanesini oluşturacaktır.
- `make clean` : Derleme sırasında oluşan geçici `.o` dosyalarını siler.
- `make fclean` : `.o` dosyalarıyla birlikte `libft.a` dosyasını da siler.
- `make re` : Projeyi tamamen temizleyip baştan derler.

Kullanım:

- Kendi projelerinizde bu kütüphaneyi kullanmak için `libft.h` dosyasını dahil etmelisiniz.
```c
#include "libft.h"
```
- Derleme sırasında kütüphaneyi belirtmelisiniz.
```bash
cc main.c libft.a
cc main.c -L. -lft
```

## Kaynaklar

- 42 Network Libft PDF
- C Standart Library Reference (https://en.cppreference.com/w/c.html)
- Part 1 fonksiyonları için terminalde `man` komutları kullanıldı.
- Part 3 Linked list konusunu anlamak için Youtube videoları izlendi:
 - [Video 1](https://www.youtube.com/watch?v=RyQZm9GbGg4&list=PLGrTHqyRDvx5u3Hyk9nq73tqiiFFH_Vty&index=6)
 - [Video 2](https://www.youtube.com/watch?v=9AwLy7qCwQs&list=PLGrTHqyRDvx5u3Hyk9nq73tqiiFFH_Vty&index=7)
 - [Video 3](https://www.youtube.com/watch?v=jAK9v-rpIbs&list=PLGrTHqyRDvx5u3Hyk9nq73tqiiFFH_Vty&index=8)

AI Kullanımı:

- Bazı fonksiyonlardaki hataları analiz etmek, Makefile kurallarını ve komutlarını öğrenmek ve README dosyasında dilin profesyonelleştirilmesi amacıyla kullanılmıştır. Projenin mantığı ve fonksiyonların algoritma tasarımları tamamen manuel olarak yapılmıştır.
- Kullanılan AI Araçları: ChatGPT ve Gemini.

------------------------------
ENGLISH

*This project has been created as part of the 42 curriculum by <taalkasa>.*

# Libft

## Description

- Libft is a personal library project developed to gain a deep understanding of the fundamental building blocks of the C programming language. It consists of reimplementations of core functions from the standard C library and aims to provide a solid foundation in topics such as string manipulation, memory management, and data structures.

Project Outcomes:

- Character checks
- String operations 
- Memory management
- Data structures

## Content

- Libc Functions  
- Additional Functions  
- Linked List Functions  

## Instructions

Compilation:

- To compile the library, navigate to the project root directory and run the `make` command. This will generate the static library file `libft.a`.
- `make clean` : Removes temporary object (`.o`) files created during compilation.
- `make fclean` : Removes both the object files and the `libft.a` library file.
- `make re` : Cleans the project and recompiles it from scratch.

Usage:

- To use this library in your own projects, you must include the `libft.h` header file.
```c
#include "libft.h"
```
- During compilation, you must specify the library. For example:
```bash
cc main.c libft.a
cc main.c -L. -lft
```

## Resources

-42 Network Libft Subject PDF
- C Standard Library Reference (https://en.cppreference.com/w/c.html)
- For Part 1 functions, manual pages were consulted using the `man` command.
- To better understand linked lists (Part 3), the following YouTube videos were used:
 - [Video 1](https://www.youtube.com/watch?v=RyQZm9GbGg4&list=PLGrTHqyRDvx5u3Hyk9nq73tqiiFFH_Vty&index=6)
 - [Video 2](https://www.youtube.com/watch?v=9AwLy7qCwQs&list=PLGrTHqyRDvx5u3Hyk9nq73tqiiFFH_Vty&index=7)
 - [Video 3](https://www.youtube.com/watch?v=jAK9v-rpIbs&list=PLGrTHqyRDvx5u3Hyk9nq73tqiiFFH_Vty&index=8)

 AI Usage:

- AI tools were used to analyze errors in certain functions, learn Makefile rules and commands, and improve the professional language of this README file. The project logic and algorithm designs of all functions were implemented entirely manually.
- AI tools used: ChatGPT and Gemini.


