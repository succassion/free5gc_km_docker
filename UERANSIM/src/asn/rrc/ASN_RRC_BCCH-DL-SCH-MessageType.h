/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_BCCH_DL_SCH_MessageType_H_
#define	_ASN_RRC_BCCH_DL_SCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_BCCH_DL_SCH_MessageType_PR {
	ASN_RRC_BCCH_DL_SCH_MessageType_PR_NOTHING,	/* No components present */
	ASN_RRC_BCCH_DL_SCH_MessageType_PR_c1,
	ASN_RRC_BCCH_DL_SCH_MessageType_PR_messageClassExtension
} ASN_RRC_BCCH_DL_SCH_MessageType_PR;
typedef enum ASN_RRC_BCCH_DL_SCH_MessageType__c1_PR {
	ASN_RRC_BCCH_DL_SCH_MessageType__c1_PR_NOTHING,	/* No components present */
	ASN_RRC_BCCH_DL_SCH_MessageType__c1_PR_systemInformation,
	ASN_RRC_BCCH_DL_SCH_MessageType__c1_PR_systemInformationBlockType1
} ASN_RRC_BCCH_DL_SCH_MessageType__c1_PR;

/* Forward declarations */
struct ASN_RRC_SystemInformation;
struct ASN_RRC_SIB1;

/* ASN_RRC_BCCH-DL-SCH-MessageType */
typedef struct ASN_RRC_BCCH_DL_SCH_MessageType {
	ASN_RRC_BCCH_DL_SCH_MessageType_PR present;
	union ASN_RRC_BCCH_DL_SCH_MessageType_u {
		struct ASN_RRC_BCCH_DL_SCH_MessageType__c1 {
			ASN_RRC_BCCH_DL_SCH_MessageType__c1_PR present;
			union ASN_RRC_BCCH_DL_SCH_MessageType__ASN_RRC_c1_u {
				struct ASN_RRC_SystemInformation	*systemInformation;
				struct ASN_RRC_SIB1	*systemInformationBlockType1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct ASN_RRC_BCCH_DL_SCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_BCCH_DL_SCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_BCCH_DL_SCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_ASN_RRC_BCCH_DL_SCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_BCCH_DL_SCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_ASN_RRC_BCCH_DL_SCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_BCCH_DL_SCH_MessageType_H_ */
#include <asn_internal.h>
