/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_SequenceOfRecipientInfo_H_
#define	_SequenceOfRecipientInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RecipientInfo;

/* SequenceOfRecipientInfo */
typedef struct SequenceOfRecipientInfo {
	A_SEQUENCE_OF(struct RecipientInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfRecipientInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfRecipientInfo;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfRecipientInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfRecipientInfo_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RecipientInfo.h"

#endif	/* _SequenceOfRecipientInfo_H_ */
#include <asn_internal.h>
