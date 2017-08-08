/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_IdentifiedRegion_H_
#define	_IdentifiedRegion_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CountryOnly.h"
#include "CountryAndRegions.h"
#include "CountryAndSubregions.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IdentifiedRegion_PR {
	IdentifiedRegion_PR_NOTHING,	/* No components present */
	IdentifiedRegion_PR_countryOnly,
	IdentifiedRegion_PR_countryAndRegions,
	IdentifiedRegion_PR_countryAndSubregions
	/* Extensions may appear below */
	
} IdentifiedRegion_PR;

/* IdentifiedRegion */
typedef struct IdentifiedRegion {
	IdentifiedRegion_PR present;
	union IdentifiedRegion_u {
		CountryOnly_t	 countryOnly;
		CountryAndRegions_t	 countryAndRegions;
		CountryAndSubregions_t	 countryAndSubregions;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IdentifiedRegion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IdentifiedRegion;
extern asn_CHOICE_specifics_t asn_SPC_IdentifiedRegion_specs_1;
extern asn_TYPE_member_t asn_MBR_IdentifiedRegion_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _IdentifiedRegion_H_ */
#include <asn_internal.h>
