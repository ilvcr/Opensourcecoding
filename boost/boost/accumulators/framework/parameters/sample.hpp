/*************************************************************************
> File Name: sample.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月29日 星期日 10时21分09秒
> Description: 
    Copyright 2005 Eric Niebler. Distributed under the Boost
    Software License, Version 1.0. (See accompanying file
    ICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 ************************************************************************/

#ifndef BOOST_ACCUMULATORS_FRAMEWORK_PARAMETERS_SAMPLE_HPP_EAN_31_10_2005
#define BOOST_ACCUMULATORS_FRAMEWORK_PARAMETERS_SAMPLE_HPP_EAN_31_10_2005


#include <boost/parameter/keyword.hpp>
#include <boost/accumulators/accumulators_fwd.hpp>

namespace boost{
    namespace accumulators{

        BOOST_PARAMETER_KEYWORD(tag, sample)
        BOOST_ACCUMULATORS_IGNORE_GLOBAL(sample)
    }
}  // namespace boost::accumulators

#endif



