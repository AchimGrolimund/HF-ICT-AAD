#ifndef DEBUG_H
#define DEBUG_H

#define DEBUG //Bei Release auskommentieren!!
#ifdef DEBUG
#define dout(str) do { std::cout << str << std::endl; } while( false )
#else
#define dout(str) do { } while ( false )
#endif

#endif // DEBUG_H
