/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#include "EndEntityType.h"

int
EndEntityType_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
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
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_EndEntityType_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static const ber_tlv_tag_t asn_DEF_EndEntityType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EndEntityType = {
	"EndEntityType",
	"EndEntityType",
	BIT_STRING_free,
	BIT_STRING_print,
	EndEntityType_constraint,
	BIT_STRING_decode_ber,
	BIT_STRING_encode_der,
	BIT_STRING_decode_xer,
	BIT_STRING_encode_xer,
	BIT_STRING_decode_oer,
	BIT_STRING_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EndEntityType_tags_1,
	sizeof(asn_DEF_EndEntityType_tags_1)
		/sizeof(asn_DEF_EndEntityType_tags_1[0]), /* 1 */
	asn_DEF_EndEntityType_tags_1,	/* Same as above */
	sizeof(asn_DEF_EndEntityType_tags_1)
		/sizeof(asn_DEF_EndEntityType_tags_1[0]), /* 1 */
	&asn_OER_type_EndEntityType_constr_1,
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

