/*************************************************************************
> File Name: transform_inclusive_scan.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月06日 星期一 23时33分22秒
> Description: 
    Copyright (c) Marshall Clow 2017.

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE10.txt or copy at http://www.boost.org/LICENSE10.txt)
 ************************************************************************/

// \brief Combine the (transformed) elements of a sequence (or two) into a single value.

#ifndef BOOST_ALGORITHM_TRANSFORM_REDUCE_HPP
#define BOOST_ALGORITHM_TRANSFORM_REDUCE_HPP

#include <functional>     // for std::plus
#include <iterator>       // for std::iterator_traits

#include <boost/range/begin.hpp>
#include <boost/range/end.hpp>
#include <boost/range/value_type.hpp>


namespace boost{
    namespace algorithm{

        template<class InputIterator, class OutputIterator,
                 class BinaryOperation, class UnaryOperation, class T>
        OutputIterator transform_inclusive_scan(InputIterator first, InputIterator last,
                                                OutputIterator result,
                                                BinaryOperation bOp, UnaryOperation uOp,
                                                T init){

            for( ; first != last; ++first, (void)++result){

                init = bOp(init, uOp(*first));
                *result = init;
            }

            return result;
        }

        template<class InputIterator, class OutputIterator, class BinaryOperation, class UnaryOperation>
        OutputIterator transform_inclusive_scan(InputIterator first, InputIterator last,
                                                OutputIterator result,
                                                BinaryOperation bOp, UnaryOperation uOp){

            if(first != last){

                typename std::iterator_traits<InputIterator>::value_type init = uOp(*first);
                *result++ = init;
                if(++first != last){

                    return transform_inclusive_scan(first, last, result, bOp, uOp, init);
                }
            }
        }
    }
}                   // namespace boost and algorithm

#endif              // BOOST_ALGORITHM_TRANSFORM_REDUCE_HPP




