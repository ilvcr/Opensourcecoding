/*************************************************************************
> File Name: transform_exclusive_scan.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月06日 星期一 23时27分20秒
> Description: 
    Copyright (c) Marshall Clow 2017.

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE10.txt or copy at http://www.boost.org/LICENSE10.txt)
 ************************************************************************/

// \brief ????

#ifndef BOOST_ALGORITHM_TRANSFORM_EXCLUSIVE_SCAN_HPP
#define BOOST_ALGORITHM_TRANSFORM_EXCLUSIVE_SCAN_HPP

#include <functional>     // for std::plus
#include <iterator>       // for std::iterator_traits

#include <boost/range/begin.hpp>
#include <boost/range/end.hpp>
#include <boost/range/value_type.hpp>


namespace boost{
    namespace algorithm{

        template<class InputIterator, class OutputIterator, class T, class BinaryOperation, class UnaryOperation>
        OutputIterator transform_exclusive_scan(InputIterator first, InputIterator last,
                                                OutputIterator result, T init,
                                                BinaryOperation bOp, UnaryOperation uOp){

            if(first != last){

                T saved = init;

                do{
                    init = bOp(init, uOp(*first));
                    *result = saved;
                    saved = init;
                    ++result;
                }while(++first != last);
            }
            return result;
        }
    }
}              // namespace boost and algorithm

#endif         // BOOST_ALGORITHM_TRANSFORM_EXCLUSIVE_SCAN_HPP



