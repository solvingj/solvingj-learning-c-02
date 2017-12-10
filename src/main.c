#include <stdio.h> 
#include <clparse.h>
#include <libhandler.h>

DEFINE_EFFECT1(exn, raise)
DEFINE_VOIDOP1(exn, raise, string)

value handle_exn_raise(resume* r, value local, value arg) {
  printf("exception raised: %s\n", string_value(arg));
  return value_null;
}

const operation _exn_ops[] =
{
  {
    OP_NORESUME, OPTAG(exn,raise), &handle_exn_raise
  }
};

const handlerdef _exn_def =
{
  EFFECT(exn), NULL, NULL, NULL, _exn_ops
};

value my_exn_handle(value(*action)(value), value arg)
{
  return handle(&_exn_def, value_null, action, arg);
}

value divide_by(value x)
{
  return value_long(divexn(42, long_value(x)));
}

int main()
{
  my_exn_handle(divide_by, value_long(0));
  return 0;
}


//
//int main(const int argc, const char *argv[]) {
//  int i;
//  for (i = 1; i < argc; i++) 
//  { 
//    printf("Something: %s", argv[i]);
//  }
//  int g = getchar();
//  return 0;
//}

