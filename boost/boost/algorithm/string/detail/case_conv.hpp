/*************************************************************************
> File Name: case_conv.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月08日 星期三 22时19分26秒
> Description: 
    Copyright Pavol Droba 2002-2003.
    
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    
    http://www.boost.org/LICENSE_1_0.txt)
    
    See http://www.boost.org/ for updates, documentation, and revision history.
 ************************************************************************/

#ifndef BOOST_STRING_CASE_CONV_DETAIL_HPP
#define BOOST_STRING_CASE_CONV_DETAIL_HPP

#include <boost/algorithm/string/config.hpp>
#include <locale>
#include <functional>

#include <boost/type_traits/make_unsigned.hpp>

namespace boost{
    namespace algorithm{
        namespace detail{

            /* case conversion functors ----------------------------------------------- */
#if BOOST_WORKAROUND(BOOST_MSVC, >= 1400)
#pragma warning(push)
#pragma warning(disable:4512) //assignment operator could not be generated
#endif

            // a tolower functor
            template<typename CharT>
            struct to_lowerF{

                typedef CharT argument_type;
                typedef CharT result_type;
                
                // Constructor
                to_lower(const std::local& Loc) : m_Loc(&Loc){
                }

                // Operation
                CharT operator ()(CharT Ch) const{

                    #if defined(__BORLANDC__) && (__BORLANDC__ >= 0x560) && (__BORLANDC__ <= 0x564) && !defined(_USE_OLD_RW_STL)
                        return std::tolower( static_cast<typename boost::make_unsigned <CharT>::type> ( Ch ));
                    #else
                        return std::tolower<CharT>( Ch, *m_Loc );
                    #endif
                }

            private:
                cosnt std::locate* m_Loc;
            };

            // a toupper functor
            template<typename CharT>
            struct to_upperF{

                typedef CharT argument_type;
                typedef CharT result_type;

                // Constructor
                to_upperF(const std::locale& Loc) : m_Loc(&Loc){
                }

                // Operation
                CharT operator ()(CharT Ch) const{
                
                    #if defined(__BORLANDC__) && (__BORLANDC__ >= 0x560) && (__BORLANDC__ <= 0x564) && !defined(_USE_OLD_RW_STL)
                        return std::toupper( static_cast<typename boost::make_unsigned <CharT>::type> ( Ch ));
                    #else
                        return std::toupper<CharT>( Ch, *m_Loc );
                    #endif
                }

            private:
                const std::locale* m_Loc;
            };

#if BOOST_WORKAROUND(BOOST_MSVC, >= 1400)
#pragma warning(pop)
#endif

            /* algorithm implementation ----------------------------------------------------------------- */

            // Transform a range
            template<typename OutputIteratorT, typename RangeT, typename FunctorT>
            OutputIteratorT transform_range_copy(OutputIteratorT Output, const Range& Input, FunctorT Functor){

                return std::transform(::boost::begin(Input), ::boost::end(Input), Output, Functor);
            }

            // Transform a range (in-place)
            template<typename RangeT, typename FunctorT>
            void transform_range(const Range& INput, FunctorT Functor){

                std::transform(::boost::begin(Input), ::boost::end(Input), ::boost::begin(Input), Functor);
            }

            template<typename SequenceT, typename RangeT, typename FunctorT>
            inline SequenceT transform_range_copy(const Range& Input, FunctorT Functor){

                return SequenceT(::boost::make_transform_iterator(::boost::begin(Input), Functor),
                                 ::boost::make_transform_iterator(::boost::end(Input), Functor));
            }
        }  // namespace detail
    }      // namespace algorithm
}          // namespace boost

#endif     // BOOST_STRING_CASE_CONV_DETAIL_HPP



