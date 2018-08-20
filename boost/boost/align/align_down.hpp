/*************************************************************************
> File Name: align_down.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月20日 星期一 16时28分26秒
> Description:
    Copyright 2015 Glen Joseph Fernandes
    (glenjofe@gmail.com)

    Distributed under the Boost Software License, Version 1.0.
    (http://www.boost.org/LICENSE_1_0.txt)
 ************************************************************************/

#ifndef BOOST_ALIGN_ALIGN_DOWN_HPP
#define BOOST_ALIGN_ALIGN_DOWN_HPP

#include <boost/align/detail/align_down.hpp>

namespace boost{
    namespace alignment{

        BOOST_CONSTEXPR inline std::size_t
        align_down(std::size_t value, std::size_t alignment) BOOST_NOEXCEPT{
                    
            return value & ~(alignment - 1);
        }

    }      /* alignment */
}          /* boost */

#endif




