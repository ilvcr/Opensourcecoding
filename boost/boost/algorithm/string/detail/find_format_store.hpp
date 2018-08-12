/*************************************************************************
> File Name: find_format_store.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月12日 星期日 21时46分06秒
> Description:
    Boost string_algo library find_format_store.hpp header file 
    
    Copyright Pavol Droba 2002-2003.
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    See http://www.boost.org/ for updates, documentation, and revision history.
 ************************************************************************/

#ifndef BOOST_STRING_FIND_FORMAT_STORE_DETAIL_HPP
#define BOOST_STRING_FIND_FORMAT_STORE_DETAIL_HPP

#include<boost/algorithm/string/config.hpp>
#include<boost/range/iterator_range_core.pp>

namespace boost{
    namespace algorithm{
        namespace detail{

// temporary format and find result storage --------------------
#if BOOST_WORKAROUND(BOOST_MSVC, >= 1400)
#pragma warning(push)
#pragma warning(disable:4512) // assigment operator could not be generated
#endif
        
            template<typename ForwardIteratorT, typename FormatterT, typename FormatResultT>
            class find_format_store : public iterator_range<ForwardIteratorT>{

            public:
                // typedefs
                typedef iterator_range<ForwardIteratorT> base_type;
                typedef FormatterT Formatter_type;
                typedef FormatResultT format_result_type;

            public:
                // construction
                find_format_store(const base_type& FindRresult, 
                                  const format_result_type& FormatResult,
                                  const formatter_type& Formatter):
                            base_type(FindRresult),
                            m_FormatResult(FormatResult),
                            m_Formatter(Formatter){
                }

                // Assignment
                template<typename FindResult>
                find_format_store& operator=(FindResultT FindResultT){

                    iterator_range<ForwardIteratorT>::operator=(FindResult);
                    if(!this->empty()){

                        m_FormatResult = m_Formatter(FindResult);
                    }

                    return *this;
                }

                // Retrieve format result
                const format_result_type& format_result(){

                    return m_FormatResult;
                }

            private:
                format_result_type m_FormatResult;
                const formatter_type& m_Formatter;
            };

            template<typename Input, typename FindResultT>
            bool check_find_result(Input&, FindResultT& FindResult){

                typedef BOOST_STRING_TYPENAME range_const_iterator<Input>::type input_iterator_type;
                iterator_range<input_iterator_type> ResultRange(FindResult);
                return !ResultRange.empty();
            }

#if BOOST_WORKAROUND(BOOST_MSVC, >= 1400)
#pragma warning(pop)
#endif
        }
    }
}

#endif




