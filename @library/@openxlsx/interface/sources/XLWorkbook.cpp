//
// Created by Troldal on 2019-01-16.
//

#include <XLWorkbook.h>
#include <XLWorkbook_Impl.h>

using namespace OpenXLSX;

XLWorkbook::XLWorkbook(Impl::XLWorkbook& workbook)
        : m_workbook(&workbook) {
}

void XLWorkbook::DeleteSheet(const std::string& sheetName) {

    m_workbook->DeleteSheet(sheetName);
}

void XLWorkbook::AddWorksheet(const std::string& sheetName,
                              unsigned int index)  {

    m_workbook->AddWorksheet(sheetName, index);
}

void XLWorkbook::CloneWorksheet(const std::string& extName,
                                const std::string& newName,
                                unsigned int index) {

    m_workbook->CloneWorksheet(extName, newName, index);
}

void XLWorkbook::AddChartsheet(const std::string& sheetName,
                               unsigned int index) {

    m_workbook->AddChartsheet(sheetName, index);
}

void XLWorkbook::MoveSheet(const std::string& sheetName, unsigned int index) {

    m_workbook->MoveSheet(sheetName, index);
}

unsigned int XLWorkbook::IndexOfSheet(const std::string& sheetName) {

    return m_workbook->IndexOfSheet(sheetName);
}

unsigned int XLWorkbook::SheetCount() const {

    return m_workbook->SheetCount();
}

unsigned int XLWorkbook::WorksheetCount() const {

    return m_workbook->WorksheetCount();
}

unsigned int XLWorkbook::ChartsheetCount() const {

    return m_workbook->ChartsheetCount();
}

bool XLWorkbook::SheetExists(const std::string& sheetName) const {

    return m_workbook->SheetExists(sheetName);
}

bool XLWorkbook::WorksheetExists(const std::string& sheetName) const {

    return m_workbook->WorksheetExists(sheetName);
}

bool XLWorkbook::ChartsheetExists(const std::string& sheetName) const {

    return m_workbook->ChartsheetExists(sheetName);
}

void XLWorkbook::DeleteNamedRanges() {

    m_workbook->DeleteNamedRanges();
}