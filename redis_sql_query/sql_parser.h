/*
 * SQL Parser Header for Redis
 * File: sql_parser.h
 * Authors: Jacob Thomas Vespers, ChatGPT as Alistaire
 * Date: October 1st, 2024
 */

#ifndef SQL_PARSER_H
#define SQL_PARSER_H

#define PARSE_SUCCESS 1
#define PARSE_FAILURE 0

typedef enum {
    QUERY_SELECT,
    QUERY_INSERT,
    QUERY_UPDATE,
    QUERY_DELETE
} QueryType;

typedef struct {
    QueryType type;
} ParsedQuery;

int parse_query(const char* query, ParsedQuery* parsed_query);
int starts_with(const char* query, const char* keyword);
void free_parsed_query(ParsedQuery* parsed_query);

#endif // SQL_PARSER_H
