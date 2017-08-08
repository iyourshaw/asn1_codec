/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_CountryAndSubregions_H_
#define	_CountryAndSubregions_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CountryOnly.h"
#include "SequenceOfRegionAndSubregions.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CountryAndSubregions */
typedef struct CountryAndSubregions {
	CountryOnly_t	 country;
	SequenceOfRegionAndSubregions_t	 regionAndSubregions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CountryAndSubregions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountryAndSubregions;
extern asn_SEQUENCE_specifics_t asn_SPC_CountryAndSubregions_specs_1;
extern asn_TYPE_member_t asn_MBR_CountryAndSubregions_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CountryAndSubregions_H_ */
#include <asn_internal.h>
