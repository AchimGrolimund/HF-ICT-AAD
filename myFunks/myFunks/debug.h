#ifndef DEBUG_H
#define DEBUG_H

//#define DEBUG //Bei Release auskommentieren!!
#ifdef DEBUG
#define debug_msg(str) do { std::cout << str << std::endl; } while( false )
#else
#define debug_msg(str) do { } while ( false )
#endif

#endif // DEBUG_H
