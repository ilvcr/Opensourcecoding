/*************************************************************************
> File Name: rope_traits.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月15日 星期三 17时07分09秒
> Description: 
    Copyright Pavol Droba 2002-2003.
    
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
    
    See http://www.boost.org/ for updates, documentation, and revision history.
 ************************************************************************/

#ifndef BOOST_STRING_STD_ROPE_TRAITS_HPP
#define BOOST_STRING_STD_ROPE_TRAITS_HPP

#include <boost/algorithm/string/yes_no_type.hpp>
#include <rope>
#include <boost/algorithm/string/sequence_traits.hpp>

namespace boost{
    namespace algorithm{

//  SGI's std::rope<> traits  -----------------------------------------------//

        // native replace traits
        template<typename T, typename TraitsT, typename AllocT>
        class has_native_replace<std::rope<T, TraitsT, AllocT> >{

        public:
#if BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            enum { value = true };
#else
            BOOST_STATIC_CONSTANT(bool, value=true);
#endif // BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            typedef mpl::bool_<value> type;     
        };


        // stable iterators traits
        template<typename T, typename traitsT, typename AllocT>
        class has_stable_iterators<std::rope<T, Traits, AllocT> >{

        public:
#if BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            enum { value = true };
#else
            BOOST_STATIC_CONSTANT(bool, value=true);
#endif // BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            typedef mpl::bool_<value> type;    
        };


        // const time insert trait
        template<typename T, typename TraitsT, typename AllocT>
        class has_const_time_insert<std::rope<T, TraitsT, AllocT> >{

        public:
#if BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            enum { value = true };
#else
            BOOST_STATIC_CONSTANT(bool, value=true);
#endif // BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            typedef mpl::bool_<value> type;     
        };


        // const time erase trait
        template<typename T, typename TraitsT, typename AllocT>
        class has_const_time_erase<std::rope<T, TraitsT, AllocT> >{

        public:
#if BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            enum { value = true };
#else
            BOOST_STATIC_CONSTANT(bool, value=true);
#endif // BOOST_WORKAROUND( __IBMCPP__, <= 600 )
            typedef mpl::bool_<value> type;     
        };
    }             // namespace algorithm
}                 // namespace boost

#endif            // BOOST_STRING_ROPE_TRAITS_HPP




