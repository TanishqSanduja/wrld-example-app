// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#include <string>
#include <vector>
#include "GeoNamesSearchResultDto.h"
#include "SearchResultModel.h"
#include "SearchVendorNames.h"
#include "TimeHelpers.h"

namespace ExampleApp
{
    namespace Search
    {
        namespace GeoNames
        {
            namespace SdkModel
            {
                GeoNamesSearchResultDto::GeoNamesSearchResultDto(const std::string& id,
                                                                 const std::string& name,
                                                                 const std::string& country,
                                                                 const Eegeo::Space::LatLong& location,
                                                                 int population)
                : m_id(id)
                , m_name(name)
                , m_country(country)
                , m_location(location)
                , m_population(population)
                {
                    
                }
                
                Search::SdkModel::SearchResultModel GeoNamesSearchResultDto::ToSearchResultModel() const
                {
                    std::map<std::string, std::string> extendedMetaData;
                    
                    Search::SdkModel::SearchResultModel model(Search::SdkModel::SearchResultModel::CurrentVersion,
                                                              m_id,
                                                              m_name,
                                                              Eegeo::Space::LatLong::FromDegrees(m_location.GetLatitudeInDegrees(),
                                                                                                 m_location.GetLongitudeInDegrees()),
                                                              0,
                                                              false,
                                                              Eegeo::Resources::Interiors::InteriorId(""),
                                                              0,
                                                              "",
                                                              m_country,
                                                              "",
                                                              "",
                                                              std::vector<std::string>(),
                                                              "",
                                                              GeoNamesVendorName,
                                                              "",
                                                              "",
                                                              std::vector<std::string>(),
                                                              0,
                                                              Eegeo::Helpers::Time::MillisecondsSinceEpoch(),
                                                              extendedMetaData);
                    
                    return model;
                }
            }
        }
    }
}
