/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#include "SequenceOfRegionAndSubregions.h"

asn_TYPE_member_t asn_MBR_SequenceOfRegionAndSubregions_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionAndSubregions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SequenceOfRegionAndSubregions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SequenceOfRegionAndSubregions_specs_1 = {
	sizeof(struct SequenceOfRegionAndSubregions),
	offsetof(struct SequenceOfRegionAndSubregions, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SequenceOfRegionAndSubregions = {
	"SequenceOfRegionAndSubregions",
	"SequenceOfRegionAndSubregions",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_oer,
	SEQUENCE_OF_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SequenceOfRegionAndSubregions_tags_1,
	sizeof(asn_DEF_SequenceOfRegionAndSubregions_tags_1)
		/sizeof(asn_DEF_SequenceOfRegionAndSubregions_tags_1[0]), /* 1 */
	asn_DEF_SequenceOfRegionAndSubregions_tags_1,	/* Same as above */
	sizeof(asn_DEF_SequenceOfRegionAndSubregions_tags_1)
		/sizeof(asn_DEF_SequenceOfRegionAndSubregions_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_SequenceOfRegionAndSubregions_1,
	1,	/* Single element */
	&asn_SPC_SequenceOfRegionAndSubregions_specs_1	/* Additional specs */
};

