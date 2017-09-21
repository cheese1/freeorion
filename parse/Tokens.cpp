#include "Tokens.h"

#include <boost/preprocessor/stringize.hpp>


#define DEFINE_TOKEN(r, _, name) const char* const BOOST_PP_CAT(name, _token) = BOOST_PP_STRINGIZE(name);
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_1)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_2)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_3)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_4)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_5)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_6)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_7)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_8)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_9)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_10)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_11)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_12)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_13)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_14)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_15)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_16)
BOOST_PP_SEQ_FOR_EACH(DEFINE_TOKEN, _, TOKEN_SEQ_17)
#undef DEFINE_TOKEN
