#ifndef CLIPARSE_H_
#define CLIPARSE_H_ 

typedef enum _token_type {
  Option, Argument
}token_type;

typedef struct _token {
  token_type type;
  char *token;
}token;

#endif