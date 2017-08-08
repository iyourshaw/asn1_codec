/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#include "LinkageData.h"

asn_TYPE_member_t asn_MBR_LinkageData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LinkageData, iCert),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iCert"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LinkageData, linkage_value),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LinkageValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"linkage-value"
		},
	{ ATF_POINTER, 1, offsetof(struct LinkageData, group_linkage_value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GroupLinkageValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"group-linkage-value"
		},
};
static const int asn_MAP_LinkageData_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LinkageData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LinkageData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iCert */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* linkage-value */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* group-linkage-value */
};
asn_SEQUENCE_specifics_t asn_SPC_LinkageData_specs_1 = {
	sizeof(struct LinkageData),
	offsetof(struct LinkageData, _asn_ctx),
	asn_MAP_LinkageData_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LinkageData_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LinkageData = {
	"LinkageData",
	"LinkageData",
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
	asn_DEF_LinkageData_tags_1,
	sizeof(asn_DEF_LinkageData_tags_1)
		/sizeof(asn_DEF_LinkageData_tags_1[0]), /* 1 */
	asn_DEF_LinkageData_tags_1,	/* Same as above */
	sizeof(asn_DEF_LinkageData_tags_1)
		/sizeof(asn_DEF_LinkageData_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_LinkageData_1,
	3,	/* Elements count */
	&asn_SPC_LinkageData_specs_1	/* Additional specs */
};

