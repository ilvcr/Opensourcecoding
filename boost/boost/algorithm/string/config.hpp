/*************************************************************************
> File Name: config.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月16日 星期四 21时19分56秒
> Description: 
    Copyright Pavol Droba 2002-2003.
    
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
    
    See http://www.boost.org/ for updates, documentation, and revision history.
 ************************************************************************/

#ifndef BOOST_STRING_CONFIG_HPP
#define BOOST_STRING_CONFIG_HPP

#include <boost/config.hpp>
#include <boost/detail/workaround.hpp>

#ifdef BOOST_STRING_DEDUCED_TYPENAME
#   error "macro already defined!"
#endif

#define BOOST_STRING_TYPENAME BOOST_DEDUCED_TYPENAME

// Metrowerks workaround
#if BOOST_WORKAROUND(__MWERKS__, <= 0x3003) // 8.x
#pragma parse_func_templ off
#endif

#endif        // BOOST_STRING_CONFIG_HPP




