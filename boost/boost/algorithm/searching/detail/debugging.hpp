/*************************************************************************
> File Name: debugging.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月07日 星期二 20时17分22秒
> Description: 
    Copyright (c) Marshall Clow 2010-2012.

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    For more information, see http://www.boost.org
 ************************************************************************/

#ifndef BOOST_ALGORITHM_SEARCH_DETAIL_DEBUG_HPP
#define BOOST_ALGORITHM_SEARCH_DETAIL_DEBUG_HPP

#include <iostream>
// \cond DOXYGEN_HIDE


namespace boost{
    namespace algorithm{
        namespace detail{

            // debugging support
            template<typename Iter>
            void PrintTable(Iter first, Iter last){

                std::cout << std::distance(first, last) << ": { ";
                for(Iter iter=first; iter != last; ++iter){

                    std::cout << *iter << " ";
                }
                std::cout << "}" << std::endl;
            }
        }
    }
}
// \endcond

#endif       //  BOOST_ALGORITHM_SEARCH_DETAIL_DEBUG_HPP




