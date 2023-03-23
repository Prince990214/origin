#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsAcChrgSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsAcChrgSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsAcChrgSts();

            if(WRITE_SIGNAL_DATA_API(BmsAcChrgSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcChrgSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcChrgSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcChrgSts();

            if(WRITE_SIGNAL_DATA_API(BmsDcChrgSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsAcChrgOperMod
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsAcChrgOperMod(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsAcChrgOperMod();

            if(WRITE_SIGNAL_DATA_API(BmsAcChrgOperMod, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgLeTi
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgLeTi(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgLeTi();

            if(WRITE_SIGNAL_DATA_API(BmsChrgLeTi, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcChrgOperMod
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcChrgOperMod(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcChrgOperMod();

            if(WRITE_SIGNAL_DATA_API(BmsDcChrgOperMod, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsFastChrgCc2U
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsFastChrgCc2U(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsFastChrgCc2U();

            if(WRITE_SIGNAL_DATA_API(BmsFastChrgCc2U, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgStsgb
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgStsgb(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgStsgb();

            if(WRITE_SIGNAL_DATA_API(BmsChrgStsgb, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcWakeupSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcWakeupSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcWakeupSts();

            if(WRITE_SIGNAL_DATA_API(BmsDcWakeupSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsFastChrgGunCnctSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsFastChrgGunCnctSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsFastChrgGunCnctSts();

            if(WRITE_SIGNAL_DATA_API(BmsFastChrgGunCnctSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgFailRsn
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgFailRsn(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgFailRsn();

            if(WRITE_SIGNAL_DATA_API(BmsChrgFailRsn, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcChrgSocketNegT
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcChrgSocketNegT(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcChrgSocketNegT();

            if(WRITE_SIGNAL_DATA_API(BmsDcChrgSocketNegT, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcChrgSocketPosT
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcChrgSocketPosT(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcChrgSocketPosT();

            if(WRITE_SIGNAL_DATA_API(BmsDcChrgSocketPosT, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsPwrBattMaxChrgCurLim
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsPwrBattMaxChrgCurLim(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsPwrBattMaxChrgCurLim();

            if(WRITE_SIGNAL_DATA_API(BmsPwrBattMaxChrgCurLim, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgCurReqVld
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgCurReqVld(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgCurReqVld();

            if(WRITE_SIGNAL_DATA_API(BmsChrgCurReqVld, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgCurReq
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgCurReq(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgCurReq();

            if(WRITE_SIGNAL_DATA_API(BmsChrgCurReq, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgUReq
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgUReq(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U24 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgUReq();

            if(WRITE_SIGNAL_DATA_API(BmsChrgUReq, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsRealAllwChrgSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsRealAllwChrgSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsRealAllwChrgSts();

            if(WRITE_SIGNAL_DATA_API(BmsRealAllwChrgSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsReqObcOperMod
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsReqObcOperMod(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsReqObcOperMod();

            if(WRITE_SIGNAL_DATA_API(BmsReqObcOperMod, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgUReqVld
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgUReqVld(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgUReqVld();

            if(WRITE_SIGNAL_DATA_API(BmsChrgUReqVld, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcPileMaxChrgCurLim
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcPileMaxChrgCurLim(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U24 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcPileMaxChrgCurLim();

            if(WRITE_SIGNAL_DATA_API(BmsDcPileMaxChrgCurLim, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsFastChrgEquipOutpCur
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsFastChrgEquipOutpCur(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U24 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsFastChrgEquipOutpCur();

            if(WRITE_SIGNAL_DATA_API(BmsFastChrgEquipOutpCur, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsFastChrgEquipOutpU
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsFastChrgEquipOutpU(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsFastChrgEquipOutpU();

            if(WRITE_SIGNAL_DATA_API(BmsFastChrgEquipOutpU, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsHeatModHvLoadInhbReq
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsHeatModHvLoadInhbReq(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsHeatModHvLoadInhbReq();

            if(WRITE_SIGNAL_DATA_API(BmsHeatModHvLoadInhbReq, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDispSocLimSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDispSocLimSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDispSocLimSts();

            if(WRITE_SIGNAL_DATA_API(BmsDispSocLimSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsAllwPreHeatMod
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsAllwPreHeatMod(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsAllwPreHeatMod();

            if(WRITE_SIGNAL_DATA_API(BmsAllwPreHeatMod, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcPileFailRsn
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcPileFailRsn(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcPileFailRsn();

            if(WRITE_SIGNAL_DATA_API(BmsDcPileFailRsn, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsRedPwrAllw
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsRedPwrAllw(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsRedPwrAllw();

            if(WRITE_SIGNAL_DATA_API(BmsRedPwrAllw, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsChrgHeatCtrlSts
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsChrgHeatCtrlSts(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U8 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsChrgHeatCtrlSts();

            if(WRITE_SIGNAL_DATA_API(BmsChrgHeatCtrlSts, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_BmsDcPileMaxChrgULim
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_BmsDcPileMaxChrgULim(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_U16 bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_BmsDcPileMaxChrgULim();

            if(WRITE_SIGNAL_DATA_API(BmsDcPileMaxChrgULim, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
#undef ACTION_ID
#define ACTION_ID ACTION_ID_PL_Cvt_XXXXXX
/*lint  -efile(451,ipl_hook_mcr.h) */
#include <ipl_hook_mcr.h>
#define  MEM_CODE            ICS_PL_MEM_CODE_SERVICE
#include <gmem.h>
/*lint  -efunc(774,PL_Cvt_BMSCalMsg) */
ICS_PL_RETURN_TYPE PL_Cvt_XXXXXX(void)
{

    ICS_PL_RETURN_TYPE tmp_return_value = ICS_PL_TRUE;
    ICS_PL_UX bus_cpy;


    switch(GET_ipl_variant())
    {
        case DIDI_B1:
        {

            bus_cpy = GET_BSWR_CAN_XXXXXX();

            if(WRITE_SIGNAL_DATA_API(XXXXXX, &bus_cpy) != WRITE_SIGNAL_DATA_API_SUCCESS)
            {
                tmp_return_value = ICS_PL_FALSE;
            }
            else
            {
                /* Nothing to do here */
            }
            break;
        }
        default:
        {
            tmp_return_value = ICS_PL_FALSE;
            break;
        }
    }

    return tmp_return_value;
}
