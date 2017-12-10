#include <parson_wrapper.h>
#include <libhandler.h>
#include <parson.h>

/* Parses first JSON value in a file, returns NULL in case of error 
JSON_Value * json_parse_file(const char *filename);
*/

//JSON_Value * json_parse_file_exn(const char *filename)
//{
//  JSON_Value * value = json_parse_file(filename);
//  return (value == NULL
//      ? value
//      : exn_raise("error parsing file"));
//}

