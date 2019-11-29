// XrayFilter.cpp：Processing Block
// Machine Excercise for Image Processing newbies

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
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that transforms (379, 473) pixel's value to 255.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Define Output Image
	BYTE* pOut = (BYTE*)pImgparam->Img1;


	//=== Input your code below ===//

	const int Width = 640;
	const int Height = 746;
	int index = 473 * Width + 379;

	pOut[index] = 255;

	//=== Your code ends here ===//

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_2
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that transforms all pixel value to 255.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_2(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Define Output Image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== Input your code below ===//

	for (int j = 0; j < 746; j++) {
		for (int i = 0; i < 640; i++) {
			pOut[j * 640 + i] = 255;
		}
	}

	//=== Your code ends here ===//

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_3
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that draws a straight line connecting (200, 473) and (500, 473) with a pixel value of 255.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_3(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Define Output Image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== Input your code below ===//

	const int j = 473;

	for (int i = 200; i < 500; i++) {

		pOut[j * 640 + i] = 255;

	}

	//=== Your code ends here ===//

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_4
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that draws a straight line connecting (379, 200) and (379, 500) with a pixel value of 255.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_4(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Define Output Image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== Input your code below ===//

	const int i = 379;

	for (int j = 200; j < 500; j++) {

		pOut[j * 640 + i] = 255;

	}

	//=== Your code ends here ===//

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_5
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that draws a straight line connecting (200, 200) and (500, 500) with a pixel value of 255.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_5(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Define Output Image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== Input your code below ===//

	for (int j = 200; j < 500; j++) {
		for (int i = 200; i < 500; i++) {

			if (i == j) {
				pOut[j * 640 + i] = 255;
			}


		}
	}

	//=== Your code ends here ===//

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_6
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function in Test_6 that creates a rectangle with a pixel value of 255, with the upper left pixel at (298,413) and the lower right pixel at (498,673).
*			Here, the rectangle has a pixel value of 255 not only in the outer periphery but also in the interior.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_6(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Define Output Image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	//=== Input your code below ===//

	for (int j = 0; j < 746; j++) {
		for (int i = 0; i < 640; i++) {
			if ((413 <= j && j <= 673) && (298 <= i && i <= 498)) {

				pOut[j * 640 + i] = 255;

			}
		}
	}

	//=== Your code ends here ===//

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_7
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that mirrors the image with respect to x and y axis.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_7(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define Input Image Variable
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define Output Image Variable
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	//=== Input your code below ===//

	int mirrored_index = 0;

	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			mirrored_index = (Height - j) * Width + (Width - i);
			pOut[j * Width + i] = pIn[mirrored_index];

		}
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_8
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			If the input pixel is greater than Param01, set the output pixel to be 255, otherwise set it to 0.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_8(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define Input Image Variable
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define Output Image Variable
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Constant parameters to be set in ImageEdit.exe
	const int Param01 = pAlgoparam->Param1;

	//=== Input your code below ===//

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

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_9
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that can ternarize an image.
*			If the input pixel is greater than Param01, set the output pixel to 255. 
*			If the input pixel is less than or equal to Param01 and greater than Param02, set the output pixel to 128. 
*			Otherwise, set ouput pixel to zero. If Param01 is greater than Param02, set the output pixel the same as the input.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_9(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input Parameters
	const int Param01 = pAlgoparam->Param1;
	const int Param02 = pAlgoparam->Param2;

	//=== Input your code below ===//

	if (Param01 < Param02){
		pOut = pIn;
	}
	else{
		for (int j = 0; j < Height; j++) {
			for (int i = 0; i < Width; i++) {

				if (pIn[j * Width + i] > Param01) {
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
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_10
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Create a function that makes reverses the gray level of the pixel value of the input image.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_10(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the imput image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	//=== Your code starts here ===//

	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			pOut[j * Width + i] = 255 - pIn[j * Width + i];

		}
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_11
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that uses a kernel. The output pixel should be the upper left pixel of the kernel.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_11(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Input Image ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameters
	const int Param01 = pAlgoparam->Param1;

	//=== Your code starts here ===//

	// Kernel size threshold set to 33

	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	const int nHalf = floor(kernelSize / 2);

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			pOut[j * Width + i] = pIn[(j - nHalf) * Width + (i + nHalf)];

		}
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_12
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that uses a kernel that returns the max value inside the kernel.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_12(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameters
	const int Param01 = pAlgoparam->Param1;

	//=== Your code starts here ===//

	// Kernel size threshold set to 33

	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	const int nHalf = floor(kernelSize / 2);

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

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_13
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that outputs the average pixel value in a kernel.
*			Take the floor value of the average as the output.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_13(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input Parameters
	const int Param01 = pAlgoparam->Param1;

	//=== Input your code here ===//

	// Kernel size threshold set to 33

	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	// Implementation of the algorithm
	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;

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

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_14
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that outputs the value of 255,
*			if the difference between the original image and the smoothened image using mean filter kernel is greater than Param02.
*			Otherwise, output 0.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_14(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Input Image ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameters
	const int Param01 = pAlgoparam->Param1;
	const int Param02 = pAlgoparam->Param2;

	//=== Input your code below ===//

	// Kernel size threshold set to 33

	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	// Implementation of the algorithm

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			// Declare tempSum in this scope
			int tempSum = 0;

			// tempSum accumulation
			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					tempSum += pIn[(j + kj) * Width + (i + ki)];

				}
			}

			// Declare tempMean in this scope
			int tempMean = floor(tempSum / total);

			// Binarization
			if ((pIn[j * Width + i] - tempMean > 0) && (pIn[j * Width + i] - tempMean > Param02)) {
				pOut[j * Width + i] = 255;
			}
			else {
				pOut[j * Width + i] = 0;
			}

		}
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_15
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that applies a median filter of a given kernel size.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_15(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Input Image ===//

	// Image width
	const int Width = pImgparam->Param1;
	// Image height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input Parameters
	const int Param01 = pAlgoparam->Param1;

	//=== Input your code below ===//

	// Kernel size threshold set to 33

	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	// Implementation of the algorithm

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;
	int Histogram[256];
	

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {


			// Set histogram values to zero
			for (int index = 0; index < 256; index++) {
				Histogram[index] = 0;
			}

			// Iterate through kernel window
			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					Histogram[pIn[(j + kj) * Width + (i + ki)]]++;

				}
			}

			// Declare Histogram temp sum
			int tempSum = 0;

			for (int index = 0; index < 256; index++) {
				tempSum += Histogram[index];
				if (tempSum > total/2) {
					// Set pOut to tempSum
					pOut[j * Width + i] = index;
					break;
				}
			}
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


	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_16
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement a function that outputs the value of 255,
*			if the difference between the original image and the smoothened image using median filter kernel is greater than Param02.
*			Otherwise, output 0.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_16(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Input Image ===//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameter
	const int Param01 = pAlgoparam->Param1;
	const int Param02 = pAlgoparam->Param2;

	//=== Input your code below ===//

	// Kernel size threshold set to 33

	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	// Implementation of the algorithm

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;

	for (int j = nHalf; j < Height - nHalf; j++) {
		for (int i = nHalf; i < Width - nHalf; i++) {

			// Declare Histogram
			int Histogram[256];

			// Set histogram values to zero
			for (int index = 0; index < 256; index++) {
				Histogram[index] = 0;
			}

			// Iterate through kernel window
			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = -nHalf; ki <= nHalf; ki++) {

					Histogram[pIn[(j + kj) * Width + (i + ki)]] += 1;

				}
			}

			// Declare Histogram temp sum
			int tempSum = 0;
			int currMedian = 0;

			for (int index = 0; index < 256; index++) {
				tempSum += Histogram[index];
				if (tempSum > total/2) {
					// Set pOut to currHistValue
					currMedian = index;
					break;
				}
			}

			if ((pIn[j * Width + i] - currMedian > 0) && (pIn[j * Width + i] - currMedian > Param02)) {
				pOut[j * Width + i] = 255;
			}
			else {
				pOut[j * Width + i] = 0;
			}

		}
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_17
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Binzarize the image with respect to a threshold Param01. 
*			If input pixel is greater than Param01, set resulting image to 255, otherwise set it to 0.
*			Using the result from the binarization, create an algorithm that displays only the external contourlines of the blobs formed.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_17(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Input Image ===//

	// Image width
	const int Width = pImgparam->Param1;
	// Image height
	const int Height = pImgparam->Param2;

	// Input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameter
	const int Param01 = pAlgoparam->Param1;

	//=== Input your code below ===//

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

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_18
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Optimize the running speed of mean filter function implemented in Test_13.
* Change History：
*  First  Draft 2010/08/12 Yamazaki, Takeshi
*  Second Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_18(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image width
	const int Width = pImgparam->Param1;
	// Image height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameters
	const int Param01 = pAlgoparam->Param1;

	//=== Input your code below ===//

	// Check Param01 if it is below max kernel size of 33
	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;

	// Initialize firstRowSum
	int firstRowSum = 0;

	// Move kernel downwards
	for (int j = nHalf; j < Height - nHalf; j++) {

		// Initialize temp sum and firstColumnSum
		int tempSumForCols = 0;
		int tempSumForRows = 0;
		int firstColumnSum = 0;

		// Accumulate initial kernel sum to tempSum
		if (j == nHalf) {
			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = 0; ki < kernelSize; ki++) {

					tempSumForCols += pIn[(j + kj) * Width + ki];
					tempSumForRows += pIn[(j + kj) * Width + ki];

					// Initialize firstColumnSum
					if (ki == 0) {
						firstColumnSum += pIn[(j + kj) * Width];
					}

					// Initialize firstRowSum
					if (kj == -nHalf) {
						firstRowSum += pIn[ki];
					}
				}
			}
		}
		else {
			// define newRowSum
			int newRowSum = 0;

			for (int ki = -nHalf; ki <= nHalf; ki++) {

				newRowSum += pIn[(j + nHalf) * Width + (ki)];

			}

			// update tempSumForRows
			tempSumForRows = tempSumForRows - firstRowSum + newRowSum;

			// update firstRowSum
			
			firstRowSum = 0;
			
			for (int ki = -nHalf; ki <= nHalf; ki++) {

				firstRowSum += pIn[(j - nHalf) * Width + (ki)];

			}

			// Set tempSumForCols as the updated tempSumForRows
			tempSumForCols = tempSumForRows;

		}

		// Input the first iteration result
		pOut[j * Width] = floor(tempSumForRows / total);

		// Move kernel sideways, start at index 1, not 0
		for (int i = nHalf + 1; i < Width - nHalf; i++) {

			// define new column sum
			int newColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				newColumnSum += pIn[(j + kj) * Width + (i + nHalf)];

			}

			// update tempSum by subtracting the firstColumnSum of the previous iteration and adding the newColumnSum introduced
			tempSumForCols = tempSumForCols - firstColumnSum + newColumnSum;

			// update firstColumnSum
			firstColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				firstColumnSum += pIn[(j + kj) * Width + (i - nHalf)];

			}

			// store result
			pOut[j * Width + i] = floor(tempSumForCols / total);

		}
	}

	//=== Your code ends here ===//

	delete[] pIn;

	return TRUE;
}


/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_19
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement an algorithm that detects the contaminants on test03.bmp
* Change History：
*  First Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_19(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input ===//

	// Image width
	const int Width = pImgparam->Param1;
	// Image height
	const int Height = pImgparam->Param2;

	// Define pIn, pInCopy, the input image
	BYTE* pIn = new BYTE[Width * Height];
	BYTE* pInCopy = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);
	memcpy(pInCopy, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input parameters
	const int Param01 = pAlgoparam->Param1; // kernelSize
	const int Param02 = pAlgoparam->Param2; // Threshold for differential mean filtering
	const int Param03 = pAlgoparam->Param3; // Number of times differential mean filtering will occur
	const int Param04 = pAlgoparam->Param4; // Threshold for binarization

	//=== Input your code below ===//

	// Check Param01 if it is below max kernel size of 33
	int kernelSize = 0;
	int kernelThreshold = 33;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;

	for (int num_iter = 0; num_iter < Param03; num_iter++) {


		// Initialize firstRowSum
		int firstRowSum = 0;

		// Move kernel downwards
		for (int j = nHalf; j < Height - nHalf; j++) {

			// Initialize temp sum and firstColumnSum
			int tempSumForCols = 0;
			int tempSumForRows = 0;
			int firstColumnSum = 0;

			// Accumulate initial kernel sum to tempSum
			if (j == nHalf) {
				for (int kj = -nHalf; kj <= nHalf; kj++) {
					for (int ki = 0; ki < kernelSize; ki++) {

						tempSumForCols += pIn[(j + kj) * Width + ki];
						tempSumForRows += pIn[(j + kj) * Width + ki];

						// Initialize firstColumnSum
						if (ki == 0) {
							firstColumnSum += pIn[(j + kj) * Width];
						}

						// Initialize firstRowSum
						if (kj == -nHalf) {
							firstRowSum += pIn[ki];
						}
					}
				}
			}
			else {
				// define newRowSum
				int newRowSum = 0;

				for (int ki = -nHalf; ki <= nHalf; ki++) {

					newRowSum += pIn[(j + nHalf) * Width + (ki)];

				}

				// update tempSumForRows
				tempSumForRows = tempSumForRows - firstRowSum + newRowSum;

				// update firstRowSum

				firstRowSum = 0;

				for (int ki = -nHalf; ki <= nHalf; ki++) {

					firstRowSum += pIn[(j - nHalf) * Width + (ki)];

				}

				// Set tempSumForCols as the updated tempSumForRows
				tempSumForCols = tempSumForRows;

			}

			// Input the first iteration result
			int tempMean = floor(tempSumForRows / total);
			if (pIn[j * Width] - tempMean > Param02) {
				pOut[j * Width] = 0;
			}
			else {
				pOut[j * Width] = pIn[j * Width];
			}

			// Move kernel sideways, start at index 1, not 0
			for (int i = nHalf + 1; i < Width - nHalf; i++) {

				// define new column sum
				int newColumnSum = 0;

				for (int kj = -nHalf; kj <= nHalf; kj++) {

					newColumnSum += pIn[(j + kj) * Width + (i + nHalf)];

				}

				// update tempSum by subtracting the firstColumnSum of the previous iteration and adding the newColumnSum introduced
				tempSumForCols = tempSumForCols - firstColumnSum + newColumnSum;

				// update firstColumnSum
				firstColumnSum = 0;

				for (int kj = -nHalf; kj <= nHalf; kj++) {

					firstColumnSum += pIn[(j + kj) * Width + (i - nHalf)];

				}

				// store result
				int tempMean = floor(tempSumForCols / total);
				if (pIn[j * Width + i] - tempMean > Param02) {
					pOut[j * Width + i] = 0;
				}
				else {
					pOut[j * Width + i] = pIn[j * Width + i];
				}

			}
		}

		// Set values of pOut to pIn for the next Iteration
		for (int j = 0; j < Height; j++) {
			for (int i = 0; i < Width; i++) {
				pIn[j * Width + i] = pOut[j * Width + i];
			}
		}

	}

	// Perform Binarization processing given Threshold Param04 and adding the result to the original image
	
	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {

			if (pIn[j * Width + i] > Param04) {
				pOut[j * Width + i] = 255;
			}
			else {
				pOut[j * Width + i] = pInCopy[j * Width + i];
			}
		}
	}

	//=== Your code ends here ===//

	delete[] pIn;
	delete[] pInCopy;

	return TRUE;
}


/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_20
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement an algorithm that detects the contaminants on test04.bmp
* Change History：
*  First Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_20(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input==//
	
	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input Parameters
	const int Param01 = pAlgoparam->Param1; // kernelSize
	const int Param02 = pAlgoparam->Param2; // Threshold
	
	// Check Param01 if it is below max kernel size of 151
	int kernelSize = 0;
	int kernelThreshold = 151;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;


	// Initialize firstRowSum
	int firstRowSum = 0;

	// Move kernel downwards
	for (int j = nHalf; j < Height - nHalf; j++) {

		// Initialize temp sum and firstColumnSum
		int tempSumForCols = 0;
		int tempSumForRows = 0;
		int firstColumnSum = 0;

		// Accumulate initial kernel sum to tempSum
		if (j == nHalf) {
			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = 0; ki < kernelSize; ki++) {

					tempSumForCols += pIn[(j + kj) * Width + ki];
					tempSumForRows += pIn[(j + kj) * Width + ki];

					// Initialize firstColumnSum
					if (ki == 0) {
						firstColumnSum += pIn[(j + kj) * Width];
					}

					// Initialize firstRowSum
					if (kj == -nHalf) {
						firstRowSum += pIn[ki];
					}
				}
			}
		}
		else {
			// define newRowSum
			int newRowSum = 0;

			for (int ki = -nHalf; ki <= nHalf; ki++) {

				newRowSum += pIn[(j + nHalf) * Width + (ki)];

			}

			// update tempSumForRows
			tempSumForRows = tempSumForRows - firstRowSum + newRowSum;

			// update firstRowSum

			firstRowSum = 0;

			for (int ki = -nHalf; ki <= nHalf; ki++) {

				firstRowSum += pIn[(j - nHalf) * Width + (ki)];

			}

			// Set tempSumForCols as the updated tempSumForRows
			tempSumForCols = tempSumForRows;

		}

		// Input the first iteration result
		int tempMean = floor(tempSumForRows / total);
		if (pIn[j * Width] - tempMean > Param02) {
			pOut[j * Width] = 255;
		}
		else {
			pOut[j * Width] = pIn[j * Width];
		}

		// Move kernel sideways, start at index 1, not 0
		for (int i = nHalf + 1; i < Width - nHalf; i++) {

			// define new column sum
			int newColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				newColumnSum += pIn[(j + kj) * Width + (i + nHalf)];

			}

			// update tempSum by subtracting the firstColumnSum of the previous iteration and adding the newColumnSum introduced
			tempSumForCols = tempSumForCols - firstColumnSum + newColumnSum;

			// update firstColumnSum
			firstColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				firstColumnSum += pIn[(j + kj) * Width + (i - nHalf)];

			}

			// store result
			int tempMean = floor(tempSumForCols / total);
			if (pIn[j * Width + i] - tempMean > Param02) {
				pOut[j * Width + i] = 255;
			}
			else {
				pOut[j * Width + i] = pIn[j * Width + i];
			}

		}
	}

	// Algorithm end

	delete[] pIn;

	return TRUE;
}

/*++++++
* Class Name：			CXrayFilter
* Class Overview：		Image Processing Filter Class
* Method Name：			Test_21
* Function Overview：	Test Function
* Input：				<IN> 	IMGPARAM* pImgParam		Image Parameter
*								Param1					Image Width
*								Param2					Image Height
*								ALGOPARAM* pAlgoParam	Image Processing Parameter
* Output：				<OUT>   IMGPARAM* pImgParam		Image Parameter
* Function Value：		BOOL
*							TRUE		Pass
*							FALSE		Fail
* Example of use：  ---
* Description：
*			Implement an algorithm that detects the contaminants on test05.bmp
* Change History：
*  First Draft 2019/11/22 Bajo, Mark
*  ---
------*/
BOOL CXrayFilter::Test_21(IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	//=== Image Input==//

	// Image Width
	const int Width = pImgparam->Param1;
	// Image Height
	const int Height = pImgparam->Param2;

	// Define pIn, the input image
	BYTE* pIn = new BYTE[Width * Height];

	memcpy(pIn, (BYTE*)pImgparam->Img1, Width * Height);

	// Define pOut, the output image
	BYTE* pOut = (BYTE*)pImgparam->Img1;

	memset(pOut, 0, Width * Height);

	// Input Parameters
	const int Param01 = pAlgoparam->Param1; // kernelSize for Stage 1
	const int Param02 = pAlgoparam->Param2; // Threshold for stage 1
	const int Param03 = pAlgoparam->Param3; // kernelSize for Stage 2
	const int Param04 = pAlgoparam->Param4;	// Threshold for stage 2
	const int Param05 = pAlgoparam->Param5; // Initial reval of 255 pixels
	
	// ==== Define Helper Functions ==== //

	auto addTwoArray = [&]()
	{
		for (int j = 0; j < Height; j++) {
			for (int i = 0; i < Width; i++) {

				int tempSum = pOut[j * Width + i] + pIn[j * Width + i];

				if (tempSum > 255) {
					pOut[j * Width + i] = 255;
				}
				else {
					pOut[j * Width + i] = tempSum;
				}
			}
		}

		return pOut;
	};

	auto subtractTwoArray = [&]() 
	{
		for (int j = 0; j < Height; j++) {
			for (int i = 0; i < Width; i++) {

				int tempDiff = pIn[j * Width + i] - pOut[j * Width + i];

				if (tempDiff < 0) {
					pOut[j * Width + i] = 0;
				}
				else {
					pOut[j * Width + i] = tempDiff;
				}
			}
		}

		return pOut;
	};
	
	// ===== End of Helper Functions ===== //


	// Check Param01 if it is below max kernel size of 151
	int kernelSize = 0;
	int kernelThreshold = 151;

	if (Param01 < 3) {
		kernelSize = 3;
	}
	else if (Param01 <= kernelThreshold) {
		if (Param01 % 2 == 1) {
			kernelSize = Param01;
		}
		else {
			kernelSize = Param01 - 1;
		}
	}
	else {
		kernelSize = kernelThreshold;
	}

	const int nHalf = floor(kernelSize / 2);
	const int total = kernelSize * kernelSize;

	// Subtract 1 for all pixels equal to 255
	for (int j = 0; j < Height; j++) {
		for (int i = 0; i < Width; i++) {
			if (pIn[j * Width + i] == 255) {
				pIn[j * Width + i] = Param05;
			}
		}
	}


	// Differential Mean Filtering First Stage
	// Initialize firstRowSum
	int firstRowSum = 0;

	// Move kernel downwards
	for (int j = nHalf; j < Height - nHalf; j++) {

		// Initialize temp sum and firstColumnSum
		int tempSumForCols = 0;
		int tempSumForRows = 0;
		int firstColumnSum = 0;

		// Accumulate initial kernel sum to tempSum
		if (j == nHalf) {
			for (int kj = -nHalf; kj <= nHalf; kj++) {
				for (int ki = 0; ki < kernelSize; ki++) {

					tempSumForCols += pIn[(j + kj) * Width + ki];
					tempSumForRows += pIn[(j + kj) * Width + ki];

					// Initialize firstColumnSum
					if (ki == 0) {
						firstColumnSum += pIn[(j + kj) * Width];
					}

					// Initialize firstRowSum
					if (kj == -nHalf) {
						firstRowSum += pIn[ki];
					}
				}
			}
		}
		else {
			// define newRowSum
			int newRowSum = 0;

			for (int ki = -nHalf; ki <= nHalf; ki++) {

				newRowSum += pIn[(j + nHalf) * Width + (ki)];

			}

			// update tempSumForRows
			tempSumForRows = tempSumForRows - firstRowSum + newRowSum;

			// update firstRowSum

			firstRowSum = 0;

			for (int ki = -nHalf; ki <= nHalf; ki++) {

				firstRowSum += pIn[(j - nHalf) * Width + (ki)];

			}

			// Set tempSumForCols as the updated tempSumForRows
			tempSumForCols = tempSumForRows;

		}

		// Input the first iteration result
		int tempMean = floor(tempSumForRows / total);
		if (pIn[j * Width] - tempMean > Param02) {

			if ((pIn[j * Width] - 255) > 0){
				pOut[j * Width] = pIn[j * Width] - 255;
			}
			else {
				pOut[j * Width] = 0;
			}
			
		}
		else {
			pOut[j * Width] = pIn[j * Width];
		}

		// Move kernel sideways, start at index 1, not 0
		for (int i = nHalf + 1; i < Width - nHalf; i++) {

			// define new column sum
			int newColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				newColumnSum += pIn[(j + kj) * Width + (i + nHalf)];

			}

			// update tempSum by subtracting the firstColumnSum of the previous iteration and adding the newColumnSum introduced
			tempSumForCols = tempSumForCols - firstColumnSum + newColumnSum;

			// update firstColumnSum
			firstColumnSum = 0;

			for (int kj = -nHalf; kj <= nHalf; kj++) {

				firstColumnSum += pIn[(j + kj) * Width + (i - nHalf)];

			}

			// store result
			int tempMean = floor(tempSumForCols / total);
			if (pIn[j * Width + i] - tempMean > Param02) {
				if (pIn[j * Width + i] - tempMean > 0) { 
					pOut[j * Width + i] = pIn[j * Width + i] - 255;
				}
				else {
					pOut[j * Width + i] = 0;
				}
			}
			else {
				pOut[j * Width + i] = pIn[j * Width + i];
			}

		}
	}

	// Differential Mean Filtering Second Stage
	// Reinitialize!
	int kernelSize2 = 0;

	if (Param03 < 3) {
		kernelSize2 = 3;
	}
	else if (Param03 <= 151) {
		kernelSize2 = Param03;
	}
	else {
		kernelSize2 = 151;
	}

	const int nHalf2 = floor(kernelSize2 / 2);
	const int total2 = kernelSize2 * kernelSize2;

	// Initialize firstRowSum
	int firstRowSum2 = 0;

	// Move kernel downwards
	for (int j = nHalf2; j < Height - nHalf2; j++) {

		// Initialize temp sum and firstColumnSum
		int tempSumForCols2 = 0;
		int tempSumForRows2 = 0;
		int firstColumnSum2 = 0;

		// Accumulate initial kernel sum to tempSum
		if (j == nHalf2) {
			for (int kj = -nHalf2; kj <= nHalf2; kj++) {
				for (int ki = 0; ki < kernelSize2; ki++) {

					tempSumForCols2 += pIn[(j + kj) * Width + ki];
					tempSumForRows2 += pIn[(j + kj) * Width + ki];

					// Initialize firstColumnSum
					if (ki == 0) {
						firstColumnSum2 += pIn[(j + kj) * Width];
					}

					// Initialize firstRowSum
					if (kj == -nHalf2) {
						firstRowSum2 += pIn[ki];
					}
				}
			}
		}
		else {
			// define newRowSum
			int newRowSum2 = 0;

			for (int ki = -nHalf2; ki <= nHalf2; ki++) {

				newRowSum2 += pIn[(j + nHalf2) * Width + (ki)];

			}

			// update tempSumForRows
			tempSumForRows2 = tempSumForRows2 - firstRowSum2 + newRowSum2;

			// update firstRowSum

			firstRowSum2 = 0;

			for (int ki = -nHalf2; ki <= nHalf2; ki++) {

				firstRowSum2 += pIn[(j - nHalf2) * Width + (ki)];

			}

			// Set tempSumForCols as the updated tempSumForRows
			tempSumForCols2 = tempSumForRows2;

		}

		// Input the first iteration result
		int tempMean = floor(tempSumForRows2 / total2);
		if (pIn[j * Width] - tempMean > Param04) {
			pOut[j * Width] = 255;
		}
		else {
			pOut[j * Width] = pIn[j * Width];
		}

		// Move kernel sideways, start at index 1, not 0
		for (int i = nHalf2 + 1; i < Width - nHalf2; i++) {

			// define new column sum
			int newColumnSum2 = 0;

			for (int kj = -nHalf2; kj <= nHalf2; kj++) {

				newColumnSum2 += pIn[(j + kj) * Width + (i + nHalf2)];

			}

			// update tempSum by subtracting the firstColumnSum of the previous iteration and adding the newColumnSum introduced
			tempSumForCols2 = tempSumForCols2 - firstColumnSum2 + newColumnSum2;

			// update firstColumnSum
			firstColumnSum2 = 0;

			for (int kj = -nHalf2; kj <= nHalf2; kj++) {

				firstColumnSum2 += pIn[(j + kj) * Width + (i - nHalf2)];

			}

			// store result
			int tempMean = floor(tempSumForCols2 / total2);
			if (pIn[j * Width + i] - tempMean > Param04) {
				pOut[j * Width + i] = 255;
			}
			else {
				pOut[j * Width + i] = pIn[j * Width + i];
			}

		}
	}
	// Algorithm end

	delete[] pIn;

	return TRUE;
}