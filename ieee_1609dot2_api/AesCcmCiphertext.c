/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#include "AesCcmCiphertext.h"

static int
memb_nonce_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_nonce_constr_2 GCC_NOTUSED = {
	{ 0, 0 },
	12	/* (SIZE(12..12)) */};
asn_TYPE_member_t asn_MBR_AesCcmCiphertext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AesCcmCiphertext, nonce),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_nonce_constraint_1,
		&asn_OER_memb_nonce_constr_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nonce"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AesCcmCiphertext, ccmCiphertext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Opaque,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ccmCiphertext"
		},
};
static const ber_tlv_tag_t asn_DEF_AesCcmCiphertext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AesCcmCiphertext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonce */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ccmCiphertext */
};
asn_SEQUENCE_specifics_t asn_SPC_AesCcmCiphertext_specs_1 = {
	sizeof(struct AesCcmCiphertext),
	offsetof(struct AesCcmCiphertext, _asn_ctx),
	asn_MAP_AesCcmCiphertext_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AesCcmCiphertext = {
	"AesCcmCiphertext",
	"AesCcmCiphertext",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_oer,
	SEQUENCE_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AesCcmCiphertext_tags_1,
	sizeof(asn_DEF_AesCcmCiphertext_tags_1)
		/sizeof(asn_DEF_AesCcmCiphertext_tags_1[0]), /* 1 */
	asn_DEF_AesCcmCiphertext_tags_1,	/* Same as above */
	sizeof(asn_DEF_AesCcmCiphertext_tags_1)
		/sizeof(asn_DEF_AesCcmCiphertext_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_AesCcmCiphertext_1,
	2,	/* Elements count */
	&asn_SPC_AesCcmCiphertext_specs_1	/* Additional specs */
};

