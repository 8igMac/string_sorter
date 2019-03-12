#include <gtest/gtest.h>
#include "dcs.hpp"

using SeqType = std::vector<char>;
using IndexType = uint32_t;
using SuffixArrayType = std::vector<IndexType>;
using Dcs = DCS<SeqType, SuffixArrayType::iterator>;

TEST(sais, short_seq)
{
    // [Note] 
    // - alphabet need to transform to {0..k} by their rank
    // sais argument: {0..k}^n, pass k+1
    SeqType seq = {1,2,0,0};
    seq.push_back(0); // $
    SuffixArrayType sa(seq.size());
    Dcs(seq, sa.begin(), seq.size(), 3); 

    EXPECT_EQ(sa.size(), 5);
    EXPECT_EQ(sa[0], 4);
    EXPECT_EQ(sa[1], 3);
    EXPECT_EQ(sa[2], 2);
    EXPECT_EQ(sa[3], 0);
    EXPECT_EQ(sa[4], 1);
}
