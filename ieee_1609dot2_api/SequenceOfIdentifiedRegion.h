/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_SequenceOfIdentifiedRegion_H_
#define	_SequenceOfIdentifiedRegion_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IdentifiedRegion;

/* SequenceOfIdentifiedRegion */
typedef struct SequenceOfIdentifiedRegion {
	A_SEQUENCE_OF(struct IdentifiedRegion) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfIdentifiedRegion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfIdentifiedRegion;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfIdentifiedRegion_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfIdentifiedRegion_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IdentifiedRegion.h"

#endif	/* _SequenceOfIdentifiedRegion_H_ */
#include <asn_internal.h>
