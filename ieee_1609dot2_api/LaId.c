/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#include "LaId.h"

int
LaId_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LaId_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static const ber_tlv_tag_t asn_DEF_LaId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LaId = {
	"LaId",
	"LaId",
	OCTET_STRING_free,
	OCTET_STRING_print,
	LaId_constraint,
	OCTET_STRING_decode_ber,
	OCTET_STRING_encode_der,
	OCTET_STRING_decode_xer,
	OCTET_STRING_encode_xer,
	OCTET_STRING_decode_oer,
	OCTET_STRING_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LaId_tags_1,
	sizeof(asn_DEF_LaId_tags_1)
		/sizeof(asn_DEF_LaId_tags_1[0]), /* 1 */
	asn_DEF_LaId_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaId_tags_1)
		/sizeof(asn_DEF_LaId_tags_1[0]), /* 1 */
	&asn_OER_type_LaId_constr_1,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

