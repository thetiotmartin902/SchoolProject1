void main() {
  int age = 23;
  char name[40];
  printf("Enter your name: ");
  scanf("%s", name);
  if (age >= 18) {
    printf("Hello, %s. You are an adult.", name);
  } else {
    printf("Sorry, %s. You are not yet an adult.", name);
  }
}