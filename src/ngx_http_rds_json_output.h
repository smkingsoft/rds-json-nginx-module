
/*
 * Copyright (C) agentzh
 */

#ifndef NGX_HTTP_RDS_JSON_OUTPUT_H
#define NGX_HTTP_RDS_JSON_OUTPUT_H


#include "ngx_http_rds_json_filter_module.h"
#include "ngx_http_rds.h"

#include <ngx_core.h>
#include <ngx_http.h>
#include <nginx.h>


ngx_int_t ngx_http_rds_json_output_header(ngx_http_request_t *r,
        ngx_http_rds_json_ctx_t *ctx, ngx_http_rds_header_t *header);

ngx_int_t ngx_http_rds_json_output_literal(ngx_http_request_t *r,
        ngx_http_rds_json_ctx_t *ctx, u_char *data, size_t len,
        ngx_flag_t last_buf);

ngx_int_t ngx_http_rds_json_output_chain(ngx_http_request_t *r,
        ngx_http_rds_json_ctx_t *ctx, ngx_chain_t *in);

ngx_int_t ngx_http_rds_json_output_field(ngx_http_request_t *r,
        ngx_http_rds_json_ctx_t *ctx, u_char *data, size_t len,
        ngx_flag_t is_null);

ngx_int_t ngx_http_rds_json_output_more_field_data(ngx_http_request_t *r,
        ngx_http_rds_json_ctx_t *ctx, u_char *data, size_t len);


#endif /* NGX_HTTP_RDS_JSON_OUTPUT_H */

