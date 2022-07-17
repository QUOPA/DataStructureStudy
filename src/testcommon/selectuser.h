
#define _USER_WP_
//#define _USER_AK_
//#define _USER_GB_


#if defined (_USER_WP_)
#define _USER_NS_ wp
#elif defined(_USER_AK_) 
#define _USER_NS_ ak
#elif defined(_USER_GB_)
#define _USER_NS_ gb
#endif
