/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/rbac/v2/rbac.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/rbac/v2/rbac.upbdefs.h"

extern upb_def_init envoy_api_v2_core_address_proto_upbdefinit;
extern upb_def_init envoy_api_v2_route_route_components_proto_upbdefinit;
extern upb_def_init envoy_type_matcher_metadata_proto_upbdefinit;
extern upb_def_init envoy_type_matcher_path_proto_upbdefinit;
extern upb_def_init envoy_type_matcher_string_proto_upbdefinit;
extern upb_def_init google_api_expr_v1alpha1_syntax_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_config_rbac_v2_RBAC_msginit;
extern const upb_msglayout envoy_config_rbac_v2_RBAC_PoliciesEntry_msginit;
extern const upb_msglayout envoy_config_rbac_v2_Policy_msginit;
extern const upb_msglayout envoy_config_rbac_v2_Permission_msginit;
extern const upb_msglayout envoy_config_rbac_v2_Permission_Set_msginit;
extern const upb_msglayout envoy_config_rbac_v2_Principal_msginit;
extern const upb_msglayout envoy_config_rbac_v2_Principal_Set_msginit;
extern const upb_msglayout envoy_config_rbac_v2_Principal_Authenticated_msginit;

static const upb_msglayout *layouts[8] = {
  &envoy_config_rbac_v2_RBAC_msginit,
  &envoy_config_rbac_v2_RBAC_PoliciesEntry_msginit,
  &envoy_config_rbac_v2_Policy_msginit,
  &envoy_config_rbac_v2_Permission_msginit,
  &envoy_config_rbac_v2_Permission_Set_msginit,
  &envoy_config_rbac_v2_Principal_msginit,
  &envoy_config_rbac_v2_Principal_Set_msginit,
  &envoy_config_rbac_v2_Principal_Authenticated_msginit,
};

static const char descriptor[2501] = {'\n', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'r', 'b', 'a', 'c', '/', 'v', '2', '/', 'r', 'b', 
'a', 'c', '.', 'p', 'r', 'o', 't', 'o', '\022', '\024', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 
'a', 'c', '.', 'v', '2', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'c', 'o', 'r', 'e', '/', 
'a', 'd', 'd', 'r', 'e', 's', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', ')', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 
'v', '2', '/', 'r', 'o', 'u', 't', 'e', '/', 'r', 'o', 'u', 't', 'e', '_', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 's', 
'.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 
'r', '/', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'e', 'n', 'v', 'o', 'y', '/', 't', 
'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'p', 'a', 't', 'h', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'e', 
'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 's', 't', 'r', 'i', 'n', 'g', '.', 
'p', 'r', 'o', 't', 'o', '\032', '%', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'a', 'p', 'i', '/', 'e', 'x', 'p', 'r', '/', 'v', '1', 
'a', 'l', 'p', 'h', 'a', '1', '/', 's', 'y', 'n', 't', 'a', 'x', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', 
'/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', 
'\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', 
'\"', '\201', '\002', '\n', '\004', 'R', 'B', 'A', 'C', '\022', '9', '\n', '\006', 'a', 'c', 't', 'i', 'o', 'n', '\030', '\001', ' ', '\001', '(', '\016', 
'2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'R', 
'B', 'A', 'C', '.', 'A', 'c', 't', 'i', 'o', 'n', 'R', '\006', 'a', 'c', 't', 'i', 'o', 'n', '\022', 'D', '\n', '\010', 'p', 'o', 'l', 
'i', 'c', 'i', 'e', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '(', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'R', 'B', 'A', 'C', '.', 'P', 'o', 'l', 'i', 'c', 'i', 'e', 's', 'E', 'n', 
't', 'r', 'y', 'R', '\010', 'p', 'o', 'l', 'i', 'c', 'i', 'e', 's', '\032', 'Y', '\n', '\r', 'P', 'o', 'l', 'i', 'c', 'i', 'e', 's', 
'E', 'n', 't', 'r', 'y', '\022', '\020', '\n', '\003', 'k', 'e', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\003', 'k', 'e', 'y', '\022', '2', 
'\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\034', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'o', 'l', 'i', 'c', 'y', 'R', '\005', 'v', 'a', 'l', 'u', 'e', 
':', '\002', '8', '\001', '\"', '\035', '\n', '\006', 'A', 'c', 't', 'i', 'o', 'n', '\022', '\t', '\n', '\005', 'A', 'L', 'L', 'O', 'W', '\020', '\000', 
'\022', '\010', '\n', '\004', 'D', 'E', 'N', 'Y', '\020', '\001', '\"', '\337', '\001', '\n', '\006', 'P', 'o', 'l', 'i', 'c', 'y', '\022', 'L', '\n', '\013', 
'p', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 
'n', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\013', 'p', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 's', '\022', 
'I', '\n', '\n', 'p', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '\037', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 
'a', 'l', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\n', 'p', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', 's', '\022', 
'<', '\n', '\t', 'c', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', '\030', '\003', ' ', '\001', '(', '\013', '2', '\036', '.', 'g', 'o', 'o', 'g', 
'l', 'e', '.', 'a', 'p', 'i', '.', 'e', 'x', 'p', 'r', '.', 'v', '1', 'a', 'l', 'p', 'h', 'a', '1', '.', 'E', 'x', 'p', 'r', 
'R', '\t', 'c', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', '\"', '\334', '\005', '\n', '\n', 'P', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 
'n', '\022', 'C', '\n', '\t', 'a', 'n', 'd', '_', 'r', 'u', 'l', 'e', 's', '\030', '\001', ' ', '\001', '(', '\013', '2', '$', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'e', 'r', 'm', 'i', 's', 
's', 'i', 'o', 'n', '.', 'S', 'e', 't', 'H', '\000', 'R', '\010', 'a', 'n', 'd', 'R', 'u', 'l', 'e', 's', '\022', 'A', '\n', '\010', 'o', 
'r', '_', 'r', 'u', 'l', 'e', 's', '\030', '\002', ' ', '\001', '(', '\013', '2', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', '.', 'S', 'e', 
't', 'H', '\000', 'R', '\007', 'o', 'r', 'R', 'u', 'l', 'e', 's', '\022', '\033', '\n', '\003', 'a', 'n', 'y', '\030', '\003', ' ', '\001', '(', '\010', 
'B', '\007', '\372', 'B', '\004', 'j', '\002', '\010', '\001', 'H', '\000', 'R', '\003', 'a', 'n', 'y', '\022', ';', '\n', '\006', 'h', 'e', 'a', 'd', 'e', 
'r', '\030', '\004', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'r', 'o', 
'u', 't', 'e', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', '\006', 'h', 'e', 'a', 'd', 
'e', 'r', '\022', '<', '\n', '\010', 'u', 'r', 'l', '_', 'p', 'a', 't', 'h', '\030', '\n', ' ', '\001', '(', '\013', '2', '\037', '.', 'e', 'n', 
'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'P', 'a', 't', 'h', 'M', 'a', 't', 'c', 
'h', 'e', 'r', 'H', '\000', 'R', '\007', 'u', 'r', 'l', 'P', 'a', 't', 'h', '\022', 'E', '\n', '\016', 'd', 'e', 's', 't', 'i', 'n', 'a', 
't', 'i', 'o', 'n', '_', 'i', 'p', '\030', '\005', ' ', '\001', '(', '\013', '2', '\034', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', 
'.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'C', 'i', 'd', 'r', 'R', 'a', 'n', 'g', 'e', 'H', '\000', 'R', '\r', 'd', 'e', 's', 
't', 'i', 'n', 'a', 't', 'i', 'o', 'n', 'I', 'p', '\022', '6', '\n', '\020', 'd', 'e', 's', 't', 'i', 'n', 'a', 't', 'i', 'o', 'n', 
'_', 'p', 'o', 'r', 't', '\030', '\006', ' ', '\001', '(', '\r', 'B', '\t', '\372', 'B', '\006', '*', '\004', '\030', '\377', '\377', '\003', 'H', '\000', 'R', 
'\017', 'd', 'e', 's', 't', 'i', 'n', 'a', 't', 'i', 'o', 'n', 'P', 'o', 'r', 't', '\022', 'A', '\n', '\010', 'm', 'e', 't', 'a', 'd', 
'a', 't', 'a', '\030', '\007', ' ', '\001', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 
't', 'c', 'h', 'e', 'r', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', '\010', 
'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '\022', '=', '\n', '\010', 'n', 'o', 't', '_', 'r', 'u', 'l', 'e', '\030', '\010', ' ', '\001', '(', 
'\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 
'P', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 'H', '\000', 'R', '\007', 'n', 'o', 't', 'R', 'u', 'l', 'e', '\022', 'W', '\n', '\025', 
'r', 'e', 'q', 'u', 'e', 's', 't', 'e', 'd', '_', 's', 'e', 'r', 'v', 'e', 'r', '_', 'n', 'a', 'm', 'e', '\030', '\t', ' ', '\001', 
'(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'S', 
't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', '\023', 'r', 'e', 'q', 'u', 'e', 's', 't', 'e', 'd', 
'S', 'e', 'r', 'v', 'e', 'r', 'N', 'a', 'm', 'e', '\032', 'G', '\n', '\003', 'S', 'e', 't', '\022', '@', '\n', '\005', 'r', 'u', 'l', 'e', 
's', '\030', '\001', ' ', '\003', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 
'a', 'c', '.', 'v', '2', '.', 'P', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', 
'\001', 'R', '\005', 'r', 'u', 'l', 'e', 's', 'B', '\013', '\n', '\004', 'r', 'u', 'l', 'e', '\022', '\003', '\370', 'B', '\001', '\"', '\365', '\006', '\n', 
'\t', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', '\022', '>', '\n', '\007', 'a', 'n', 'd', '_', 'i', 'd', 's', '\030', '\001', ' ', '\001', 
'(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', 
'.', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', '.', 'S', 'e', 't', 'H', '\000', 'R', '\006', 'a', 'n', 'd', 'I', 'd', 's', '\022', 
'<', '\n', '\006', 'o', 'r', '_', 'i', 'd', 's', '\030', '\002', ' ', '\001', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 
'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', '.', 'S', 
'e', 't', 'H', '\000', 'R', '\005', 'o', 'r', 'I', 'd', 's', '\022', '\033', '\n', '\003', 'a', 'n', 'y', '\030', '\003', ' ', '\001', '(', '\010', 'B', 
'\007', '\372', 'B', '\004', 'j', '\002', '\010', '\001', 'H', '\000', 'R', '\003', 'a', 'n', 'y', '\022', 'U', '\n', '\r', 'a', 'u', 't', 'h', 'e', 'n', 
't', 'i', 'c', 'a', 't', 'e', 'd', '\030', '\004', ' ', '\001', '(', '\013', '2', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', '.', 'A', 'u', 't', 
'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'e', 'd', 'H', '\000', 'R', '\r', 'a', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 
'e', 'd', '\022', '?', '\n', '\t', 's', 'o', 'u', 'r', 'c', 'e', '_', 'i', 'p', '\030', '\005', ' ', '\001', '(', '\013', '2', '\034', '.', 'e', 
'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'C', 'i', 'd', 'r', 'R', 'a', 'n', 'g', 
'e', 'B', '\002', '\030', '\001', 'H', '\000', 'R', '\010', 's', 'o', 'u', 'r', 'c', 'e', 'I', 'p', '\022', 'H', '\n', '\020', 'd', 'i', 'r', 'e', 
'c', 't', '_', 'r', 'e', 'm', 'o', 't', 'e', '_', 'i', 'p', '\030', '\n', ' ', '\001', '(', '\013', '2', '\034', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'C', 'i', 'd', 'r', 'R', 'a', 'n', 'g', 'e', 'H', '\000', 
'R', '\016', 'd', 'i', 'r', 'e', 'c', 't', 'R', 'e', 'm', 'o', 't', 'e', 'I', 'p', '\022', ';', '\n', '\t', 'r', 'e', 'm', 'o', 't', 
'e', '_', 'i', 'p', '\030', '\013', ' ', '\001', '(', '\013', '2', '\034', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', 
'.', 'c', 'o', 'r', 'e', '.', 'C', 'i', 'd', 'r', 'R', 'a', 'n', 'g', 'e', 'H', '\000', 'R', '\010', 'r', 'e', 'm', 'o', 't', 'e', 
'I', 'p', '\022', ';', '\n', '\006', 'h', 'e', 'a', 'd', 'e', 'r', '\030', '\006', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'r', 'o', 'u', 't', 'e', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'M', 'a', 't', 'c', 
'h', 'e', 'r', 'H', '\000', 'R', '\006', 'h', 'e', 'a', 'd', 'e', 'r', '\022', '<', '\n', '\010', 'u', 'r', 'l', '_', 'p', 'a', 't', 'h', 
'\030', '\t', ' ', '\001', '(', '\013', '2', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '.', 'P', 'a', 't', 'h', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', '\007', 'u', 'r', 'l', 'P', 'a', 't', 'h', 
'\022', 'A', '\n', '\010', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '\030', '\007', ' ', '\001', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 
'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'M', 'a', 
't', 'c', 'h', 'e', 'r', 'H', '\000', 'R', '\010', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '\022', '8', '\n', '\006', 'n', 'o', 't', '_', 
'i', 'd', '\030', '\010', ' ', '\001', '(', '\013', '2', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 
'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', 'H', '\000', 'R', '\005', 'n', 'o', 't', 'I', 'd', 
'\032', 'B', '\n', '\003', 'S', 'e', 't', '\022', ';', '\n', '\003', 'i', 'd', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', '\037', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'P', 'r', 'i', 'n', 'c', 'i', 
'p', 'a', 'l', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\003', 'i', 'd', 's', '\032', '_', '\n', '\r', 'A', 'u', 't', 
'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'e', 'd', '\022', 'H', '\n', '\016', 'p', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', '_', 'n', 
'a', 'm', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 
't', 'c', 'h', 'e', 'r', '.', 'S', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\r', 'p', 'r', 'i', 'n', 
'c', 'i', 'p', 'a', 'l', 'N', 'a', 'm', 'e', 'J', '\004', '\010', '\001', '\020', '\002', 'B', '\021', '\n', '\n', 'i', 'd', 'e', 'n', 't', 'i', 
'f', 'i', 'e', 'r', '\022', '\003', '\370', 'B', '\001', 'B', '9', '\n', '\"', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 
'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', 'B', '\t', 'R', 
'b', 'a', 'c', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', 
'3', 
};

static upb_def_init *deps[9] = {
  &envoy_api_v2_core_address_proto_upbdefinit,
  &envoy_api_v2_route_route_components_proto_upbdefinit,
  &envoy_type_matcher_metadata_proto_upbdefinit,
  &envoy_type_matcher_path_proto_upbdefinit,
  &envoy_type_matcher_string_proto_upbdefinit,
  &google_api_expr_v1alpha1_syntax_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_rbac_v2_rbac_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/config/rbac/v2/rbac.proto",
  UPB_STRVIEW_INIT(descriptor, 2501)
};
