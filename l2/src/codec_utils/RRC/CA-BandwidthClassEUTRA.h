/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CA_BandwidthClassEUTRA_H_
#define	_CA_BandwidthClassEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_BandwidthClassEUTRA {
	CA_BandwidthClassEUTRA_a	= 0,
	CA_BandwidthClassEUTRA_b	= 1,
	CA_BandwidthClassEUTRA_c	= 2,
	CA_BandwidthClassEUTRA_d	= 3,
	CA_BandwidthClassEUTRA_e	= 4,
	CA_BandwidthClassEUTRA_f	= 5
	/*
	 * Enumeration is extensible
	 */
} e_CA_BandwidthClassEUTRA;

/* CA-BandwidthClassEUTRA */
typedef long	 CA_BandwidthClassEUTRA_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CA_BandwidthClassEUTRA_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CA_BandwidthClassEUTRA;
extern const asn_INTEGER_specifics_t asn_SPC_CA_BandwidthClassEUTRA_specs_1;
asn_struct_free_f CA_BandwidthClassEUTRA_free;
asn_struct_print_f CA_BandwidthClassEUTRA_print;
asn_constr_check_f CA_BandwidthClassEUTRA_constraint;
ber_type_decoder_f CA_BandwidthClassEUTRA_decode_ber;
der_type_encoder_f CA_BandwidthClassEUTRA_encode_der;
xer_type_decoder_f CA_BandwidthClassEUTRA_decode_xer;
xer_type_encoder_f CA_BandwidthClassEUTRA_encode_xer;
oer_type_decoder_f CA_BandwidthClassEUTRA_decode_oer;
oer_type_encoder_f CA_BandwidthClassEUTRA_encode_oer;
per_type_decoder_f CA_BandwidthClassEUTRA_decode_uper;
per_type_encoder_f CA_BandwidthClassEUTRA_encode_uper;
per_type_decoder_f CA_BandwidthClassEUTRA_decode_aper;
per_type_encoder_f CA_BandwidthClassEUTRA_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CA_BandwidthClassEUTRA_H_ */
#include <asn_internal.h>
