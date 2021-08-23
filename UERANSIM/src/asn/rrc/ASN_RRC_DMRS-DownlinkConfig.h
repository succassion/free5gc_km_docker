/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_DMRS_DownlinkConfig_H_
#define	_ASN_RRC_DMRS_DownlinkConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_DMRS_DownlinkConfig__dmrs_Type {
	ASN_RRC_DMRS_DownlinkConfig__dmrs_Type_type2	= 0
} e_ASN_RRC_DMRS_DownlinkConfig__dmrs_Type;
typedef enum ASN_RRC_DMRS_DownlinkConfig__dmrs_AdditionalPosition {
	ASN_RRC_DMRS_DownlinkConfig__dmrs_AdditionalPosition_pos0	= 0,
	ASN_RRC_DMRS_DownlinkConfig__dmrs_AdditionalPosition_pos1	= 1,
	ASN_RRC_DMRS_DownlinkConfig__dmrs_AdditionalPosition_pos3	= 2
} e_ASN_RRC_DMRS_DownlinkConfig__dmrs_AdditionalPosition;
typedef enum ASN_RRC_DMRS_DownlinkConfig__maxLength {
	ASN_RRC_DMRS_DownlinkConfig__maxLength_len2	= 0
} e_ASN_RRC_DMRS_DownlinkConfig__maxLength;

/* Forward declarations */
struct ASN_RRC_SetupRelease_PTRS_DownlinkConfig;

/* ASN_RRC_DMRS-DownlinkConfig */
typedef struct ASN_RRC_DMRS_DownlinkConfig {
	long	*dmrs_Type;	/* OPTIONAL */
	long	*dmrs_AdditionalPosition;	/* OPTIONAL */
	long	*maxLength;	/* OPTIONAL */
	long	*scramblingID0;	/* OPTIONAL */
	long	*scramblingID1;	/* OPTIONAL */
	struct ASN_RRC_SetupRelease_PTRS_DownlinkConfig	*phaseTrackingRS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_DMRS_DownlinkConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dmrs_Type_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dmrs_AdditionalPosition_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxLength_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_DMRS_DownlinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_DMRS_DownlinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_DMRS_DownlinkConfig_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_DMRS_DownlinkConfig_H_ */
#include <asn_internal.h>