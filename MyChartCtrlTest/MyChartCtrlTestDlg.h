
// MyChartCtrlTestDlg.h : 头文件
//

#pragma once
#include "ChartCtrl/ChartCtrl.h"
#include "../MyChartCtrlTest/ChartCtrl/ChartCtrl.h"

// CMyChartCtrlTestDlg 对话框
class CMyChartCtrlTestDlg : public CDialogEx
{
// 构造
public:
	CMyChartCtrlTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MYCHARTCTRLTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//显示温度相关数据
	void	InitMain_Chart();
	void	drawMoving();
	double	m_HightSpeedChartArray[2096];
	double	m_X[2096];
	unsigned int m_count;
	const	size_t m_c_arrayLength;
	void	LeftMoveArray(double* ptr, size_t length, double data);
	void	RandArray(double* ptr, size_t length);
	void	AutoDraw();
	double	randf(double min, double max);
	CChartLineSerie* m_pLineSerie;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CChartCtrl m_Chart;
};
