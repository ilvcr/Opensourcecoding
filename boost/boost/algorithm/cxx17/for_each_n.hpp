/*************************************************************************
> File Name: for_each_n.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月06日 星期一 23时01分56秒
> Description: 
    Copyright (c) Marshall Clow 2017.

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE10.txt or copy at http://www.boost.org/LICENSE10.txt)
 ************************************************************************/

// \brief Apply a functor to the elements of a sequence

#ifndef BOOST_ALGORITHM_FOR_EACH_N_HPP
#define BOOST_ALGORITHM_FOR_EACH_N_HPP

#include <utility>      // for std::pair

namespace boost{
    namespace algorithm{

        // \fn for_each_n(InputIterator first, Size n, Function f);
        // \return first + n
        //
        // \param first    The start of the first range.
        // \param n        One past the end of the first range.
        // \param f        A functor to apply to the elements of the sequence
        // \note           If f returns a result, the result is ignored.
        template<class InputIterator, class Size, class Function>
        InputIterator for_each_n(InputIterator first, Size n, Function f){

            for( ; n > 0; --n, ++first){

                f(*first);
            }
            return first;
        }
    }
}                     // namespace boost and algorithm

#endif                // BOOST_ALGORITHM_FOR_EACH_N_HPP





