// Copyright David Abrahams 2003.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#ifndef ITERATOR_TRAITS_DWA200347_HPP
# define ITERATOR_TRAITS_DWA200347_HPP

#include <iterator>

namespace boost {
namespace iterators {

template <class Iterator>
struct iterator_value
{
    using type = typename std::iterator_traits<Iterator>::value_type;
};

template <class Iterator>
struct iterator_reference
{
    using type = typename std::iterator_traits<Iterator>::reference;
};


template <class Iterator>
struct iterator_pointer
{
    using type = typename std::iterator_traits<Iterator>::pointer;
};

template <class Iterator>
struct iterator_difference
{
    using type = typename std::iterator_traits<Iterator>::difference_type;
};

template <class Iterator>
struct iterator_category
{
    using type = typename std::iterator_traits<Iterator>::iterator_category;
};

} // namespace iterators

using iterators::iterator_value;
using iterators::iterator_reference;
using iterators::iterator_pointer;
using iterators::iterator_difference;
using iterators::iterator_category;

} // namespace boost

#endif // ITERATOR_TRAITS_DWA200347_HPP
