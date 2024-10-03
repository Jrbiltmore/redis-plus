/*
 * SQL Executor for Redis
 * File: sql_executor.c
 * Authors: Jacob Thomas Vespers, ChatGPT as Alistaire
 * Date: October 1st, 2024
 */

#include "sql_executor.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Executes a SELECT query in Redis.
 */
QueryResult* execute_select_query(const ParsedQuery* parsed_query) {
    QueryResult* result = (QueryResult*)malloc(sizeof(QueryResult));
    return result;
}

/*
 * Executes an INSERT query in Redis.
 */
QueryResult* execute_insert_query(const ParsedQuery* parsed_query) {
    QueryResult* result = (QueryResult*)malloc(sizeof(QueryResult));
    return result;
}

/*
 * Executes a DELETE query in Redis.
 */
QueryResult* execute_delete_query(const ParsedQuery* parsed_query) {
    QueryResult* result = (QueryResult*)malloc(sizeof(QueryResult));
    return result;
}

/*
 * Frees memory associated with the QueryResult structure.
 */
void free_query_result(QueryResult* result) {
    free(result);
}
