#include <math.h>
#include <stdio.h>

#define WORDLENGTH 8
// global variable size

/* 5 => 00000101 => [1,0,1,0,0,0,0,0]
 *                   L . . . . . . M
 * traverse form lsb to msb
 */

const int lsb = 0;
const int msb = WORDLENGTH - 1;

void print_arr(int arr[], int size) {
  // print the array helper
}

void copy(int A[], int B[]) {
  // array copy helper
  // just optional
}

void binary(int num, int bin[]) {
  // convert the number to binary and store in bin[]
}

void add(int A[], int M[]) {
  // add M with A and store in A
  // use full adder logic
  // or simple if else of 0 and 1
}

void comp2(int A[]) {
  // flip the  bits 1-bit
  int i;
  for (i = 0; i < WORDLENGTH; i++) {
    A[i] = 1 - A[i];
  }
  // one [1 0 0 0 0 0 0 0] 00000001
  add(A, ONE);
}

void asr(int A[], int Q[]) {
  // arithmetic shift right
  // shift the bits of A and Q right
  // preserve the sign
}

void multiply(int A[], int M[], int Q[]) {
  // multuplication algorithm
  // print value of A M Q Q-1 in each step
}

int main() {
  int A[WORDLENGTH] = {0}, M[WORDLENGTH] = {0}, Q[WORDLENGTH] = {0};
  int m = 0, q = 0, msign = 0, qsign = 0;
  // read the numbers
  printf("Enter Multiplicand : ");
  scanf("%d", &m);
  printf("Enter Multiplier : ");
  scanf("%d", &q);

  // convert absolute value to binary
  binary(abs(m), M);
  if (m < 0) {
    // negative number 2s complement it
    comp(M);
  }
  binary(abs(q), Q);
  if (q < 0) {
    // negative number 2s complement it
    comp(Q);
  }

  // display both the numbers as binary
  printf("\nM : ");
  print_arr(M, WORDLENGTH);
  printf("\nQ : ");
  print_arr(Q, WORDLENGTH);

  // multiply the numbers
  // store the result in A and Q
  multiply(A, M, Q);

  // display the result
  printf("\nResult : ");
  print_arr(A, WORDLENGTH);
  print_arr(Q, WORDLENGTH);

  return 0;
}
