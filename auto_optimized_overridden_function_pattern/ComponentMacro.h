#pragma once

#include <functional>

class AutoCallFunction
{
public:
	AutoCallFunction( const std::function< void() >& func )
	{
		func();
	}
};

#define GENERATE_RANDOM_NAME_MACRO1( first, second ) first ## second
#define GENERATE_RANDOM_NAME_MACRO2( first, second ) GENERATE_RANDOM_NAME_MACRO1( first, second )
#define UNIQUE_VAR_NAME GENERATE_RANDOM_NAME_MACRO2( variable_declared_on_line_, __LINE__ )

#define CALL_FUNCTION_STATIC( func ) AutoCallFunction UNIQUE_VAR_NAME( func )
