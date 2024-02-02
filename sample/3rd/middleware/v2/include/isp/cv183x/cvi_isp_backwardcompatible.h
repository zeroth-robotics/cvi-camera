/*
 * Copyright (C) Cvitek Co., Ltd. 2019-2021. All rights reserved.
 *
 * File Name: include/cvi_isp_backwardcompatible.h
 * Description: This header define the old-style structure names map to new ones.
 * Recommend to use new structures for developing.
 * The old-style structure will be no longer support in 2021.
 */

#ifndef __CVI_ISP_BACKWARDCOMPATIBLE_H__
#define __CVI_ISP_BACKWARDCOMPATIBLE_H__

// Backward Compatible

// Structure Rename
// Crosstalk
typedef ISP_CROSSTALK_ATTR_S ISP_Crosstalk_ATTR_S;
typedef ISP_CROSSTALK_AUTO_ATTR_S ISP_Crosstalk_AUTO_ATTR_S;
typedef ISP_CROSSTALK_MANUAL_ATTR_S ISP_Crosstalk_MANUAL_ATTR_S;

// DP
typedef ISP_DP_STATIC_ATTR_S ISP_DPStatic_ATTR_S;
typedef ISP_DP_CALIB_ATTR_S ISP_DPCalib_ATTR_S;
typedef ISP_DP_DYNAMIC_ATTR_S ISP_DPDynamic_ATTR_S;
typedef ISP_DP_DYNAMIC_AUTO_ATTR_S ISP_DPDynamic_AUTO_ATTR_S;
typedef ISP_DP_DYNAMIC_MANUAL_ATTR_S ISP_DPDynamic_MANUAL_ATTR_S;

// Saturation
typedef ISP_SATURATION_ATTR_S ISP_Saturation_ATTR_S;
typedef ISP_SATURATION_AUTO_ATTR_S ISP_Saturation_AUTO_ATTR_S;
typedef ISP_SATURATION_MANUAL_ATTR_S ISP_Saturation_MANUAL_ATTR_S;

// Demosaic
typedef ISP_DEMOSAIC_ATTR_S ISP_Demosaic_ATTR_S;
typedef ISP_DEMOSAIC_AUTO_ATTR_S ISP_Demosaic_AUTO_ATTR_S;
typedef ISP_DEMOSAIC_MANUAL_ATTR_S ISP_Demosaic_MANUAL_ATTR_S;
typedef ISP_DEMOSAIC_EE_ATTR_S ISP_DemosaicEE_ATTR_S;
typedef ISP_DEMOSAIC_EE_AUTO_ATTR_S ISP_DemosaicEE_AUTO_ATTR_S;
typedef ISP_DEMOSAIC_EE_MANUAL_ATTR_S ISP_DemosaicEE_MANUAL_ATTR_S;
typedef ISP_DEMOSAIC_FILTER_ATTR_S ISP_DemosaicFilter_ATTR_S;
typedef ISP_DEMOSAIC_FILTER_AUTO_ATTR_S ISP_DemosaicFilter_AUTO_ATTR_S;
typedef ISP_DEMOSAIC_FILTER_MANUAL_ATTR_S ISP_DemosaicFilter_MANUAL_ATTR_S;
typedef ISP_DEMOSAIC_DEMOIRE_ATTR_S ISP_DemosaicDemoire_ATTR_S;
typedef ISP_DEMOSAIC_DEMOIRE_AUTO_ATTR_S ISP_DemosaicDemoire_AUTO_ATTR_S;
typedef ISP_DEMOSAIC_DEMOIRE_MANUAL_ATTR_S ISP_DemosaicDemoire_MANUAL_ATTR_S;

// Mesh Shading
typedef ISP_MESH_SHADING_GAIN_LUT_S ISP_MeshShadingGainLut_S;
typedef ISP_MESH_SHADING_GAIN_LUT_ATTR_S ISP_MeshShadingGainLut_ATTR_S;
typedef ISP_MESH_SHADING_ATTR_S ISP_MeshShading_ATTR_S;
typedef ISP_MESH_SHADING_AUTO_ATTR_S ISP_MeshShading_AUTO_ATTR_S;
typedef ISP_MESH_SHADING_MANUAL_ATTR_S ISP_MeshShading_MANUAL_ATTR_S;

// Radial Shading
typedef ISP_RADIAL_SHADING_ATTR_S ISP_RadialShading_ATTR_S;
typedef ISP_RADIAL_SHADING_GAIN_LUT_ATTR_S ISP_RadialShadingGainLut_ATTR_S;

// TNR
typedef ISP_TNR_NOISE_MODEL_ATTR_S ISP_TNRNoiseModel_ATTR_S;
typedef ISP_TNR_MT_PRT_ATTR_S ISP_TNRMtPrt_ATTR_S;
typedef ISP_TNR_MT_PRT_AUTO_ATTR_S ISP_TNRMtPrt_AUTO_ATTR_S;
typedef ISP_TNR_MT_PRT_MANUAL_ATTR_S ISP_TNRMtPrt_MANUAL_ATTR_S;
typedef ISP_TNR_GHOST_ATTR_S ISP_TNRGhost_ATTR_S;
typedef ISP_TNR_GHOST_AUTO_ATTR_S ISP_TNRGhost_AUTO_ATTR_S;
typedef ISP_TNR_GHOST_MANUAL_ATTR_S ISP_TNRGhost_MANUAL_ATTR_S;
typedef ISP_TNR_LUMA_MOTION_ATTR_S ISP_TNRLumaMotion_ATTR_S;
typedef ISP_TNR_LUMA_MOTION_AUTO_ATTR_S ISP_TNRLumaMotion_AUTO_ATTR_S;
typedef ISP_TNR_LUMA_MOTION_MANUAL_ATTR_S ISP_TNRLumaMotion_MANUAL_ATTR_S;
typedef ISP_TNR_NOISE_MODEL_AUTO_ATTR_S ISP_TNRNoiseModel_AUTO_ATTR_S;
typedef ISP_TNR_NOISE_MODEL_MANUAL_ATTR_S ISP_TNRNoiseModel_MANUAL_ATTR_S;

// NR
typedef ISP_NR_FILTER_ATTR_S ISP_NRFilter_ATTR_S;
typedef ISP_NR_FILTER_AUTO_ATTR_S ISP_NRFilter_AUTO_ATTR_S;
typedef ISP_NR_FILTER_MANUAL_ATTR_S ISP_NRFilter_MANUAL_ATTR_S;

// YNR
typedef ISP_YNR_FILTER_ATTR_S ISP_YNRFilter_ATTR_S;
typedef ISP_YNR_FILTER_AUTO_ATTR_S ISP_YNRFilter_AUTO_ATTR_S;
typedef ISP_YNR_FILTER_MANUAL_ATTR_S ISP_YNRFilter_MANUAL_ATTR_S;
typedef ISP_YNR_MOTION_NR_ATTR_S ISP_YNRMotionNR_ATTR_S;
typedef ISP_YNR_MOTION_NR_AUTO_ATTR_S ISP_YNRMotionNR_AUTO_ATTR_S;
typedef ISP_YNR_MOTION_NR_MANUAL_ATTR_S ISP_YNRMotionNR_MANUAL_ATTR_S;

// Black level
typedef ISP_BLACK_LEVEL_ATTR_S ISP_BLACKLEVEL_ATTR_S;
typedef ISP_BLACK_LEVEL_AUTO_ATTR_S ISP_BLACKLEVEL_AUTO_ATTR_S;
typedef ISP_BLACK_LEVEL_MANUAL_ATTR_S ISP_BLACKLEVEL_MANUAL_ATTR_S;

// Colot tone
typedef ISP_COLOR_TONE_ATTR_S ISP_COLORTONE_ATTR_S;

// Parameter Rename
// TNR_GHOST
#define PrtctIn0	PrvMotion0
#define PrtctOut0	PrtctWgt0
#define PrtctIn1	PrvMotion1
#define PrtctOut1	PrtctWgt1

#endif /* __CVI_ISP_BACKWARDCOMPATIBLE_H__ */
