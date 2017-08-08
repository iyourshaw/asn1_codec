/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#include "Duration.h"

static asn_oer_constraints_t asn_OER_type_Duration_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_TYPE_member_t asn_MBR_Duration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.microseconds),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"microseconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.milliseconds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"milliseconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.seconds),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"seconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.minutes),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"minutes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.hours),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"hours"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.sixtyHours),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sixtyHours"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Duration, choice.years),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"years"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Duration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* microseconds */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* milliseconds */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* seconds */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* minutes */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* hours */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sixtyHours */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* years */
};
asn_CHOICE_specifics_t asn_SPC_Duration_specs_1 = {
	sizeof(struct Duration),
	offsetof(struct Duration, _asn_ctx),
	offsetof(struct Duration, present),
	sizeof(((struct Duration *)0)->present),
	asn_MAP_Duration_tag2el_1,
	7,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Duration = {
	"Duration",
	"Duration",
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
	&asn_OER_type_Duration_constr_1,
	0,	/* No PER visible constraints */
	asn_MBR_Duration_1,
	7,	/* Elements count */
	&asn_SPC_Duration_specs_1	/* Additional specs */
};

