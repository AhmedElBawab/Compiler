#include "regex_parser.h"

regex_parser::regex_parser(){}
regex_parser::~regex_parser(){}


void regex_parser::set_difintions(vector< pair <string, string> > def){
    definitions = def;
}
void regex_parser::set_expressions(vector< pair <string, string> > exp){
    expressions = exp;
}

void regex_parser::convert_definitions_expressions(){
     for(int i=0; i<definitions.size(); i++){
          regex_to_tokens(definitions[i]);
     }
}
void regex_parser::regex_to_tokens(pair< string, string> def){
     vector<string> tokens;

     regex_tokens[def] = tokens;
}
string search_definition(string);
vector<string> search_expression(string);
