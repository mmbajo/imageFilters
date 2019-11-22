// XrayFilter.cpp：ブロック処理（フレーム処理共用もあり）用フィルタ処理を記述する。

#include <windows.h>
#include "XrayFilter.h"
#include <math.h>
#include <float.h>
#include <vector>
#include <algorithm>
#include <list>
#include <queue>

CXrayFilter::CXrayFilter()
{

}

CXrayFilter::~CXrayFilter()
{

}



/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			（379, 473）の画素を画素値255にする関数を、Test関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;


	//=== ここから記述します ===//

	pOut[303099] = 255;

	//=== ここまで記述します ===//

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_2
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			全ての画素を画素値255にする関数を、Test_2関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_2(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== ここから記述します ===//

	for (int j = 0; j < 746; j++) {
		for (int i = 0; i < 640; i++) {
			pOut[j * 640 + i] = 255;
		}
	}

	//=== ここまで記述します ===//

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_3
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			（200, 473）から（500, 473）を結ぶ、画素値255の直線を引く関数を、Test_3関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_3(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== ここから記述します ===//

	const int j = 473;

	for (int i = 200; i < 500; i++) {

		pOut[j * 640 + i] = 255;

	}

	//=== ここまで記述します ===//

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_4
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			（379, 200）から（379, 500）を結ぶ、画素値255の直線を引く関数を、Test_4関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_4(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== ここから記述します ===//

	const int i = 379;

	for (int j = 200; j < 500; j++) {

		pOut[j * 640 + i] = 255;

	}

	//=== ここまで記述します ===//

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_5
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			（200, 200）から（500, 500）を結ぶ、画素値255の直線を引く関数を、Test_5関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_5(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== ここから記述します ===//

	for (int j = 200; j < 500; j++) {
		for (int i = 200; i < 500; i++) {

			if (i == j) {
				pOut[j * 640 + i] = 255;
			}
			

		}
	}

	//=== ここまで記述します ===//

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_6
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			左上の画素が（298,413）、右下の画素が（498,673）となる、画素値255の長方形を作成する関数を、
*			Test_6関数に作成しなさい。ここで、長方形は、外周のみでなく、内部も画素値255となっていること。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_6(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== ここから記述します ===//

	for (int j = 0; j < 746; j++) {
		for (int i = 0; i < 640; i++) {
			if ((413 <= j && j <= 673) && (298 <= i && i <= 498)) {

				pOut[j * 640 + i] = 255;

			}
		}
	}

	//=== ここまで記述します ===//

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_7
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			入力画像を上下左右反転した画像を出力画像とする関数を、Test_7関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_7(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	//=== ここから記述します ===//

	int mirrored_index = 0;

	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			mirrored_index = (Height - j) * Width + (Width - i);
			pOut[j * Width + i] = pIn[mirrored_index];

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_8
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			入力画像の画素値が、パラメータ01より大きい場合、画素値255、それ以外の場合、
*			画素値0の出力画像とする関数を、Test_8関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_8(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//

	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			if (pIn[j * Width + i] > Param01) {
				pOut[j * Width + i] = 255;
			}
			else {
				pOut[j * Width + i] = 0;
			}

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_9
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			入力画像の画素値が、パラメータ01より大きい場合、画素値255、パラメータ01以下で、
*			パラメータ02より大きい場合、画素値128、それ以外の場合、画素値0の３値化画像を
*			出力画像とする関数を、Test_9関数に作成しなさい。ここで、パラメータ01＞パラメータ02
*			でない場合は、出力画像は、入力画像の内容を出力するようにしてください。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_9(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;
	const int Param02 = pAlgoparam->Param2;

	//=== ここから記述します ===//

	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			if (Param01 <= Param02) {
				pOut[j * Width + i] = pIn[j * Width + i];
			}
			else if (pIn[j * Width + i] > Param01) {
				pOut[j * Width + i] = 255;
			}
			else if (Param02 < pIn[j * Width + i] && pIn[j * Width + i] <= Param01) {
				pOut[j * Width + i] = 128;
			}
			else {
				pOut[j * Width + i] = 0;
			}

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_10
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			入力画像の画素値の濃淡を白黒反転した画像を出力画像とする関数を、Test_10関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_10(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	//=== ここから記述します ===//

	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			pOut[j * Width + i] = 255 - pIn[j * Width + i];

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_11
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			カーネル中央画素の値が、カーネル右上端の画素値となる画像を出力画像とする関数を、Test_11関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_11(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//
	const int nHalf = floor(Param01 / 2);

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			pOut[j * Width + i] = pIn[(j - nHalf) * Width + (i + nHalf)];

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_12
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			カーネル中央画素の値が、カーネル内画素の最大値となる画像を出力画像とする関数を、Test_12関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_12(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//

	const int nHalf = floor(Param01 / 2);

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			int tempMax = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {
					if (pIn[(j + kj) * Width + (i + ki)] > tempMax) {

						tempMax = pIn[(j + kj) * Width + (i + ki)];

					}
				}
			}

			pOut[j * Width + i] = tempMax;
		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_13
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			カーネル中央画素の値が、カーネル内画素の平均値となる画像を出力画像とする関数を、
*			Test_13関数に作成しなさい。平均値は、小数点以下を切り捨てにすること。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_13(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//

	const int nHalf = floor(Param01 / 2);
	const int total = Param01 * Param01;

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			int tempSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					tempSum += pIn[(j + kj) * Width + (i + ki)];

				}
			}

			pOut[j * Width + i] = floor(tempSum / total);

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_14
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			元画像から平滑化処理後画像を引いた値（負値になる場合は0とすること）が、
*			Param02より大きい部分を255、その他を0とする画像を出力画像とする関数を、
*			Test_14関数に作成しなさい。平滑化処理において、カーネル内平均値は、
*			小数点以下を切り捨てにすること。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_14(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;
	const int Param02 = pAlgoparam->Param2;

	//=== ここから記述します ===//

	int nHalf = floor(Param01 / 2);
	int total = Param01 * Param01;
	int tempSum = 0;

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			tempSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					tempSum += pIn[(j + kj) * Width + (i + ki)];

				}
			}

			if ((pIn[j * Width + i] - floor(tempSum / total) > 0) && (pIn[j * Width + i] - floor(tempSum / total) > Param02)) {
				pOut[j * Width + i] = pIn[j * Width + i] - floor(tempSum / total);
			}
			else {
				pOut[j * Width + i] = 0;
			}
		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_15
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			カーネル中央画素の値が、カーネル内画素の中央値となる画像を出力画像とする関数を、
*			Test_15関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_15(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//

	const int nHalf = floor(Param01 / 2);

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			std::vector<int> a;

			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					a.push_back(pIn[(j + kj) * Width + (i + ki)]);

				}
			}

			std::sort(a.begin(), a.end());

			pOut[j * Width + i] = a[floor(Param01 * Param01 / 2)];
		}
	}

	//// Let's try Implementing Fast 2D Median Filter
	//// Reference [https://www.freelists.org/archives/ingsw3/11-2013/pdfNNRwXsvXQN.pdf]
	//const int th = floor(Param01 * Param01 / 2);

	//for (int j = nHalf; j < Height - nHalf; j++) {
	//	// Set-up Histogram Array
	//	std::list<int> hist;
	//	std::vector<int> temp;
	//	int mdn = 0;
	//	int ltmdn = 0; // number of pixels having gray levels less than mdn in a window
	//	

	//	for (int ki = -nHalf; ki <= nHalf; ki++) {
	//		for (int kj = -nHalf; kj <= nHalf; kj++) {
	//			hist.push_back(pIn[(j + kj) * Width + ki]);
	//			temp.push_back(pIn[(j + kj) * Width + ki]);
	//		}
	//	}

	//	// Find median of the hist array
	//	std::sort(temp.begin(), temp.end());
	//	mdn = temp[th];

	//	// Setting ltdmn
	//	for (int i = 0; i < temp.max_size(); i++) {
	//		if (temp[i] < mdn) {
	//			ltmdn += 1;
	//		}
	//	}
	//	
	//	for (int i = nHalf + 1; i < Width - nHalf; i++) {
	//		// Put left most column of kernel to an array and add new
	//		// Define new hist kernel
	//		std::queue<int> leftColumn;
	//		std::list<int> rightColumn;
	//		for (int count = 0; count < Param01; count++) {
	//			leftColumn.front();
	//			hist.push_back(pIn[])
	//		}
	//		
	//	}
	//}


	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_16
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			元画像から中央値化処理後画像を引いた値（負値になる場合は0とすること）が、
*			Param02より大きい部分を255、その他を0とする画像を出力画像とする関数を、
*			Test_16関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_16(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;
	const int Param02 = pAlgoparam->Param2;

	//=== ここから記述します ===//

	int nHalf = floor(Param01 / 2);

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			std::vector<int> a;

			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					a.push_back(pIn[(j + kj) * Width + (i + ki)]);

				}
			}

			std::sort(a.begin(), a.end());

			int currMedian = a[floor(Param01 * Param01 / 2)];

			if ((pIn[j * Width + i] - currMedian > 0) && (pIn[j * Width + i] - currMedian > Param02)) {
				pOut[j * Width + i] = pIn[j * Width + i] - currMedian;
			}
			else {
				pOut[j * Width + i] = 0;
			}

		}
	}
	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_17
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			閾値（Param01）より大きいとき255、それ以外は0で２値化された画像において、
*			画素値255の部分の輪郭線を出力画像とする関数を、Test_17関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_17(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//

	int nHalf = 1; // 3 by 3 kernel
	int up = 0;
	int down = 0;
	int left = 0;
	int right = 0;
	int center = 0;

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			// center-binarization
			if (pIn[j * Width + i] > Param01) {
				center = 255;
				pOut[j * Width + i] = center;
			}
			else {
				center = 0;
			}

			// check if current pixel is 255, if so binarize its surroundings
			if (center == 255) {

				// binarize up down left right pixels wrt to center accrding to a treshhold. if any of the surrounding pixel is not black, continue the loop
				if (pIn[(j - nHalf) * Width + i] > Param01) {
					up = 255;
				}
				else {
					up = 0;
					continue;
				}

				if (pIn[(j + nHalf) * Width + i] > Param01) {
					down = 255;
				}
				else {
					down = 0;
					continue;
				}

				if (pIn[j * Width + (i - nHalf)] > Param01) {
					left = 255;
				}
				else {
					left = 0;
					continue;
				}

				if (pIn[j * Width + (i + nHalf)] > Param01) {
					right = 255;
				}
				else {
					right = 0;
					continue;
				}

				// check if surroounding pixels are equal. The following block of code will only be read if the surroundings are all 255
				pOut[j * Width + i] = 0;

			}
			else {
				continue;
			}
		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* クラス名：	CXrayFilter
* クラス概要：	画像処理フィルタクラス
* メソッド名：	Test_17
* 機能概要：	テスト用関数
* 入力：	<IN> 	IMGPARAM* pImgParam		画像パラメータ
*					Param1	画像幅
*					Param2	画像高さ
*					ALGOPARAM* pAlgoParam	画像処理パラメータ
* 出力：	<OUT>   IMGPARAM* pImgParam		画像パラメータ
* 関数値：	BOOL
*  TRUE		正常
*  FALSE	異常
* 使用例：  ---
* 詳細記述：
*			問題18で作成した、カーネル中央画素の値が、カーネル内画素の平均値となる画像を
*			出力画像とする関数を、可能な限り高速化したものをTest_18関数に作成しなさい。
* 変更履歴：
*  新規 2010/8/12 山崎健史
*  ---
------*/
BOOL CXrayFilter::Test_18(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== 画像入力 ===//

	// 画像幅
	const int Width = pImgparam->Param1;
	// 画像高さ
	const int Height = pImgparam->Param2;

	// 入力画像
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// 出力画像
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// 入力パラメータ
	const int Param01 = pAlgoparam->Param1;

	//=== ここから記述します ===//

	const int nHalf = floor(Param01 / 2);
	const int total = Param01 * Param01;
	
	// Move kernel downwards
	for (int j = nHalf; j < Height - nHalf; j++) {

		// Initialize temp sum
		int tempSum = 0;
		int firstColumnSum = 0;

		// Accumulate initial kernel sum to tempSum
		for (int kj = -nHalf; kj <= nHalf; kj++) {
			for (int ki = 0; ki < Param01; ki++) {

				tempSum += pIn[(j + kj) * Width + ki];

				// initialize firstColumnSum
				if (ki == 0) {
					firstColumnSum += pIn[(j + kj) * Width];
				}

			}
		}

		// Input the first iteration result
		pOut[j * Width] = floor(tempSum / total);

		// Move kernel sideways, start at index 1, not 0
		for (int i = nHalf + 1; i < Width - nHalf; i++) {

			// define new column sum
			int newColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				newColumnSum += pIn[(j + kj) * Width + (i + nHalf)];

			}

			// update tempSum by subtracting the firstColumnSum of the previous iteration and adding the newColumnSum introduced
			tempSum = tempSum - firstColumnSum + newColumnSum;

			// update firstColumnSum
			firstColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				firstColumnSum += pIn[(j + kj) * Width + (i - nHalf)];

			}
			

			// store result
			pOut[j * Width + i] = floor(tempSum / total);

		}
	}

	//=== ここまで記述します ===//

	delete[] pIn;

	return TRUE;
}
