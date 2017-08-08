/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_HashedData_H_
#define	_HashedData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HashedData_PR {
	HashedData_PR_NOTHING,	/* No components present */
	HashedData_PR_sha256HashedData
	/* Extensions may appear below */
	
} HashedData_PR;

/* HashedData */
typedef struct HashedData {
	HashedData_PR present;
	union HashedData_u {
		OCTET_STRING_t	 sha256HashedData;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HashedData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HashedData;
extern asn_CHOICE_specifics_t asn_SPC_HashedData_specs_1;
extern asn_TYPE_member_t asn_MBR_HashedData_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _HashedData_H_ */
#include <asn_internal.h>
