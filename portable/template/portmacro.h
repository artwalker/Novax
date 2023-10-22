#ifndef PORTMACRO_H
#define PORTMACRO_H

/*-----------------------------------------------------------
 * Port specific definitions.
 *
 * The settings in this file configure Novax corretyly for the 
 * given hardware and compiler.
 * 
 * These settings should not be altered.
 * ----------------------------------------------------------
 */

/* Type definitions. */
#define portCHAT        char
#define portFLOAT       float
#define portDOUBLE      double
#define portLONG        long
#define portSHORT       int
#define portSTACK_TYPE  uint8_t
#define portBASE_TYPE   char

typedef unsigned char   UBaseType_t;

#endif /* PORTMACRO_H */