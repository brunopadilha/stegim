/***********************************************************
 * stegoptions.hpp - Esse arquivo conterá todas as opções
 * disponíveis no stegim
 * ********************************************************/
#ifndef _STEGOPTIONS_HPP_
#define _STEGOPTIONS_HPP_

//--OPÇÕES-------------------------------------------------
/***********************************************************
 * STEGIM_OPTIONS - macro com as opções do programa
 * ---------------------------------------------------------
 *
 *  As opções são nessa ordem:
 *  1 - (const char*)	opção longa (--opcao)
 *  2 - (int)		opção curta (-p)
 *  3 - (const char*)	Argumento da opção (--opcao=ARG)
 *  4 - (int)		FLAGS
 *  ( ver http://www.gnu.org/software/libc/manual/html_node/Argp-Option-Flags.html )
 *  5 - (char*)		String de documentação
 *  6 - (int)		Grupo
 *  *******************************************************/
//--STEGIM-------------------------------------------------
//VERBOSITY
#define OPT_VERBOSITY 		"verbosity", 'v' //1 e 2
#define OPT_VERBOSITY_ARG	0		//3
#define OPT_VERBOSITY_FLAGS	0		//4
#define OPT_VERBOSITY_DOC	"Enable verbosity mode" //5
#define OPT_VERBOSITY_GROUP	0	//6
#define VERBOSITY_OPT		{OPT_VERBOSITY, OPT_VERBOSITY_ARG, OPT_VERBOSITY_FLAGS, OPT_VERBOSITY_DOC, OPT_VERBOSITY_GROUP}

//QUIET
#define OPT_QUIET 		"quiet", 'q' //1 e 2
#define OPT_QUIET_ARG		0		//3
#define OPT_QUIET_FLAGS		0		//4
#define OPT_QUIET_DOC		"Disable verbosity mode" //5
#define OPT_QUIET_GROUP		0		//6
#define QUIET_OPT		{OPT_QUIET, OPT_QUIET_ARG, OPT_QUIET_FLAGS, OPT_QUIET_DOC, OPT_QUIET_GROUP}

//--DEFAULT FOR COMMANDS-----------------------------------
//CHANNELS
#define OPT_CHANNELS 		"channels", 'C' //1 e 2
#define OPT_CHANNELS_ARG 	"BGR_STRING"	//2
#define OPT_CHANNELS_FLAGS 	0		//3
#define OPT_CHANNELS_DOC 	"Sets the channels that will be used for the steganography using the BGR_STRING. e.g. \"BGR\" use all channels; \"B-R\" blue and red channels;"	//4
#define OPT_CHANNELS_GROUP	0		//5
#define CHANNELS_OPT 		{OPT_CHANNELS, OPT_CHANNELS_ARG, OPT_CHANNELS_FLAGS, OPT_CHANNELS_DOC, OPT_CHANNELS_GROUP}

//NLEAST-SIGNIFICANT-BIT
#define OPT_NLEAST_SB		"nleast-significant_bit", 'b'	//1 e 2
#define OPT_NLEAST_SB_ARG	"N"	//2
#define OPT_NLEAST_SB_FLAGS	0	//3
#define OPT_NLEAST_SB_DOC	"Sets the number of bits used on the stenography mask."	//4
#define OPT_NLEAST_SB_GROUP	0	//5
#define NLEAST_SB_OPT 		{OPT_NLEAST_SB, OPT_NLEAST_SB_ARG, OPT_NLEAST_SB_FLAGS, OPT_NLEAST_SB_DOC, OPT_NLEAST_SB_GROUP}	//6

//--STEG---------------------------------------------------
//FOREACH_IMG_TXT
#define OPT_FOREACH_IT 		"foreach-img-txt", 'F'
#define OPT_FOREACH_IT_ARG	"[img.jpg text.txt]+"
#define OPT_FOREACH_IT_FLAGS	0
#define OPT_FOREACH_IT_DOC	"For every image, a file must to be given for input."
#define OPT_FOREACH_IT_GROUP	0
#define FOREACH_IT_OPT		{OPT_FOREACH_IT, OPT_FOREACH_IT_ARG, OPT_FOREACH_IT_FLAGS, OPT_FOREACH_IT_DOC, OPT_FOREACH_IT_GROUP}


//OPTIONS GROUPS-------------------------------------------

//DEFAULT OPTIONS (todos os comandos terão)
#define STEGIM_DEFAULT_OPTION\
	CHANNELS_OPT, NLEAST_SB_OPT

//STEG
#define STEG_NAME "steg"
#define STEGIM_STEG_OPTIONS {0,0,0,0,STEG_NAME,0}, STEGIM_DEFAULT_OPTION, FOREACH_IT_OPT

//INFO
#define INFO_NAME "info"
#define STEGIM_INFO_OPTIONS {0,0,0,0,INFO_NAME,0}, STEGIM_DEFAULT_OPTION

//X
#define X_NAME "x"
#define STEGIM_X_OPTIONS {0,0,0,0,X_NAME,0}, STEGIM_DEFAULT_OPTION

//STEGIM
#define STEGIM_OPTIONS VERBOSITY_OPT, QUIET_OPT, STEGIM_STEG_OPTIONS, STEGIM_INFO_OPTIONS, STEGIM_X_OPTIONS


#endif //_STEGOPTIONS_HPP
