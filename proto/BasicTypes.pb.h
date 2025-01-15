/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PROTO_BASICTYPES_PB_H_INCLUDED
#define PB_PROTO_BASICTYPES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _HederaAccountID { 
    uint64_t shardNum; 
    uint64_t realmNum; 
    uint64_t accountNum; 
} HederaAccountID;

typedef struct _HederaDuration { 
    uint64_t seconds; 
} HederaDuration;

typedef PB_BYTES_ARRAY_T(32) HederaKey_ed25519_t;
typedef struct _HederaKey { 
    pb_size_t which_key;
    union {
        HederaKey_ed25519_t ed25519;
    } key; 
} HederaKey;

typedef struct _HederaRealmID { 
    uint64_t shardNum; 
    uint64_t realmNum; 
} HederaRealmID;

typedef struct _HederaShardID { 
    uint64_t shardNum; 
} HederaShardID;

typedef struct _HederaTimestamp { 
    uint64_t seconds; 
    uint32_t nanos; 
} HederaTimestamp;

typedef struct _HederaTransactionID { 
    bool has_accountID;
    HederaAccountID accountID; 
} HederaTransactionID;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define HederaKey_init_default                   {0, {{0, {0}}}}
#define HederaShardID_init_default               {0}
#define HederaRealmID_init_default               {0, 0}
#define HederaAccountID_init_default             {0, 0, 0}
#define HederaTimestamp_init_default             {0, 0}
#define HederaDuration_init_default              {0}
#define HederaTransactionID_init_default         {false, HederaAccountID_init_default}
#define HederaKey_init_zero                      {0, {{0, {0}}}}
#define HederaShardID_init_zero                  {0}
#define HederaRealmID_init_zero                  {0, 0}
#define HederaAccountID_init_zero                {0, 0, 0}
#define HederaTimestamp_init_zero                {0, 0}
#define HederaDuration_init_zero                 {0}
#define HederaTransactionID_init_zero            {false, HederaAccountID_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define HederaAccountID_shardNum_tag             1
#define HederaAccountID_realmNum_tag             2
#define HederaAccountID_accountNum_tag           3
#define HederaDuration_seconds_tag               1
#define HederaKey_ed25519_tag                    2
#define HederaRealmID_shardNum_tag               1
#define HederaRealmID_realmNum_tag               2
#define HederaShardID_shardNum_tag               1
#define HederaTimestamp_seconds_tag              1
#define HederaTimestamp_nanos_tag                2
#define HederaTransactionID_accountID_tag        2

/* Struct field encoding specification for nanopb */
#define HederaKey_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    BYTES,    (key,ed25519,key.ed25519),   2)
#define HederaKey_CALLBACK NULL
#define HederaKey_DEFAULT NULL

#define HederaShardID_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   shardNum,          1)
#define HederaShardID_CALLBACK NULL
#define HederaShardID_DEFAULT NULL

#define HederaRealmID_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   shardNum,          1) \
X(a, STATIC,   SINGULAR, UINT64,   realmNum,          2)
#define HederaRealmID_CALLBACK NULL
#define HederaRealmID_DEFAULT NULL

#define HederaAccountID_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   shardNum,          1) \
X(a, STATIC,   SINGULAR, UINT64,   realmNum,          2) \
X(a, STATIC,   SINGULAR, UINT64,   accountNum,        3)
#define HederaAccountID_CALLBACK NULL
#define HederaAccountID_DEFAULT NULL

#define HederaTimestamp_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   seconds,           1) \
X(a, STATIC,   SINGULAR, UINT32,   nanos,             2)
#define HederaTimestamp_CALLBACK NULL
#define HederaTimestamp_DEFAULT NULL

#define HederaDuration_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   seconds,           1)
#define HederaDuration_CALLBACK NULL
#define HederaDuration_DEFAULT NULL

#define HederaTransactionID_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  accountID,         2)
#define HederaTransactionID_CALLBACK NULL
#define HederaTransactionID_DEFAULT NULL
#define HederaTransactionID_accountID_MSGTYPE HederaAccountID

extern const pb_msgdesc_t HederaKey_msg;
extern const pb_msgdesc_t HederaShardID_msg;
extern const pb_msgdesc_t HederaRealmID_msg;
extern const pb_msgdesc_t HederaAccountID_msg;
extern const pb_msgdesc_t HederaTimestamp_msg;
extern const pb_msgdesc_t HederaDuration_msg;
extern const pb_msgdesc_t HederaTransactionID_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define HederaKey_fields &HederaKey_msg
#define HederaShardID_fields &HederaShardID_msg
#define HederaRealmID_fields &HederaRealmID_msg
#define HederaAccountID_fields &HederaAccountID_msg
#define HederaTimestamp_fields &HederaTimestamp_msg
#define HederaDuration_fields &HederaDuration_msg
#define HederaTransactionID_fields &HederaTransactionID_msg

/* Maximum encoded size of messages (where known) */
#define HederaAccountID_size                     33
#define HederaDuration_size                      11
#define HederaKey_size                           34
#define HederaRealmID_size                       22
#define HederaShardID_size                       11
#define HederaTimestamp_size                     17
#define HederaTransactionID_size                 35

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif