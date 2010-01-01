/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#include <asn_internal.h>

#include "ManufacturerSpecificSection.h"

static asn_TYPE_member_t asn_MBR_encodedentries_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ManufacturerSpecificEncoded,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_encodedentries_tags_3[] = {
	(ASN_TAG_CLASS_APPLICATION | (6006 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_encodedentries_specs_3 = {
	sizeof(struct ManufacturerSpecificSection__encodedentries),
	offsetof(struct ManufacturerSpecificSection__encodedentries, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_encodedentries_3 = {
	"encodedentries",
	"encodedentries",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_encodedentries_tags_3,
	sizeof(asn_DEF_encodedentries_tags_3)
		/sizeof(asn_DEF_encodedentries_tags_3[0]) - 1, /* 1 */
	asn_DEF_encodedentries_tags_3,	/* Same as above */
	sizeof(asn_DEF_encodedentries_tags_3)
		/sizeof(asn_DEF_encodedentries_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_encodedentries_3,
	1,	/* Single element */
	&asn_SPC_encodedentries_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_binaryentries_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ManufacturerSpecificBinary,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_binaryentries_tags_5[] = {
	(ASN_TAG_CLASS_APPLICATION | (6007 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_binaryentries_specs_5 = {
	sizeof(struct ManufacturerSpecificSection__binaryentries),
	offsetof(struct ManufacturerSpecificSection__binaryentries, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_binaryentries_5 = {
	"binaryentries",
	"binaryentries",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_binaryentries_tags_5,
	sizeof(asn_DEF_binaryentries_tags_5)
		/sizeof(asn_DEF_binaryentries_tags_5[0]) - 1, /* 1 */
	asn_DEF_binaryentries_tags_5,	/* Same as above */
	sizeof(asn_DEF_binaryentries_tags_5)
		/sizeof(asn_DEF_binaryentries_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_binaryentries_5,
	1,	/* Single element */
	&asn_SPC_binaryentries_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ManufacturerSpecificSection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ManufacturerSpecificSection, manufacturerid),
		(ASN_TAG_CLASS_APPLICATION | (6005 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ManufacturerID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"manufacturerid"
		},
	{ ATF_POINTER, 2, offsetof(struct ManufacturerSpecificSection, encodedentries),
		(ASN_TAG_CLASS_APPLICATION | (6006 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_encodedentries_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encodedentries"
		},
	{ ATF_POINTER, 1, offsetof(struct ManufacturerSpecificSection, binaryentries),
		(ASN_TAG_CLASS_APPLICATION | (6007 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_binaryentries_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"binaryentries"
		},
};
static ber_tlv_tag_t asn_DEF_ManufacturerSpecificSection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ManufacturerSpecificSection_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (6005 << 2)), 0, 0, 0 }, /* manufacturerid at 258 */
    { (ASN_TAG_CLASS_APPLICATION | (6006 << 2)), 1, 0, 0 }, /* encodedentries at 263 */
    { (ASN_TAG_CLASS_APPLICATION | (6007 << 2)), 2, 0, 0 } /* binaryentries at 267 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ManufacturerSpecificSection_specs_1 = {
	sizeof(struct ManufacturerSpecificSection),
	offsetof(struct ManufacturerSpecificSection, _asn_ctx),
	asn_MAP_ManufacturerSpecificSection_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ManufacturerSpecificSection = {
	"ManufacturerSpecificSection",
	"ManufacturerSpecificSection",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ManufacturerSpecificSection_tags_1,
	sizeof(asn_DEF_ManufacturerSpecificSection_tags_1)
		/sizeof(asn_DEF_ManufacturerSpecificSection_tags_1[0]), /* 1 */
	asn_DEF_ManufacturerSpecificSection_tags_1,	/* Same as above */
	sizeof(asn_DEF_ManufacturerSpecificSection_tags_1)
		/sizeof(asn_DEF_ManufacturerSpecificSection_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ManufacturerSpecificSection_1,
	3,	/* Elements count */
	&asn_SPC_ManufacturerSpecificSection_specs_1	/* Additional specs */
};
