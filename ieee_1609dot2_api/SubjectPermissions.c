/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#include "SubjectPermissions.h"

static asn_oer_constraints_t asn_OER_type_SubjectPermissions_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_TYPE_member_t asn_MBR_SubjectPermissions_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SubjectPermissions, choice.Explicit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SequenceOfPsidSspRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"explicit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SubjectPermissions, choice.all),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"all"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SubjectPermissions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicit */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* all */
};
asn_CHOICE_specifics_t asn_SPC_SubjectPermissions_specs_1 = {
	sizeof(struct SubjectPermissions),
	offsetof(struct SubjectPermissions, _asn_ctx),
	offsetof(struct SubjectPermissions, present),
	sizeof(((struct SubjectPermissions *)0)->present),
	asn_MAP_SubjectPermissions_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SubjectPermissions = {
	"SubjectPermissions",
	"SubjectPermissions",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_oer,
	CHOICE_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_OER_type_SubjectPermissions_constr_1,
	0,	/* No PER visible constraints */
	asn_MBR_SubjectPermissions_1,
	2,	/* Elements count */
	&asn_SPC_SubjectPermissions_specs_1	/* Additional specs */
};

