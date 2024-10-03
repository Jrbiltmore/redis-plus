
/*
 * SQL Executor Header for Redis
 * File: sql_executor.h
 * Authors: Jacob Thomas Vespers, ChatGPT as Alistaire
 * Date: October 1st, 2024
 * Description: Header file for the SQL Executor module, which defines the structures 
 *              and function prototypes used for executing SQL-like queries in Redis.
 */

#ifndef SQL_EXECUTOR_H
#define SQL_EXECUTOR_H

#include "sql_parser.h"

// Structure to represent the result of a query execution
typedef struct {
    // Fields to store query result data (e.g., rows, columns, status)
} QueryResult;

// Function prototypes
QueryResult* execute_select_query(const ParsedQuery* parsed_query);
QueryResult* execute_insert_query(const ParsedQuery* parsed_query);
QueryResult* execute_update_query(const ParsedQuery* parsed_query);
QueryResult* execute_delete_query(const ParsedQuery* parsed_query);
void free_query_result(QueryResult* result);

#endif // SQL_EXECUTOR_H
