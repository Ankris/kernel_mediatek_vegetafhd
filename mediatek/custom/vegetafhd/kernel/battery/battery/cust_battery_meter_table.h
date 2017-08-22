#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,67790},
        {-15,53460},
        {-10,42450},
        { -5,33930},
        {  0,27280},
        {  5,22070},
        { 10,17960},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8312},
        { 35,6942},
        { 40,5826},
        { 45,4911},
        { 50,4158},
        { 55,3536},
        { 60,3019}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif
#if 0
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0  , 4355},
	{2  , 4328},
	{3  , 4303},
	{5  , 4282},
	{7  , 4263},
	{8  , 4244},
	{10  , 4226},
	{11  , 4208},
	{13  , 4190},
	{15  , 4173},
	{16  , 4156},
	{18  , 4139},
	{20  , 4121},
	{21  , 4106},
	{23  , 4093},
	{25  , 4080},
	{26  , 4060},
	{28  , 4030},
	{29  , 3998},
	{31  , 3975},
	{33  , 3957},
	{34  , 3943},
	{36  , 3932},
	{38  , 3922},
	{39  , 3912},
	{41  , 3901},
	{43  , 3890},
	{44  , 3879},
	{46  , 3869},
	{47  , 3860},
	{49  , 3851},
	{51  , 3843},
	{52  , 3835},
	{54  , 3828},
	{56  , 3820},
	{57  , 3814},
	{59  , 3808},
	{60  , 3802},
	{62  , 3798},
	{64  , 3794},
	{65  , 3790},
	{67  , 3787},
	{69  , 3784},
	{70  , 3780},
	{72  , 3777},
	{74  , 3773},
	{75  , 3769},
	{77  , 3764},
	{78  , 3759},
	{80  , 3753},
	{82  , 3746},
	{83  , 3739},
	{85  , 3732},
	{87  , 3723},
	{88  , 3714},
	{90  , 3706},
	{91  , 3702},
	{92  , 3699},
	{93  , 3697},
	{94  , 3694},
	{95  , 3690},
	{95  , 3686},
	{96  , 3679},
	{96  , 3671},
	{97  , 3661},
	{97  , 3648},
	{97  , 3636},
	{98  , 3624},
	{98  , 3612},
	{98  , 3601},
	{99  , 3591},
	{99  , 3581},
	{99  , 3572},
	{99  , 3562},
	{99  , 3554},
	{99  , 3548},
	{99  , 3540},
	{100  , 3533},
	{100  , 3527},
	{100  , 3522},
	{100  , 3517},
	{100  , 3512},
	{100  , 3508},
	{100  , 3504},
	{100  , 3504}
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0  , 4336},
	{2  , 4313},
	{4  , 4283},
	{5  , 4258},
	{7  , 4236},
	{9  , 4216},
	{11  , 4196},
	{13  , 4178},
	{14  , 4158},
	{16  , 4139},
	{18  , 4121},
	{20  , 4107},
	{21  , 4091},
	{23  , 4073},
	{25  , 4049},
	{27  , 4020},
	{29  , 3994},
	{30  , 3972},
	{32  , 3955},
	{34  , 3941},
	{36  , 3929},
	{38  , 3919},
	{39  , 3909},
	{41  , 3898},
	{43  , 3888},
	{45  , 3878},
	{46  , 3868},
	{48  , 3859},
	{50  , 3850},
	{52  , 3842},
	{54  , 3834},
	{55  , 3826},
	{57  , 3819},
	{59  , 3813},
	{61  , 3807},
	{63  , 3803},
	{64  , 3799},
	{66  , 3794},
	{68  , 3790},
	{70  , 3787},
	{72  , 3783},
	{73  , 3779},
	{75  , 3774},
	{77  , 3770},
	{79  , 3766},
	{80  , 3763},
	{81  , 3760},
	{82  , 3757},
	{83  , 3755},
	{84  , 3753},
	{85  , 3751},
	{86  , 3749},
	{87  , 3746},
	{87  , 3745},
	{88  , 3743},
	{89  , 3740},
	{89  , 3738},
	{90  , 3737},
	{91  , 3735},
	{91  , 3733},
	{92  , 3731},
	{92  , 3728},
	{93  , 3727},
	{93  , 3724},
	{93  , 3723},
	{94  , 3721},
	{94  , 3719},
	{95  , 3717},
	{95  , 3716},
	{95  , 3714},
	{96  , 3713},
	{96  , 3712},
	{96  , 3711},
	{97  , 3709},
	{97  , 3708},
	{97  , 3708},
	{98  , 3707},
	{98  , 3706},
	{98  , 3706},
	{99  , 3705},
	{99  , 3704},
	{99  , 3703},
	{99  , 3703},
	{100  , 3702},
	{100  , 3702}
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0  , 4339},
	{2  , 4318},
	{3  , 4298},
	{5  , 4280},
	{7  , 4261},
	{8  , 4242},
	{10  , 4225},
	{11  , 4207},
	{13  , 4189},
	{15  , 4171},
	{16  , 4154},
	{18  , 4136},
	{20  , 4119},
	{21  , 4101},
	{23  , 4087},
	{25  , 4078},
	{26  , 4064},
	{28  , 4034},
	{29  , 4006},
	{31  , 3988},
	{33  , 3975},
	{34  , 3967},
	{36  , 3955},
	{38  , 3940},
	{39  , 3924},
	{41  , 3909},
	{43  , 3895},
	{44  , 3884},
	{46  , 3873},
	{47  , 3863},
	{49  , 3855},
	{51  , 3846},
	{52  , 3839},
	{54  , 3832},
	{56  , 3825},
	{57  , 3819},
	{59  , 3813},
	{61  , 3807},
	{62  , 3802},
	{64  , 3798},
	{65  , 3793},
	{67  , 3788},
	{69  , 3782},
	{70  , 3777},
	{72  , 3772},
	{74  , 3765},
	{75  , 3759},
	{77  , 3753},
	{79  , 3749},
	{80  , 3744},
	{82  , 3737},
	{84  , 3729},
	{85  , 3722},
	{87  , 3713},
	{88  , 3701},
	{90  , 3697},
	{92  , 3695},
	{93  , 3692},
	{95  , 3679},
	{97  , 3625},
	{98  , 3542},
	{100  , 3410},
	{100  , 3328},
	{100  , 3311},
	{100  , 3305},
	{100  , 3300},
	{100  , 3297},
	{100  , 3295},
	{100  , 3293},
	{100  , 3292},
	{100  , 3290},
	{100  , 3289},
	{100  , 3288},
	{100  , 3288},
	{100  , 3287},
	{100  , 3286},
	{100  , 3285},
	{100  , 3284},
	{100  , 3285},
	{100  , 3284},
	{100  , 3283},
	{100  , 3283},
	{100  , 3282},
	{100  , 3282},
	{100  , 3282}
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0  , 4347},
	{2  , 4328},
	{3  , 4309},
	{5  , 4291},
	{7  , 4272},
	{8  , 4253},
	{10  , 4235},
	{11  , 4216},
	{13  , 4198},
	{15  , 4180},
	{16  , 4162},
	{18  , 4145},
	{20  , 4127},
	{21  , 4110},
	{23  , 4093},
	{24  , 4077},
	{26  , 4061},
	{28  , 4049},
	{29  , 4027},
	{31  , 4010},
	{33  , 3999},
	{34  , 3986},
	{36  , 3972},
	{37  , 3957},
	{39  , 3939},
	{41  , 3919},
	{42  , 3904},
	{44  , 3891},
	{46  , 3880},
	{47  , 3869},
	{49  , 3860},
	{50  , 3851},
	{52  , 3843},
	{54  , 3835},
	{55  , 3828},
	{57  , 3821},
	{59  , 3815},
	{60  , 3809},
	{62  , 3803},
	{63  , 3798},
	{65  , 3794},
	{67  , 3789},
	{68  , 3784},
	{70  , 3775},
	{72  , 3764},
	{73  , 3755},
	{75  , 3748},
	{76  , 3741},
	{78  , 3736},
	{80  , 3730},
	{81  , 3726},
	{83  , 3718},
	{85  , 3710},
	{86  , 3703},
	{88  , 3694},
	{89  , 3685},
	{91  , 3683},
	{93  , 3681},
	{94  , 3675},
	{96  , 3646},
	{97  , 3582},
	{99  , 3488},
	{100  , 3323},
	{100  , 3273},
	{100  , 3263},
	{100  , 3259},
	{100  , 3258},
	{100  , 3256},
	{100  , 3256},
	{100  , 3256},
	{100  , 3256},
	{100  , 3255},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3255},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254},
	{100  , 3254}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{838  , 4355},
	{838  , 4328},
	{840  , 4303},
	{845  , 4282},
	{850  , 4263},
	{825  , 4244},
	{823  , 4226},
	{818  , 4208},
	{810  , 4190},
	{808  , 4173},
	{805  , 4156},
	{798  , 4139},
	{790  , 4121},
	{793  , 4106},
	{795  , 4093},
	{793  , 4080},
	{783  , 4060},
	{750  , 4030},
	{720  , 3998},
	{710  , 3975},
	{705  , 3957},
	{700  , 3943},
	{700  , 3932},
	{703  , 3922},
	{703  , 3912},
	{700  , 3901},
	{700  , 3890},
	{693  , 3879},
	{693  , 3869},
	{695  , 3860},
	{698  , 3851},
	{700  , 3843},
	{705  , 3835},
	{708  , 3828},
	{710  , 3820},
	{718  , 3814},
	{720  , 3808},
	{728  , 3802},
	{735  , 3798},
	{743  , 3794},
	{755  , 3790},
	{770  , 3787},
	{788  , 3784},
	{800  , 3780},
	{818  , 3777},
	{843  , 3773},
	{863  , 3769},
	{890  , 3764},
	{915  , 3759},
	{943  , 3753},
	{973  , 3746},
	{1008  , 3739},
	{1050  , 3732},
	{1103  , 3723},
	{1160  , 3714},
	{1235  , 3706},
	{1258  , 3702},
	{1248  , 3699},
	{1245  , 3697},
	{1238  , 3694},
	{1228  , 3690},
	{1218  , 3686},
	{1200  , 3679},
	{1178  , 3671},
	{1158  , 3661},
	{1123  , 3648},
	{1090  , 3636},
	{1063  , 3624},
	{1035  , 3612},
	{1005  , 3601},
	{980  , 3591},
	{955  , 3581},
	{933  , 3572},
	{908  , 3562},
	{885  , 3554},
	{873  , 3548},
	{855  , 3540},
	{835  , 3533},
	{823  , 3527},
	{810  , 3522},
	{795  , 3517},
	{783  , 3512},
	{773  , 3508},
	{763  , 3504},
	{765  , 3504}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{550  , 4336},
	{550  , 4313},
	{1408  , 4283},
	{1475  , 4258},
	{1455  , 4236},
	{1435  , 4216},
	{1410  , 4196},
	{1393  , 4178},
	{1365  , 4158},
	{1345  , 4139},
	{1325  , 4121},
	{1318  , 4107},
	{1308  , 4091},
	{1293  , 4073},
	{1265  , 4049},
	{1233  , 4020},
	{1203  , 3994},
	{1180  , 3972},
	{1170  , 3955},
	{1168  , 3941},
	{1168  , 3929},
	{1168  , 3919},
	{1168  , 3909},
	{1165  , 3898},
	{1163  , 3888},
	{1163  , 3878},
	{1160  , 3868},
	{1160  , 3859},
	{1163  , 3850},
	{1168  , 3842},
	{1175  , 3834},
	{1180  , 3826},
	{1180  , 3819},
	{1188  , 3813},
	{1193  , 3807},
	{1205  , 3803},
	{1218  , 3799},
	{1230  , 3794},
	{1250  , 3790},
	{1278  , 3787},
	{1300  , 3783},
	{1328  , 3779},
	{1350  , 3774},
	{1378  , 3770},
	{1408  , 3766},
	{1408  , 3763},
	{1403  , 3760},
	{1393  , 3757},
	{1390  , 3755},
	{1385  , 3753},
	{1378  , 3751},
	{1373  , 3749},
	{1365  , 3746},
	{1365  , 3745},
	{1358  , 3743},
	{1355  , 3740},
	{1345  , 3738},
	{1343  , 3737},
	{1338  , 3735},
	{1333  , 3733},
	{1328  , 3731},
	{1323  , 3728},
	{1320  , 3727},
	{1313  , 3724},
	{1308  , 3723},
	{1305  , 3721},
	{1300  , 3719},
	{1298  , 3717},
	{1293  , 3716},
	{1288  , 3714},
	{1283  , 3713},
	{1285  , 3712},
	{1278  , 3711},
	{1275  , 3709},
	{1270  , 3708},
	{1270  , 3708},
	{1270  , 3707},
	{1268  , 3706},
	{1265  , 3706},
	{1263  , 3705},
	{1263  , 3704},
	{1260  , 3703},
	{1263  , 3703},
	{1258  , 3702},
	{1260  , 3702}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{218  , 4339},
	{218  , 4318},
	{220  , 4298},
	{225  , 4280},
	{223  , 4261},
	{218  , 4242},
	{223  , 4225},
	{223  , 4207},
	{225  , 4189},
	{223  , 4171},
	{228  , 4154},
	{233  , 4136},
	{240  , 4119},
	{238  , 4101},
	{245  , 4087},
	{253  , 4078},
	{258  , 4064},
	{248  , 4034},
	{243  , 4006},
	{250  , 3988},
	{250  , 3975},
	{258  , 3967},
	{250  , 3955},
	{243  , 3940},
	{233  , 3924},
	{228  , 3909},
	{225  , 3895},
	{223  , 3884},
	{223  , 3873},
	{218  , 3863},
	{220  , 3855},
	{220  , 3846},
	{220  , 3839},
	{220  , 3832},
	{223  , 3825},
	{225  , 3819},
	{225  , 3813},
	{228  , 3807},
	{230  , 3802},
	{233  , 3798},
	{230  , 3793},
	{233  , 3788},
	{233  , 3782},
	{228  , 3777},
	{228  , 3772},
	{223  , 3765},
	{225  , 3759},
	{225  , 3753},
	{228  , 3749},
	{230  , 3744},
	{230  , 3737},
	{233  , 3729},
	{233  , 3722},
	{235  , 3713},
	{233  , 3701},
	{238  , 3697},
	{245  , 3695},
	{258  , 3692},
	{268  , 3679},
	{268  , 3625},
	{288  , 3542},
	{333  , 3410},
	{323  , 3328},
	{280  , 3311},
	{263  , 3305},
	{250  , 3300},
	{248  , 3297},
	{240  , 3295},
	{238  , 3293},
	{233  , 3292},
	{228  , 3290},
	{225  , 3289},
	{223  , 3288},
	{220  , 3288},
	{220  , 3287},
	{218  , 3286},
	{218  , 3285},
	{213  , 3284},
	{215  , 3285},
	{215  , 3284},
	{213  , 3283},
	{215  , 3283},
	{213  , 3282},
	{208  , 3282},
	{210  , 3282}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{145  , 4347},
	{145  , 4328},
	{145  , 4309},
	{148  , 4291},
	{148  , 4272},
	{148  , 4253},
	{148  , 4235},
	{145  , 4216},
	{148  , 4198},
	{148  , 4180},
	{148  , 4162},
	{150  , 4145},
	{150  , 4127},
	{150  , 4110},
	{150  , 4093},
	{153  , 4077},
	{153  , 4061},
	{163  , 4049},
	{155  , 4027},
	{160  , 4010},
	{163  , 3999},
	{163  , 3986},
	{165  , 3972},
	{168  , 3957},
	{163  , 3939},
	{153  , 3919},
	{150  , 3904},
	{148  , 3891},
	{150  , 3880},
	{148  , 3869},
	{145  , 3860},
	{145  , 3851},
	{148  , 3843},
	{148  , 3835},
	{148  , 3828},
	{148  , 3821},
	{150  , 3815},
	{150  , 3809},
	{150  , 3803},
	{153  , 3798},
	{155  , 3794},
	{158  , 3789},
	{158  , 3784},
	{153  , 3775},
	{150  , 3764},
	{148  , 3755},
	{148  , 3748},
	{148  , 3741},
	{148  , 3736},
	{145  , 3730},
	{150  , 3726},
	{148  , 3718},
	{148  , 3710},
	{148  , 3703},
	{150  , 3694},
	{148  , 3685},
	{150  , 3683},
	{155  , 3681},
	{155  , 3675},
	{153  , 3646},
	{160  , 3582},
	{173  , 3488},
	{203  , 3323},
	{185  , 3273},
	{160  , 3263},
	{150  , 3259},
	{148  , 3258},
	{143  , 3256},
	{145  , 3256},
	{143  , 3256},
	{143  , 3256},
	{140  , 3255},
	{140  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3255},
	{135  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3254},
	{138  , 3254}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
}; 
#else
#include "cust_battery_meter_table_vegeta.h"
#endif  

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

