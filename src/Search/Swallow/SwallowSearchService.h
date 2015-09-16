// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include <vector>
#include <string>
#include "Search.h"
#include "SearchServiceBase.h"
#include "LatLongAltitude.h"
#include "InteriorId.h"

namespace ExampleApp
{
    namespace Search
    {
        namespace Swallow
        {
            class SwallowSearchService : public SdkModel::SearchServiceBase, private Eegeo::NonCopyable
            {
            public:
                SwallowSearchService();
                
                void CancelInFlightQueries();
                
                void PerformLocationQuerySearch(const SdkModel::SearchQuery& query);
                
                void PerformIdentitySearch(const std::string& searchResultIdentifier,
                                           Eegeo::Helpers::ICallback1<const SdkModel::IdentitySearchCallbackData&>& callback);
            private:
                struct PersonDetails
                {
                    std::string m_name;
                    Eegeo::Space::LatLong m_location;
                    Eegeo::Resources::Interiors::InteriorId m_interiorId;
                    int m_floor;
                    std::string m_jobTitle;
                    std::string m_workingGroup;
                    std::string m_officeLocation;
                    std::string m_deskCode;
                    
                    PersonDetails(const std::string& name,
                                  const Eegeo::Space::LatLong& location,
                                  Eegeo::Resources::Interiors::InteriorId interiorId,
                                  int floor,
                                  const std::string& jobTitle,
                                  const std::string& workingGroup,
                                  const std::string& officeLocation,
                                  const std::string& deskCode)
                    : m_name(name)
                    , m_location(location)
                    , m_interiorId(interiorId)
                    , m_floor(floor)
                    , m_jobTitle(jobTitle)
                    , m_workingGroup(workingGroup)
                    , m_officeLocation(officeLocation)
                    , m_deskCode(deskCode)
                    {
                        
                    }
                };
                
                void PerformTextSearch(const SdkModel::SearchQuery& query);
                
                void PerformCategorySearch(const SdkModel::SearchQuery& query);
                
                std::vector<PersonDetails> m_people;
            };
        }
    }
}
