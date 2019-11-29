// Xinterface.cpp：インターフェース用関数群を記述する。

#include <windows.h>
#include <math.h>
#include <float.h>
#include "ximaglib2.h"
#include "XrayFilter.h"

int CXimaglib2::FilterBitmap4(BITMAP* pbm, XIMAGPARAM* pfp, XIMAGPARAM* pfp2, XIMAGPARAM* pfp3, XIMAGPARAM* pfp4)
{
	int bret = 0;

	return bret;
}

int CXimaglib2::FilterBitmap(BITMAP* pbm, XIMAGPARAM* pfp, XIMAGPARAM* pfp2)
{
	int bret = 0;

	return bret;
}

int CXimaglib2::FilterBitmapX(int nFilterNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int bret = 0;

	return bret;
}

int CXimaglib2::FilterBitmap4_Lib1(BITMAP* pbm, XIMAGPARAM* pfp, XIMAGPARAM* pfp2, XIMAGPARAM* pfp3, XIMAGPARAM* pfp4)
{
	int bret = 0;

	return bret;
}


// 標準異物検出処理
int CXimaglib2::XrayFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0: // テスト用
		ret = m_xrayfilter->ParamConvFilterTEST(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 1: // テスト用２
		ret = m_xrayfilter->ParamConvFilterTEST_2(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 2: // テスト用３
		ret = m_xrayfilter->ParamConvFilterTEST_3(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 3: // テスト用４
		ret = m_xrayfilter->ParamConvFilterTEST_4(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 4: // テスト用５
		ret = m_xrayfilter->ParamConvFilterTEST_5(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 5: // テスト用６
		ret = m_xrayfilter->ParamConvFilterTEST_6(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 6: // テスト用７
		ret = m_xrayfilter->ParamConvFilterTEST_7(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 7: // テスト用８
		ret = m_xrayfilter->ParamConvFilterTEST_8(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 8: // テスト用９
		ret = m_xrayfilter->ParamConvFilterTEST_9(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 9: // テスト用１０
		ret = m_xrayfilter->ParamConvFilterTEST_10(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 10: // テスト用１１
		ret = m_xrayfilter->ParamConvFilterTEST_11(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 11: // テスト用１２
		ret = m_xrayfilter->ParamConvFilterTEST_12(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 12: // テスト用１３
		ret = m_xrayfilter->ParamConvFilterTEST_13(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 13: // テスト用１４
		ret = m_xrayfilter->ParamConvFilterTEST_14(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 14: // テスト用１５
		ret = m_xrayfilter->ParamConvFilterTEST_15(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 15: // テスト用１６
		ret = m_xrayfilter->ParamConvFilterTEST_16(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 16: // テスト用１７
		ret = m_xrayfilter->ParamConvFilterTEST_17(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 17: // テスト用１８
		ret = m_xrayfilter->ParamConvFilterTEST_18(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 18: // テスト用19
		ret = m_xrayfilter->ParamConvFilterTEST_19(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 19: // テスト用20
		ret = m_xrayfilter->ParamConvFilterTEST_20(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 20: // テスト用21
		ret = m_xrayfilter->ParamConvFilterTEST_21(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 拡張異物検出処理
int CXimaglib2::XrayExFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}


	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 透過画像平滑化処理
int CXimaglib2::XrayFlatImg(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 異物面積比処理
int CXimaglib2::XrayReconstructNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 異物膨脹処理
int CXimaglib2::XrayExpandNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// エッジマスク処理
int CXimaglib2::XrayEdgeMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}
	
	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// クリップマスク処理
int CXimaglib2::XrayClipMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ
	int nFilterNo = 0; // ximaglib2内アルゴリズム番号

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;
	
	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 缶マスク処理
int CXimaglib2::XrayCanMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	int nFilterNo = 0; // ximaglib2内アルゴリズム番号
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 脱酸素剤マスク処理
int CXimaglib2::XrayDeoxMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ

	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 瓶マスク処理
int CXimaglib2::XrayBottleMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}


	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 拡張マスク処理
int CXimaglib2::XrayExMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 包装検査処理
int CXimaglib2::XrayPackageCheck(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 逐次画像ラベリング処理
int CXimaglib2::XrayBlockLabelling(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 逐次ラベリング検査処理
int CXimaglib2::XrayLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 逐次ラベリング用情報領域確保処理
int CXimaglib2::XrayLabellingInfoMake(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = 1;

	return ret;
}

// 逐次ラベリング用ラベリング情報領域削除処理
void CXimaglib2::XrayLabellingInfoDelete()
{

}

// 逐次ラベリング結果色付け処理
int CXimaglib2::XrayLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	BOOL algocheck; // アルゴリズム有無チェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// フレーム処理専用プラットフォーム用インターフェース関数

// フレーム処理専用標準異物検出処理
int CXimaglib2::XrayFrameFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// フレーム処理専用拡張異物検出処理
int CXimaglib2::XrayFrameExFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}


	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// フレーム処理専用透過画像平滑化処理
int CXimaglib2::XrayFrameFlatImg(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 異物面積比処理
int CXimaglib2::XrayFrameReconstructNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 異物膨脹処理処理
int CXimaglib2::XrayFrameExpandNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// エッジマスク処理
int CXimaglib2::XrayFrameEdgeMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}
	
	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// クリップマスク処理
int CXimaglib2::XrayFrameClipMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ
	int nFilterNo = 0; // ximaglib2内アルゴリズム番号

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 缶マスク処理
int CXimaglib2::XrayFrameCanMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	int nFilterNo = 0; // ximaglib2内アルゴリズム番号
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 脱酸素剤マスク処理
int CXimaglib2::XrayFrameDeoxMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ

	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 瓶マスク処理
int CXimaglib2::XrayFrameBottleMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}


	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;
	
	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// 拡張マスク処理
int CXimaglib2::XrayFrameExMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	int offsetsize = -1; // のりしろサイズ
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;


}

// 欠品、形状検査処理
int CXimaglib2::XrayFrameLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;
	
	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 欠品、形状検査結果色付け処理
int CXimaglib2::XrayFrameLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return値
	BOOL algocheck; // アルゴリズム有無チェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// フレーム画像ラベリング処理
int CXimaglib2::XrayFrameLabelling(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// 包装検査処理
int CXimaglib2::XrayFramePackageCheck(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	return 0;
}


// 固定マスク回転処理
int CXimaglib2::XrayFrameMaskRotate(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	return 0;
}

// ヒストグラムイコライゼーション処理
int CXimaglib2::XrayFrameHistEQ(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // アルゴリズム有無チェックフラグ
	BOOL offsetcheck;// のりしろサイズチェックフラグ

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // 範囲外のアルゴリズム番号の場合、-2を返す。
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}


//=== 特注機用処理 ===//

// 汎用異物検出処理
int CXimaglib2::XrayVersatileFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用マスク処理
int CXimaglib2::XrayVersatileMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用マスク逐次ラベリング検査処理
int CXimaglib2::XrayVersatileMaskLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用マスク逐次ラベリング用情報領域確保処理
int CXimaglib2::XrayVersatileMaskLabellingInfoMake(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用マスク逐次ラベリング用ラベリング情報領域削除処理
int CXimaglib2::XrayVersatileMaskLabellingInfoDelete(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用マスク逐次ラベリング結果色付け処理
int CXimaglib2::XrayVersatileMaskLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用逐次ラベリング検査処理
int CXimaglib2::XrayVersatileLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用逐次ラベリング用情報領域確保処理
int CXimaglib2::XrayVersatileLabellingInfoMake(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用逐次ラベリング用ラベリング情報領域削除処理
int CXimaglib2::XrayVersatileLabellingInfoDelete(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// 汎用逐次ラベリング結果色付け処理
int CXimaglib2::XrayVersatileLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

