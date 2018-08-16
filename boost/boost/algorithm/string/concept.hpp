/*************************************************************************
> File Name: concept.hpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月16日 星期四 21时10分37秒
> Description: 
    Copyright Pavol Droba 2002-2003.
    
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
    
    See http://www.boost.org/ for updates, documentation, and revision history.
 ************************************************************************/

#ifndef BOOST_STRING_CONCEPT_HPP
#define BOOST_STRING_CONCEPT_HPP

#include <boost/concept_check.hpp>
#include <boost/range/iterator_range_core.hpp>
#include <boost/range/begin.hpp>
#include <boost/range/end.hpp>

/*! \file Defines concepts used in string_algo library */
namespace boost{
    namespace algorithm{

        //! Finder concept
        /*
         *  Defines the Finder concept. Finder is a functor which selects
         *  an arbitrary part of a string. Search is performed on
         *  the range specified by starting and ending iterators.
         * 
         *  Result of the find operation must be convertible to iterator_range.
         */
        template<typename FinderT, typename IteratorT>
        struct FinderConcept{

        private:
            typedef iterator_range<Iterator> range;
        public:
            void constraints(){

                // Operation
                r = (*pF)(i, i);
            }
        private:
            range r;
            IteratorT i;
            FinderT* pF;
        };  // Finder_concept


        //! Formatter concept
        /*!
         *  Defines the Formatter concept. Formatter is a functor, which
         *  takes a result from a finder operation and transforms it
         *  in a specific way.
         *
         *  Result must be a container supported by container_traits, 
         *  or a reference to it.
         */
        template<typename FormatterT, typename FinderT, typename IteratorT>
        struct FormatterConcept{

        public:
            void constraints(){

                // Operation
                ::boost::begin((*pFo)((*pF)(i, i)));
                ::boost::end((*pFo)((*pF)(i,i)));
            }

        private:
            IteratorT i;
            FinderT* pF;
            FormatterT *pFo;
        };     // FormatterConcept;
    }          // namespace algorithm
}              // namespace boost

#endif         // BOOST_STRING_CONCEPT_HPP




