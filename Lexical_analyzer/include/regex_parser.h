#ifndef REGEX_PARSER_H
#define REGEX_PARSER_H

#include <bits/stdc++.h>
using namespace std;

class regex_parser
{
    public:
        regex_parser();
        virtual ~regex_parser();
        map<string, vector < string > > regex_tokens;
        void convert_definitions_expressions();
        void regex_to_tokens(string);
        string search_definition(string);
        vector<string> search_expression(string);
        void set_difintions(vector< pair <string, string> >);
        void set_expressions(vector< pair <string, string> >);

    protected:

    private:
            vector< pair <string, string> > definitions;
            vector< pair <string, string> > expressions;

};

#endif // REGEX_PARSER_H
