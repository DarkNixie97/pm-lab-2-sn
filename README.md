# Parametry projektu

Nazwa: pm-lab-2  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na drugie spotkanie laboratoryjne z przedmiotu _Technika mikroprocesorowa_.  
Wersja: v1.0  
Data: 23.01.2021 r.

# Informacje o studencie

Imię i nazwisko studenta: Karol Lechański  
Numer albumu: 70282  
Grupa studencka: WEL18DE1N1

# Pytania do zadań z instrukcji
-W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość?
-Należy utworzyć nową pętle która zostanie załączona po przekroczeniu maksymalnej ilości kliknięć.

Pytanie: W jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów?

Odpowiedź: Należy dodać do pętli if następną "else if" 
Zwiększyć o kolejne else if (!strcmp(parmStr, "polecenie"))
{
    dalszy kod ktory ma zostać wykonany 
}

