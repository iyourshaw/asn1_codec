/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_SymmetricEncryptionKey_H_
#define	_SymmetricEncryptionKey_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SymmetricEncryptionKey_PR {
	SymmetricEncryptionKey_PR_NOTHING,	/* No components present */
	SymmetricEncryptionKey_PR_aes128Ccm
	/* Extensions may appear below */
	
} SymmetricEncryptionKey_PR;

/* SymmetricEncryptionKey */
typedef struct SymmetricEncryptionKey {
	SymmetricEncryptionKey_PR present;
	union SymmetricEncryptionKey_u {
		OCTET_STRING_t	 aes128Ccm;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SymmetricEncryptionKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SymmetricEncryptionKey;
extern asn_CHOICE_specifics_t asn_SPC_SymmetricEncryptionKey_specs_1;
extern asn_TYPE_member_t asn_MBR_SymmetricEncryptionKey_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SymmetricEncryptionKey_H_ */
#include <asn_internal.h>
