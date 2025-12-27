#include <stdio.h>

int main() {
    int choice, score = 0;
    char ans;

    printf("\n==== MINI QUIZ GAME ====\n");
    printf("1. General Knowledge\n");
    printf("2. Science\n");
    printf("3. Computers\n");
    printf("4. Mathematics\n");
    printf("5. Sports\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("\n1. Capital of India?\nA.Delhi B.Mumbai C.Kolkata D.Chennai\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n2. National Animal?\nA.Lion B.Tiger C.Deer D.Elephant\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n3. Largest ocean?\nA.Arctic B.Indian C.Pacific D.Atlantic\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");

        printf("\n4. National flower?\nA.Rose B.Lotus C.Lily D.Sunflower\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n5. Father of Nation?\nA.Gandhi B.Nehru C.Patel D.Ambedkar\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n6. Largest planet?\nA.Earth B.Mars C.Jupiter D.Saturn\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");
        break;

    case 2:
        printf("\n1. Formula of water?\nA.H2O B.CO2 C.O2 D.NaCl\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n2. Heart chambers?\nA.2 B.3 C.4 D.5\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");

        printf("\n3. Gas for breathing?\nA.CO2 B.Oxygen C.Nitrogen D.Helium\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n4. Sun is a?\nA.Planet B.Star C.Moon D.Comet\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n5. Boiling point of water?\nA.90 B.95 C.100 D.110\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");

        printf("\n6. Vitamin from sunlight?\nA.A B.B C.C D.D\n");
        scanf(" %c",&ans);
        if(ans=='D'||ans=='d') score++; else printf("Wrong! Correct: D\n");
        break;

    case 3:
        printf("\n1. Father of computer?\nA.Newton B.Babbage C.Tesla D.Edison\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n2. C language developer?\nA.Dennis B.Guido C.James D.Linus\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n3. Brain of computer?\nA.Monitor B.CPU C.Mouse D.Keyboard\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n4. Binary digits?\nA.0,1 B.1,2 C.2,3 D.3,4\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n5. Output device?\nA.Keyboard B.Monitor C.Mouse D.Scanner\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n6. RAM means?\nA.Random Access Memory B.Read Memory C.Run Memory D.None\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");
        break;

    case 4:
        printf("\n1. 5 x 6 = ?\nA.30 B.25 C.20 D.15\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n2. Square of 8?\nA.16 B.32 C.64 D.48\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");

        printf("\n3. Even number?\nA.7 B.9 C.11 D.10\n");
        scanf(" %c",&ans);
        if(ans=='D'||ans=='d') score++; else printf("Wrong! Correct: D\n");

        printf("\n4. 100/10=?\nA.5 B.10 C.20 D.50\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n5. 12+8=?\nA.18 B.20 C.22 D.24\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n6. Prime number?\nA.4 B.6 C.9 D.7\n");
        scanf(" %c",&ans);
        if(ans=='D'||ans=='d') score++; else printf("Wrong! Correct: D\n");
        break;

    case 5:
        printf("\n1. National sport of India?\nA.Cricket B.Hockey C.Football D.Tennis\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n2. WC 2011 winner?\nA.India B.Aus C.Eng D.Pak\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");

        printf("\n3. Olympic rings?\nA.4 B.5 C.6 D.7\n");
        scanf(" %c",&ans);
        if(ans=='B'||ans=='b') score++; else printf("Wrong! Correct: B\n");

        printf("\n4. Tennis Grand Slams?\nA.2 B.3 C.4 D.5\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");

        printf("\n5. Football legend?\nA.Dhoni B.Sachin C.Messi D.Kohli\n");
        scanf(" %c",&ans);
        if(ans=='C'||ans=='c') score++; else printf("Wrong! Correct: C\n");

        printf("\n6. Chess is played on?\nA.Board B.Field C.Court D.Track\n");
        scanf(" %c",&ans);
        if(ans=='A'||ans=='a') score++; else printf("Wrong! Correct: A\n");
        break;

    default:
        printf("Invalid choice\n");
    }

    printf("\nFinal Score: %d / 6\n", score);
    return 0;
}
