/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SFBOOL_BOOL_A1 5
#define SFBOOL_BOOL_A2 6
#define LAST_ALTIVEC_REGNO 95
#define FIRST_FPR_REGNO 32
#define TFIAR_SPR 129
#define SFBOOL_BOOL_D 4
#define FIRST_ALTIVEC_REGNO 64
#define STATIC_CHAIN_REGNUM 11
#define SFBOOL_MFVSR_A 3
#define SFBOOL_MFVSR_D 2
#define TEXASR_SPR 130
#define CA_REGNO 98
#define SFBOOL_TMP_VSX_DI 12
#define SFBOOL_SHL_A 8
#define CR6_REGNO 106
#define ARG_POINTER_REGNUM 99
#define MAX_CR_REGNO 107
#define VRSAVE_REGNO 108
#define TOC_REGNUM 2
#define SFBOOL_MFVSR_A_V4SF 10
#define FIRST_GPR_REGNO 0
#define CR1_REGNO 101
#define LAST_GPR_REGNO 31
#define TFHAR_SPR 128
#define SFBOOL_MTVSR_D 9
#define SFBOOL_TMP_VSX 1
#define CR2_REGNO 102
#define MAX_HTM_OPERANDS 4
#define MAX_MMA_OPERANDS 7
#define CR3_REGNO 103
#define VSCR_REGNO 109
#define CTR_REGNO 97
#define SFBOOL_MTVSR_D_V4SF 13
#define CR0_REGNO 100
#define SFBOOL_BOOL_A_DI 11
#define CR4_REGNO 104
#define FRAME_POINTER_REGNUM 110
#define CR5_REGNO 105
#define SFBOOL_TMP_GPR 0
#define LAST_FPR_REGNO 63
#define SFBOOL_SHL_D 7
#define CR7_REGNO 107
#define HARD_FRAME_POINTER_REGNUM 31
#define TEXASRU_SPR 131
#define LR_REGNO 96
#define STACK_POINTER_REGNUM 1

enum epilogue_type {
  EPILOGUE_TYPE_NORMAL = 0,
  EPILOGUE_TYPE_SIBCALL = 1,
  EPILOGUE_TYPE_EH_RETURN = 2
};
#define NUM_EPILOGUE_TYPE_VALUES 3
extern const char *const epilogue_type_strings[];

enum unspec {
  UNSPEC_PROBE_STACK = 0,
  UNSPEC_TOCPTR = 1,
  UNSPEC_TOC = 2,
  UNSPEC_TOCSLOT = 3,
  UNSPEC_MOVSI_GOT = 4,
  UNSPEC_FCTIWZ = 5,
  UNSPEC_FRIM = 6,
  UNSPEC_FRIN = 7,
  UNSPEC_FRIP = 8,
  UNSPEC_FRIZ = 9,
  UNSPEC_XSRDPI = 10,
  UNSPEC_LD_MPIC = 11,
  UNSPEC_RELD_MPIC = 12,
  UNSPEC_MPIC_CORRECT = 13,
  UNSPEC_TLSGD = 14,
  UNSPEC_TLSLD = 15,
  UNSPEC_TLS_GET_ADDR = 16,
  UNSPEC_MOVESI_FROM_CR = 17,
  UNSPEC_MOVESI_TO_CR = 18,
  UNSPEC_XVTLSBB = 19,
  UNSPEC_TLSDTPREL = 20,
  UNSPEC_TLSDTPRELHA = 21,
  UNSPEC_TLSDTPRELLO = 22,
  UNSPEC_TLSGOTDTPREL = 23,
  UNSPEC_TLSTPREL = 24,
  UNSPEC_TLSTPRELHA = 25,
  UNSPEC_TLSTPRELLO = 26,
  UNSPEC_TLSGOTTPREL = 27,
  UNSPEC_TLSTLS = 28,
  UNSPEC_TLSTLS_PCREL = 29,
  UNSPEC_FIX_TRUNC_TF = 30,
  UNSPEC_STFIWX = 31,
  UNSPEC_POPCNTB = 32,
  UNSPEC_FRES = 33,
  UNSPEC_SP_SET = 34,
  UNSPEC_SP_TEST = 35,
  UNSPEC_SYNC = 36,
  UNSPEC_LWSYNC = 37,
  UNSPEC_SYNC_OP = 38,
  UNSPEC_ATOMIC = 39,
  UNSPEC_CMPXCHG = 40,
  UNSPEC_XCHG = 41,
  UNSPEC_AND = 42,
  UNSPEC_DLMZB = 43,
  UNSPEC_DLMZB_CR = 44,
  UNSPEC_DLMZB_STRLEN = 45,
  UNSPEC_RSQRT = 46,
  UNSPEC_TOCREL = 47,
  UNSPEC_MACHOPIC_OFFSET = 48,
  UNSPEC_BPERM = 49,
  UNSPEC_COPYSIGN = 50,
  UNSPEC_PARITY = 51,
  UNSPEC_CMPB = 52,
  UNSPEC_FCTIW = 53,
  UNSPEC_FCTID = 54,
  UNSPEC_LFIWAX = 55,
  UNSPEC_LFIWZX = 56,
  UNSPEC_FCTIWUZ = 57,
  UNSPEC_NOP = 58,
  UNSPEC_GRP_END_NOP = 59,
  UNSPEC_P8V_FMRGOW = 60,
  UNSPEC_P8V_MTVSRWZ = 61,
  UNSPEC_P8V_RELOAD_FROM_GPR = 62,
  UNSPEC_P8V_MTVSRD = 63,
  UNSPEC_P8V_XXPERMDI = 64,
  UNSPEC_P8V_RELOAD_FROM_VSX = 65,
  UNSPEC_ADDG6S = 66,
  UNSPEC_CDTBCD = 67,
  UNSPEC_CBCDTD = 68,
  UNSPEC_DIVE = 69,
  UNSPEC_DIVEU = 70,
  UNSPEC_UNPACK_128BIT = 71,
  UNSPEC_PACK_128BIT = 72,
  UNSPEC_LSQ = 73,
  UNSPEC_FUSION_GPR = 74,
  UNSPEC_STACK_CHECK = 75,
  UNSPEC_CMPRB = 76,
  UNSPEC_CMPRB2 = 77,
  UNSPEC_CMPEQB = 78,
  UNSPEC_ADD_ROUND_TO_ODD = 79,
  UNSPEC_SUB_ROUND_TO_ODD = 80,
  UNSPEC_MUL_ROUND_TO_ODD = 81,
  UNSPEC_DIV_ROUND_TO_ODD = 82,
  UNSPEC_FMA_ROUND_TO_ODD = 83,
  UNSPEC_SQRT_ROUND_TO_ODD = 84,
  UNSPEC_TRUNC_ROUND_TO_ODD = 85,
  UNSPEC_SIGNBIT = 86,
  UNSPEC_SF_FROM_SI = 87,
  UNSPEC_SI_FROM_SF = 88,
  UNSPEC_PLTSEQ = 89,
  UNSPEC_PLT16_HA = 90,
  UNSPEC_CFUGED = 91,
  UNSPEC_CNTLZDM = 92,
  UNSPEC_CNTTZDM = 93,
  UNSPEC_PDEPD = 94,
  UNSPEC_PEXTD = 95,
  UNSPEC_HASHST = 96,
  UNSPEC_HASHCHK = 97,
  UNSPEC_XXSPLTIDP_CONST = 98,
  UNSPEC_XXSPLTIW_CONST = 99,
  UNSPEC_PREDICATE = 100,
  UNSPEC_REDUC = 101,
  UNSPEC_NEZ_P = 102,
  UNSPEC_VSX_CONCAT = 103,
  UNSPEC_VSX_CVDPSXWS = 104,
  UNSPEC_VSX_CVDPUXWS = 105,
  UNSPEC_VSX_CVSPDP = 106,
  UNSPEC_VSX_CVHPSP = 107,
  UNSPEC_VSX_CVSPDPN = 108,
  UNSPEC_VSX_CVDPSPN = 109,
  UNSPEC_VSX_CVSXWDP = 110,
  UNSPEC_VSX_CVUXWDP = 111,
  UNSPEC_VSX_CVSXDSP = 112,
  UNSPEC_VSX_CVUXDSP = 113,
  UNSPEC_VSX_FLOAT2 = 114,
  UNSPEC_VSX_UNS_FLOAT2 = 115,
  UNSPEC_VSX_FLOATE = 116,
  UNSPEC_VSX_UNS_FLOATE = 117,
  UNSPEC_VSX_FLOATO = 118,
  UNSPEC_VSX_UNS_FLOATO = 119,
  UNSPEC_VSX_TDIV = 120,
  UNSPEC_VSX_TSQRT = 121,
  UNSPEC_VSX_SET = 122,
  UNSPEC_VSX_ROUND_I = 123,
  UNSPEC_VSX_ROUND_IC = 124,
  UNSPEC_VSX_SLDWI = 125,
  UNSPEC_VSX_XXPERM = 126,
  UNSPEC_VSX_XXSPLTW = 127,
  UNSPEC_VSX_XXSPLTD = 128,
  UNSPEC_VSX_DIVSD = 129,
  UNSPEC_VSX_DIVUD = 130,
  UNSPEC_VSX_DIVSQ = 131,
  UNSPEC_VSX_DIVUQ = 132,
  UNSPEC_VSX_DIVESQ = 133,
  UNSPEC_VSX_DIVEUQ = 134,
  UNSPEC_VSX_MODSQ = 135,
  UNSPEC_VSX_MODUQ = 136,
  UNSPEC_VSX_MULSD = 137,
  UNSPEC_VSX_SIGN_EXTEND = 138,
  UNSPEC_VSX_XVCVBF16SPN = 139,
  UNSPEC_VSX_XVCVSPBF16 = 140,
  UNSPEC_VSX_XVCVSPSXDS = 141,
  UNSPEC_VSX_XVCVSPHP = 142,
  UNSPEC_VSX_VSLO = 143,
  UNSPEC_VSX_EXTRACT = 144,
  UNSPEC_VSX_SXEXPDP = 145,
  UNSPEC_VSX_SXSIG = 146,
  UNSPEC_VSX_SIEXPDP = 147,
  UNSPEC_VSX_SIEXPQP = 148,
  UNSPEC_VSX_SCMPEXPDP = 149,
  UNSPEC_VSX_SCMPEXPQP = 150,
  UNSPEC_VSX_STSTDC = 151,
  UNSPEC_VSX_VEXTRACT_FP_FROM_SHORTH = 152,
  UNSPEC_VSX_VEXTRACT_FP_FROM_SHORTL = 153,
  UNSPEC_VSX_VXEXP = 154,
  UNSPEC_VSX_VXSIG = 155,
  UNSPEC_VSX_VIEXP = 156,
  UNSPEC_VSX_VTSTDC = 157,
  UNSPEC_VSX_VSIGNED2 = 158,
  UNSPEC_LXVL = 159,
  UNSPEC_LXVLL = 160,
  UNSPEC_LVSL_REG = 161,
  UNSPEC_LVSR_REG = 162,
  UNSPEC_STXVL = 163,
  UNSPEC_STXVLL = 164,
  UNSPEC_XL_LEN_R = 165,
  UNSPEC_XST_LEN_R = 166,
  UNSPEC_VCLZLSBB = 167,
  UNSPEC_VCTZLSBB = 168,
  UNSPEC_VEXTUBLX = 169,
  UNSPEC_VEXTUHLX = 170,
  UNSPEC_VEXTUWLX = 171,
  UNSPEC_VEXTUBRX = 172,
  UNSPEC_VEXTUHRX = 173,
  UNSPEC_VEXTUWRX = 174,
  UNSPEC_VCMPNEB = 175,
  UNSPEC_VCMPNEZB = 176,
  UNSPEC_VCMPNEH = 177,
  UNSPEC_VCMPNEZH = 178,
  UNSPEC_VCMPNEW = 179,
  UNSPEC_VCMPNEZW = 180,
  UNSPEC_XXEXTRACTUW = 181,
  UNSPEC_XXINSERTW = 182,
  UNSPEC_VSX_FIRST_MATCH_INDEX = 183,
  UNSPEC_VSX_FIRST_MATCH_EOS_INDEX = 184,
  UNSPEC_VSX_FIRST_MISMATCH_INDEX = 185,
  UNSPEC_VSX_FIRST_MISMATCH_EOS_INDEX = 186,
  UNSPEC_XXGENPCV = 187,
  UNSPEC_MTVSBM = 188,
  UNSPEC_EXTENDDITI2 = 189,
  UNSPEC_VCNTMB = 190,
  UNSPEC_VEXPAND = 191,
  UNSPEC_VEXTRACT = 192,
  UNSPEC_EXTRACTL = 193,
  UNSPEC_EXTRACTR = 194,
  UNSPEC_INSERTL = 195,
  UNSPEC_INSERTR = 196,
  UNSPEC_REPLACE_ELT = 197,
  UNSPEC_REPLACE_UN = 198,
  UNSPEC_VDIVES = 199,
  UNSPEC_VDIVEU = 200,
  UNSPEC_VMSUMCUD = 201,
  UNSPEC_XXEVAL = 202,
  UNSPEC_XXSPLTIW = 203,
  UNSPEC_XXSPLTIDP = 204,
  UNSPEC_XXSPLTI32DX = 205,
  UNSPEC_XXBLEND = 206,
  UNSPEC_XXPERMX = 207,
  UNSPEC_VCMPBFP = 208,
  UNSPEC_VMSUMU = 209,
  UNSPEC_VMSUMUDM = 210,
  UNSPEC_VMSUMM = 211,
  UNSPEC_VMSUMSHM = 212,
  UNSPEC_VMSUMUHS = 213,
  UNSPEC_VMSUMSHS = 214,
  UNSPEC_VMHADDSHS = 215,
  UNSPEC_VMHRADDSHS = 216,
  UNSPEC_VADDCUW = 217,
  UNSPEC_VAVGU = 218,
  UNSPEC_VAVGS = 219,
  UNSPEC_VMULEUB = 220,
  UNSPEC_VMULESB = 221,
  UNSPEC_VMULEUH = 222,
  UNSPEC_VMULESH = 223,
  UNSPEC_VMULEUW = 224,
  UNSPEC_VMULESW = 225,
  UNSPEC_VMULEUD = 226,
  UNSPEC_VMULESD = 227,
  UNSPEC_VMULOUB = 228,
  UNSPEC_VMULOSB = 229,
  UNSPEC_VMULOUH = 230,
  UNSPEC_VMULOSH = 231,
  UNSPEC_VMULOUW = 232,
  UNSPEC_VMULOSW = 233,
  UNSPEC_VMULOUD = 234,
  UNSPEC_VMULOSD = 235,
  UNSPEC_VPKPX = 236,
  UNSPEC_VPACK_SIGN_SIGN_SAT = 237,
  UNSPEC_VPACK_SIGN_UNS_SAT = 238,
  UNSPEC_VPACK_UNS_UNS_SAT = 239,
  UNSPEC_VPACK_UNS_UNS_MOD = 240,
  UNSPEC_VPACK_UNS_UNS_MOD_DIRECT = 241,
  UNSPEC_VREVEV = 242,
  UNSPEC_VSLV4SI = 243,
  UNSPEC_VSLO = 244,
  UNSPEC_VSR = 245,
  UNSPEC_VSRO = 246,
  UNSPEC_VSUBCUW = 247,
  UNSPEC_VSUM4UBS = 248,
  UNSPEC_VSUM4S = 249,
  UNSPEC_VSUM2SWS = 250,
  UNSPEC_VSUMSWS = 251,
  UNSPEC_VPERM = 252,
  UNSPEC_VPERMR = 253,
  UNSPEC_VPERM_UNS = 254,
  UNSPEC_VRFIN = 255,
  UNSPEC_VCFUX = 256,
  UNSPEC_VCFSX = 257,
  UNSPEC_VCTUXS = 258,
  UNSPEC_VCTSXS = 259,
  UNSPEC_VLOGEFP = 260,
  UNSPEC_VEXPTEFP = 261,
  UNSPEC_VSLDOI = 262,
  UNSPEC_VUNPACK_HI_SIGN = 263,
  UNSPEC_VUNPACK_LO_SIGN = 264,
  UNSPEC_VUNPACK_HI_SIGN_DIRECT = 265,
  UNSPEC_VUNPACK_LO_SIGN_DIRECT = 266,
  UNSPEC_VUPKHPX = 267,
  UNSPEC_VUPKLPX = 268,
  UNSPEC_CONVERT_4F32_8I16 = 269,
  UNSPEC_CONVERT_4F32_8F16 = 270,
  UNSPEC_DST = 271,
  UNSPEC_DSTT = 272,
  UNSPEC_DSTST = 273,
  UNSPEC_DSTSTT = 274,
  UNSPEC_LVSL = 275,
  UNSPEC_LVSR = 276,
  UNSPEC_LVE = 277,
  UNSPEC_STVX = 278,
  UNSPEC_STVXL = 279,
  UNSPEC_STVE = 280,
  UNSPEC_SET_VSCR = 281,
  UNSPEC_GET_VRSAVE = 282,
  UNSPEC_LVX = 283,
  UNSPEC_REDUC_PLUS = 284,
  UNSPEC_VECSH = 285,
  UNSPEC_EXTEVEN_V4SI = 286,
  UNSPEC_EXTEVEN_V8HI = 287,
  UNSPEC_EXTEVEN_V16QI = 288,
  UNSPEC_EXTEVEN_V4SF = 289,
  UNSPEC_EXTODD_V4SI = 290,
  UNSPEC_EXTODD_V8HI = 291,
  UNSPEC_EXTODD_V16QI = 292,
  UNSPEC_EXTODD_V4SF = 293,
  UNSPEC_INTERHI_V4SI = 294,
  UNSPEC_INTERHI_V8HI = 295,
  UNSPEC_INTERHI_V16QI = 296,
  UNSPEC_INTERLO_V4SI = 297,
  UNSPEC_INTERLO_V8HI = 298,
  UNSPEC_INTERLO_V16QI = 299,
  UNSPEC_LVLX = 300,
  UNSPEC_LVLXL = 301,
  UNSPEC_LVRX = 302,
  UNSPEC_LVRXL = 303,
  UNSPEC_STVLX = 304,
  UNSPEC_STVLXL = 305,
  UNSPEC_STVRX = 306,
  UNSPEC_STVRXL = 307,
  UNSPEC_VADU = 308,
  UNSPEC_VSLV = 309,
  UNSPEC_VSRV = 310,
  UNSPEC_VMULWHUB = 311,
  UNSPEC_VMULWLUB = 312,
  UNSPEC_VMULWHSB = 313,
  UNSPEC_VMULWLSB = 314,
  UNSPEC_VMULWHUH = 315,
  UNSPEC_VMULWLUH = 316,
  UNSPEC_VMULWHSH = 317,
  UNSPEC_VMULWLSH = 318,
  UNSPEC_VUPKHU = 319,
  UNSPEC_VUPKLU = 320,
  UNSPEC_VPERMSI = 321,
  UNSPEC_VPERMHI = 322,
  UNSPEC_INTERHI = 323,
  UNSPEC_INTERLO = 324,
  UNSPEC_VUPKHS_V4SF = 325,
  UNSPEC_VUPKLS_V4SF = 326,
  UNSPEC_VUPKHU_V4SF = 327,
  UNSPEC_VUPKLU_V4SF = 328,
  UNSPEC_VGBBD = 329,
  UNSPEC_VSPLT_DIRECT = 330,
  UNSPEC_VMRGEW_DIRECT = 331,
  UNSPEC_VMRGOW_DIRECT = 332,
  UNSPEC_VSUMSWS_DIRECT = 333,
  UNSPEC_VADDCUQ = 334,
  UNSPEC_VADDEUQM = 335,
  UNSPEC_VADDECUQ = 336,
  UNSPEC_VSUBCUQ = 337,
  UNSPEC_VSUBEUQM = 338,
  UNSPEC_VSUBECUQ = 339,
  UNSPEC_VBPERMQ = 340,
  UNSPEC_VBPERMD = 341,
  UNSPEC_BCDADD = 342,
  UNSPEC_BCDSUB = 343,
  UNSPEC_BCD_OVERFLOW = 344,
  UNSPEC_BCDSHIFT = 345,
  UNSPEC_VRLMI = 346,
  UNSPEC_VRLNM = 347,
  UNSPEC_VCFUGED = 348,
  UNSPEC_VCLZDM = 349,
  UNSPEC_VCTZDM = 350,
  UNSPEC_VGNB = 351,
  UNSPEC_VPDEPD = 352,
  UNSPEC_VPEXTD = 353,
  UNSPEC_VCLRLB = 354,
  UNSPEC_VCLRRB = 355,
  UNSPEC_VSTRIR = 356,
  UNSPEC_VSTRIL = 357,
  UNSPEC_SLDB = 358,
  UNSPEC_SRDB = 359,
  UNSPEC_VSX_ASSEMBLE = 360,
  UNSPEC_MMA_EXTRACT = 361,
  UNSPEC_MMA_PMXVBF16GER2 = 362,
  UNSPEC_MMA_PMXVBF16GER2NN = 363,
  UNSPEC_MMA_PMXVBF16GER2NP = 364,
  UNSPEC_MMA_PMXVBF16GER2PN = 365,
  UNSPEC_MMA_PMXVBF16GER2PP = 366,
  UNSPEC_MMA_PMXVF16GER2 = 367,
  UNSPEC_MMA_PMXVF16GER2NN = 368,
  UNSPEC_MMA_PMXVF16GER2NP = 369,
  UNSPEC_MMA_PMXVF16GER2PN = 370,
  UNSPEC_MMA_PMXVF16GER2PP = 371,
  UNSPEC_MMA_PMXVF32GER = 372,
  UNSPEC_MMA_PMXVF32GERNN = 373,
  UNSPEC_MMA_PMXVF32GERNP = 374,
  UNSPEC_MMA_PMXVF32GERPN = 375,
  UNSPEC_MMA_PMXVF32GERPP = 376,
  UNSPEC_MMA_PMXVF64GER = 377,
  UNSPEC_MMA_PMXVF64GERNN = 378,
  UNSPEC_MMA_PMXVF64GERNP = 379,
  UNSPEC_MMA_PMXVF64GERPN = 380,
  UNSPEC_MMA_PMXVF64GERPP = 381,
  UNSPEC_MMA_PMXVI16GER2 = 382,
  UNSPEC_MMA_PMXVI16GER2PP = 383,
  UNSPEC_MMA_PMXVI16GER2S = 384,
  UNSPEC_MMA_PMXVI16GER2SPP = 385,
  UNSPEC_MMA_PMXVI4GER8 = 386,
  UNSPEC_MMA_PMXVI4GER8PP = 387,
  UNSPEC_MMA_PMXVI8GER4 = 388,
  UNSPEC_MMA_PMXVI8GER4PP = 389,
  UNSPEC_MMA_PMXVI8GER4SPP = 390,
  UNSPEC_MMA_XVBF16GER2 = 391,
  UNSPEC_MMA_XVBF16GER2NN = 392,
  UNSPEC_MMA_XVBF16GER2NP = 393,
  UNSPEC_MMA_XVBF16GER2PN = 394,
  UNSPEC_MMA_XVBF16GER2PP = 395,
  UNSPEC_MMA_XVF16GER2 = 396,
  UNSPEC_MMA_XVF16GER2NN = 397,
  UNSPEC_MMA_XVF16GER2NP = 398,
  UNSPEC_MMA_XVF16GER2PN = 399,
  UNSPEC_MMA_XVF16GER2PP = 400,
  UNSPEC_MMA_XVF32GER = 401,
  UNSPEC_MMA_XVF32GERNN = 402,
  UNSPEC_MMA_XVF32GERNP = 403,
  UNSPEC_MMA_XVF32GERPN = 404,
  UNSPEC_MMA_XVF32GERPP = 405,
  UNSPEC_MMA_XVF64GER = 406,
  UNSPEC_MMA_XVF64GERNN = 407,
  UNSPEC_MMA_XVF64GERNP = 408,
  UNSPEC_MMA_XVF64GERPN = 409,
  UNSPEC_MMA_XVF64GERPP = 410,
  UNSPEC_MMA_XVI16GER2 = 411,
  UNSPEC_MMA_XVI16GER2PP = 412,
  UNSPEC_MMA_XVI16GER2S = 413,
  UNSPEC_MMA_XVI16GER2SPP = 414,
  UNSPEC_MMA_XVI4GER8 = 415,
  UNSPEC_MMA_XVI4GER8PP = 416,
  UNSPEC_MMA_XVI8GER4 = 417,
  UNSPEC_MMA_XVI8GER4PP = 418,
  UNSPEC_MMA_XVI8GER4SPP = 419,
  UNSPEC_MMA_XXMFACC = 420,
  UNSPEC_MMA_XXMTACC = 421,
  UNSPEC_MOVSD_LOAD = 422,
  UNSPEC_MOVSD_STORE = 423,
  UNSPEC_DDEDPD = 424,
  UNSPEC_DENBCD = 425,
  UNSPEC_DXEX = 426,
  UNSPEC_DIEX = 427,
  UNSPEC_DSCLI = 428,
  UNSPEC_DTSTSFI = 429,
  UNSPEC_DSCRI = 430,
  UNSPEC_VCIPHER = 431,
  UNSPEC_VNCIPHER = 432,
  UNSPEC_VCIPHERLAST = 433,
  UNSPEC_VNCIPHERLAST = 434,
  UNSPEC_VSBOX = 435,
  UNSPEC_VSHASIGMA = 436,
  UNSPEC_VPERMXOR = 437,
  UNSPEC_VPMSUM = 438,
  UNSPEC_HTM_FENCE = 439,
  UNSPEC_PCREL_OPT_LD_ADDR = 440,
  UNSPEC_PCREL_OPT_LD_DATA = 441,
  UNSPEC_PCREL_OPT_LD_SAME_REG = 442,
  UNSPEC_PCREL_OPT_LD_RELOC = 443,
  UNSPEC_PCREL_OPT_ST_ADDR = 444,
  UNSPEC_PCREL_OPT_ST_RELOC = 445
};
#define NUM_UNSPEC_VALUES 446
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_BLOCK = 0,
  UNSPECV_LL = 1,
  UNSPECV_SC = 2,
  UNSPECV_PROBE_STACK_RANGE = 3,
  UNSPECV_EH_RR = 4,
  UNSPECV_ISYNC = 5,
  UNSPECV_MFTB = 6,
  UNSPECV_DARN = 7,
  UNSPECV_NLGR = 8,
  UNSPECV_MFFS = 9,
  UNSPECV_MFFSL = 10,
  UNSPECV_MFFSCRN = 11,
  UNSPECV_MFFSCDRN = 12,
  UNSPECV_MTFSF = 13,
  UNSPECV_MTFSF_HI = 14,
  UNSPECV_MTFSB0 = 15,
  UNSPECV_MTFSB1 = 16,
  UNSPECV_SPLIT_STACK_RETURN = 17,
  UNSPECV_SPEC_BARRIER = 18,
  UNSPECV_PLT16_LO = 19,
  UNSPECV_PLT_PCREL = 20,
  UNSPECV_SET_VRSAVE = 21,
  UNSPECV_MTVSCR = 22,
  UNSPECV_MFVSCR = 23,
  UNSPECV_DSSALL = 24,
  UNSPECV_DSS = 25,
  UNSPECV_MMA_ASSEMBLE = 26,
  UNSPECV_MMA_XXSETACCZ = 27,
  UNSPECV_HTM_TABORT = 28,
  UNSPECV_HTM_TABORTXC = 29,
  UNSPECV_HTM_TABORTXCI = 30,
  UNSPECV_HTM_TBEGIN = 31,
  UNSPECV_HTM_TCHECK = 32,
  UNSPECV_HTM_TEND = 33,
  UNSPECV_HTM_TRECHKPT = 34,
  UNSPECV_HTM_TRECLAIM = 35,
  UNSPECV_HTM_TSR = 36,
  UNSPECV_HTM_TTEST = 37,
  UNSPECV_HTM_MFSPR = 38,
  UNSPECV_HTM_MTSPR = 39
};
#define NUM_UNSPECV_VALUES 40
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
