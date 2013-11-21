// ForStudents.cpp : Implementation of CForStudents
#include "stdafx.h"
#include "ATLTest2013.h"
#include "ForStudents.h"
#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////
// CForStudents


STDMETHODIMP CForStudents::Test2013()
{
	// TODO: Add your implementation code here
	char str[80];
	sprintf(str,"Hi, students! V square is equal to %g", V*V);
	MessageBox(NULL, str, "Test2013", MB_OK);
	return S_OK;
}

STDMETHODIMP CForStudents::get_Val(double *pVal)
{
	// TODO: Add your implementation code here
	*pVal=V;
	return S_OK;
}

STDMETHODIMP CForStudents::put_Val(double newVal)
{
	// TODO: Add your implementation code here
	V=newVal;
	return S_OK;
}
