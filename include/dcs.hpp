#include <iterator>

template <class StringType, class SuffixArrayIteratorType>
class DCS 
{
    using IndexType  = typename std::iterator_traits<SuffixArrayIteratorType>::value_type;

  public:
      // find the suffix array SA of s[0..n-1] in {0..K}^n;
      // require s[n-1]=0 (the virtual sentinel!), n>=2;
      explicit DCS(StringType& s, SuffixArrayIteratorType SA, IndexType n, IndexType K, int level = 0)
    {

    }
};
