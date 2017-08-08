/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_SequenceOfPsidGroupPermissions_H_
#define	_SequenceOfPsidGroupPermissions_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PsidGroupPermissions;

/* SequenceOfPsidGroupPermissions */
typedef struct SequenceOfPsidGroupPermissions {
	A_SEQUENCE_OF(struct PsidGroupPermissions) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfPsidGroupPermissions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfPsidGroupPermissions;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfPsidGroupPermissions_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfPsidGroupPermissions_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PsidGroupPermissions.h"

#endif	/* _SequenceOfPsidGroupPermissions_H_ */
#include <asn_internal.h>
