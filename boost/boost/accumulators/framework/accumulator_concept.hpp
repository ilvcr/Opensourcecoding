/*************************************************************************
> File Name: accumulator_concept.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月29日 星期日 11时05分50秒
> Description: 
    Copyright 2005 Eric Niebler. Distributed under the Boost
    Software License, Version 1.0. (See accompanying file
    LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 ************************************************************************/

#ifndef BOOST_ACCUMULATORS_FRAMEWORK_ACCUMULATOR_CONCEPT_HPP_EAN_28_10_2005
#define BOOST_ACCUMULATORS_FRAMEWORK_ACCUMULATOR_CONCEPT_HPP_EAN_28_10_2005


#include<boost/concept_check.hpp>

namespace boost{
    namespace accumulators{

        template<typename Stat>
        struct accumulator_concept{

            void constraints(){

                // TODO: define the stat concept
            }

            Stat stat;
        };
    }
}  // namespace boost::accumulators

#endif


