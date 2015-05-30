
// UsbHidDemoDlg.h : ͷ�ļ�
//

#pragma once


// CUsbHidDemoDlg �Ի���
class CUsbHidDemoDlg : public CDialogEx
{
// ����
public:
	CUsbHidDemoDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_USBHIDDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

    USBHANDLE handle;

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedWriteByte();
    afx_msg void OnBnClickedReFresh();
    CEdit m_wndWriteEdit;
    CButton m_wndReport;
    CStatic m_wndDeviceName;
    CStatic m_wndRead;
    afx_msg void OnBnClickedGetCaps();
    afx_msg void OnBnClickedOpen();
    afx_msg void OnBnClickedSetReport();
    afx_msg void OnBnClickedSetFeature();
};