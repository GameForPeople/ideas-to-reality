/*
	Copyright 2019, Won Seong-Yeon. All Rights Reserved.
		KoreaGameMaker@gmail.com
		github.com/GameForPeople
*/

#pragma once

#define WONSY_SINGLETONE

#include <type_traits>

namespace WonSY 
{
	inline namespace Base
	{
		template< 
			typename T, 
			typename = std::void_t< decltype( std::declval< T >() ) > /* = default ctor */ >
		class TSingleton
		{
		public:
			__forceinline static T& GetInstance()
			{
				static T instance;
				return instance;
			}

		protected:
			TSingleton()  = default;
			~TSingleton() = default;

		public:
			TSingleton( TSingleton const& )            = delete;
			TSingleton& operator=( TSingleton const& ) = delete;

			TSingleton( TSingleton&& )            = delete;
			TSingleton& operator=( TSingleton&& ) = delete;
		};
	}
}

template < typename T >
using WsySingleton = WonSY::Base::TSingleton< T >;
