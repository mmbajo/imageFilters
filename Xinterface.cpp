// Xinterface.cpp�F�C���^�[�t�F�[�X�p�֐��Q���L�q����B

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


// �W���ٕ����o����
int CXimaglib2::XrayFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	if(!algocheck)
	{
		offsetcheck = (pImgparam->Img1 == NULL);
	}

	switch (nAlgoNo)
	{
	case 0: // �e�X�g�p
		ret = m_xrayfilter->ParamConvFilterTEST(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 1: // �e�X�g�p�Q
		ret = m_xrayfilter->ParamConvFilterTEST_2(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 2: // �e�X�g�p�R
		ret = m_xrayfilter->ParamConvFilterTEST_3(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 3: // �e�X�g�p�S
		ret = m_xrayfilter->ParamConvFilterTEST_4(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 4: // �e�X�g�p�T
		ret = m_xrayfilter->ParamConvFilterTEST_5(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 5: // �e�X�g�p�U
		ret = m_xrayfilter->ParamConvFilterTEST_6(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 6: // �e�X�g�p�V
		ret = m_xrayfilter->ParamConvFilterTEST_7(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 7: // �e�X�g�p�W
		ret = m_xrayfilter->ParamConvFilterTEST_8(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 8: // �e�X�g�p�X
		ret = m_xrayfilter->ParamConvFilterTEST_9(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 9: // �e�X�g�p�P�O
		ret = m_xrayfilter->ParamConvFilterTEST_10(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 10: // �e�X�g�p�P�P
		ret = m_xrayfilter->ParamConvFilterTEST_11(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 11: // �e�X�g�p�P�Q
		ret = m_xrayfilter->ParamConvFilterTEST_12(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 12: // �e�X�g�p�P�R
		ret = m_xrayfilter->ParamConvFilterTEST_13(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 13: // �e�X�g�p�P�S
		ret = m_xrayfilter->ParamConvFilterTEST_14(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 14: // �e�X�g�p�P�T
		ret = m_xrayfilter->ParamConvFilterTEST_15(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 15: // �e�X�g�p�P�U
		ret = m_xrayfilter->ParamConvFilterTEST_16(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 16: // �e�X�g�p�P�V
		ret = m_xrayfilter->ParamConvFilterTEST_17(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 17: // �e�X�g�p�P�W
		ret = m_xrayfilter->ParamConvFilterTEST_18(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 18: // �e�X�g�p19
		ret = m_xrayfilter->ParamConvFilterTEST_19(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 19: // �e�X�g�p20
		ret = m_xrayfilter->ParamConvFilterTEST_20(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	case 20: // �e�X�g�p21
		ret = m_xrayfilter->ParamConvFilterTEST_21(algocheck, offsetcheck, pImgparam, pAlgoparam, pOutparam);
		break;

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �g���ٕ����o����
int CXimaglib2::XrayExFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// ���߉摜����������
int CXimaglib2::XrayFlatImg(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �ٕ��ʐϔ䏈��
int CXimaglib2::XrayReconstructNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �ٕ��c������
int CXimaglib2::XrayExpandNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �G�b�W�}�X�N����
int CXimaglib2::XrayEdgeMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �N���b�v�}�X�N����
int CXimaglib2::XrayClipMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O
	int nFilterNo = 0; // ximaglib2���A���S���Y���ԍ�

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
	
	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �ʃ}�X�N����
int CXimaglib2::XrayCanMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	int nFilterNo = 0; // ximaglib2���A���S���Y���ԍ�
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �E�_�f�܃}�X�N����
int CXimaglib2::XrayDeoxMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y

	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �r�}�X�N����
int CXimaglib2::XrayBottleMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �g���}�X�N����
int CXimaglib2::XrayExMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// ���������
int CXimaglib2::XrayPackageCheck(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �����摜���x�����O����
int CXimaglib2::XrayBlockLabelling(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �������x�����O��������
int CXimaglib2::XrayLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �������x�����O�p���̈�m�ۏ���
int CXimaglib2::XrayLabellingInfoMake(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = 1;

	return ret;
}

// �������x�����O�p���x�����O���̈�폜����
void CXimaglib2::XrayLabellingInfoDelete()
{

}

// �������x�����O���ʐF�t������
int CXimaglib2::XrayLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �t���[��������p�v���b�g�t�H�[���p�C���^�[�t�F�[�X�֐�

// �t���[��������p�W���ٕ����o����
int CXimaglib2::XrayFrameFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �t���[��������p�g���ٕ����o����
int CXimaglib2::XrayFrameExFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �t���[��������p���߉摜����������
int CXimaglib2::XrayFrameFlatImg(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �ٕ��ʐϔ䏈��
int CXimaglib2::XrayFrameReconstructNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �ٕ��c����������
int CXimaglib2::XrayFrameExpandNG(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �G�b�W�}�X�N����
int CXimaglib2::XrayFrameEdgeMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �N���b�v�}�X�N����
int CXimaglib2::XrayFrameClipMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O
	int nFilterNo = 0; // ximaglib2���A���S���Y���ԍ�

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �ʃ}�X�N����
int CXimaglib2::XrayFrameCanMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	int nFilterNo = 0; // ximaglib2���A���S���Y���ԍ�
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �E�_�f�܃}�X�N����
int CXimaglib2::XrayFrameDeoxMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y

	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �r�}�X�N����
int CXimaglib2::XrayFrameBottleMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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
	
	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;

}

// �g���}�X�N����
int CXimaglib2::XrayFrameExMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	int offsetsize = -1; // �̂肵��T�C�Y
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;


}

// ���i�A�`�󌟍�����
int CXimaglib2::XrayFrameLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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
	
	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// ���i�A�`�󌟍����ʐF�t������
int CXimaglib2::XrayFrameLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1; // return�l
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O

	algocheck = (pImgparam == NULL && pAlgoparam == NULL && pOutparam == NULL);

	switch (nAlgoNo)
	{
	case 0:
		ret = -2;
		break;

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// �t���[���摜���x�����O����
int CXimaglib2::XrayFrameLabelling(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}

// ���������
int CXimaglib2::XrayFramePackageCheck(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	return 0;
}


// �Œ�}�X�N��]����
int CXimaglib2::XrayFrameMaskRotate(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	return 0;
}

// �q�X�g�O�����C�R���C�[�[�V��������
int CXimaglib2::XrayFrameHistEQ(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;
	int offsetsize = -1;
	BOOL algocheck; // �A���S���Y���L���`�F�b�N�t���O
	BOOL offsetcheck;// �̂肵��T�C�Y�`�F�b�N�t���O

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

	default: // �͈͊O�̃A���S���Y���ԍ��̏ꍇ�A-2��Ԃ��B
		ret = -2;
		break;
	}
	
	if(!algocheck && !offsetcheck && ret > 0)
	{
		ret = 0;
	}

	return ret;
}


//=== �����@�p���� ===//

// �ėp�ٕ����o����
int CXimaglib2::XrayVersatileFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�}�X�N����
int CXimaglib2::XrayVersatileMask(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�}�X�N�������x�����O��������
int CXimaglib2::XrayVersatileMaskLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�}�X�N�������x�����O�p���̈�m�ۏ���
int CXimaglib2::XrayVersatileMaskLabellingInfoMake(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�}�X�N�������x�����O�p���x�����O���̈�폜����
int CXimaglib2::XrayVersatileMaskLabellingInfoDelete(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�}�X�N�������x�����O���ʐF�t������
int CXimaglib2::XrayVersatileMaskLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�������x�����O��������
int CXimaglib2::XrayVersatileLabellingFilter(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�������x�����O�p���̈�m�ۏ���
int CXimaglib2::XrayVersatileLabellingInfoMake(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�������x�����O�p���x�����O���̈�폜����
int CXimaglib2::XrayVersatileLabellingInfoDelete(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

// �ėp�������x�����O���ʐF�t������
int CXimaglib2::XrayVersatileLabellingPaint(int nAlgoNo, IMGPARAM* pImgparam, ALGOPARAM* pAlgoparam, OUTPARAM* pOutparam)
{
	int ret = -1;


	return ret;
}

