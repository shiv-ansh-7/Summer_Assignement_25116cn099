#include <stdio.h>
#include <ctype.h>
struct QuizQuestion {
    char question[100];
    char options[4][50];
    char answer;
};
int main() {
    struct QuizQuestion quiz[3] = {
        {
            "What is the correct format specifier for a double in printf()?",
            {"A. %d", "B. %f", "C. %lf", "D. %s"},
            'B'   },
        {
            "Which keyword is used to prevent modifications to a variable?",
            {"A. static", "B. constant", "C. const", "D. final"},
            'C'  },
        {
            "What is the index of the first element in a C array?",
            {"A. -1", "B. 0", "C. 1", "D. It depends"},
            'B' }
    };

    int total_questions = 3;
    int score = 0;
    char user_answer;
 printf("--- Welcome to the C Programming Quiz! ---\n\n");
  for (int i = 0; i < total_questions; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);
           for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &user_answer);
        user_answer = toupper(user_answer);
        if (user_answer == quiz[i].answer) {
            printf("c Correct!\n\n");
            score++;
        } else {
            printf(" Wrong! The correct answer was %c.\n\n", quiz[i].answer);
        }
    }
    printf("Quiz Result\n");
    printf("Your final score is %d out of %d.\n", score, total_questions);
    double percentage = ((double)score / total_questions) * 100;
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}