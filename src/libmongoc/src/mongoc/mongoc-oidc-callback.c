#include <stdint.h>

#include "mongoc/mongoc-oidc-callback.h"

struct _mongoc_oidc_callback_params_t {
    int64_t callback_timeout_ms;
    int64_t version;
};

struct _mongoc_oidc_credential_t {
    char *access_token;
    int64_t expires_in_seconds;
};

int64_t
mongoc_oidc_callback_params_get_timeout_ms(mongoc_oidc_callback_params_t* callback_params)
{
    return callback_params->callback_timeout_ms;
}

int64_t
mongoc_oidc_callback_params_get_version(mongoc_oidc_callback_params_t* callback_params)
{
    return callback_params->version;
}

char *
mongoc_oidc_credential_get_access_token(mongoc_oidc_credential_t *credential)
{
    return credential->access_token;
}

int64_t
mongoc_oidc_credential_get_expires_in_seconds(mongoc_oidc_credential_t *credential)
{
    return credential->expires_in_seconds;
}
