// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include "ISwallowPoiDbParser.h"

namespace ExampleApp
{
    namespace SwallowPoiDb
    {
        namespace Parsers
        {
            class SwallowPoiDbDepartmentParser : public ISwallowPoiDbParser
            {
            public:
                Search::SdkModel::SearchResultModel SQLiteResultRowToSearchResult(const Eegeo::SQLite::SQLiteResultRow& resultRow, const std::string& assetsBaseUrl, int columnOffset);
                
                Search::SdkModel::SearchResultModel SQLiteResultRowToSearchResult(const Eegeo::SQLite::SQLiteResultRow& resultRow, const std::string& assetsBaseUrl);
            };
        }
    }
}