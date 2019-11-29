// XrayFilterヘッダ

#if !defined(AFX_XRAYFILTER_H__)
#define AFX_XRAYFILTER_H__

#include "lib/ximaglib.h"
#include "lib2define.h"
#include <emmintrin.h>

//=== define値 ===//

//lib、lib2 FilterBitmap使用切り替えフラグ
#define FB_LIB1 0 //ximaglib1内関数使用
#define FB_LIB2 1 //ximaglib2内関数使用

//SDLabelling3、4使用切り替えフラグ
#define SD_3 0 //SDLabelling3使用
#define SD_4 1 //SDLabelling4使用


class CXrayFilter
{
public:
	CXrayFilter();
	virtual ~CXrayFilter();

	//=== 画像処理インターフェース関数 ===//
	int FilterBitmap(BITMAP* pbm, XIMAGPARAM* pfp, XIMAGPARAM* pfp2 = NULL);
	int FilterBitmap4(BITMAP* pbm, XIMAGPARAM* pfp, XIMAGPARAM* pfp2 = NULL, 
						XIMAGPARAM* pfp3 = NULL, XIMAGPARAM* pfp4 = NULL);
	int FilterBitmapX(int nFilterNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	int FilterBitmap4_Lib1(BITMAP* pbm, XIMAGPARAM* pfp, XIMAGPARAM* pfp2 = NULL, 
						XIMAGPARAM* pfp3 = NULL, XIMAGPARAM* pfp4 = NULL);

	//=== パラメータ変換関数 ===//

	// 標準異物検出用パラメータ変換関数
	int ParamConvFilterTEST(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_2(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_3(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_4(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_5(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_6(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_7(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_8(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_9(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_10(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_11(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_12(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_13(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_14(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_15(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_16(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_17(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_18(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_19(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_20(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用
	int ParamConvFilterTEST_21(BOOL algocheck, BOOL offsetcheck, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam); // デバッグ用

protected:

	//=== 各種関数 ===//

	// テスト用
	BOOL Test(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_2(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_3(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_4(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_5(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_6(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_7(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_8(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_9(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_10(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_11(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_12(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_13(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_14(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_15(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_16(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_17(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_18(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_19(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_20(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);
	BOOL Test_21(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam);

};

#endif // !defined(AFX_XRAYFILTER_H__2A8707BA_0560_4BC0_AE6D_A801560D4288__INCLUDED_)
