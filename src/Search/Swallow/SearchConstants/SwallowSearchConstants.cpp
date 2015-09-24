// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#include "SwallowSearchConstants.h"

namespace ExampleApp
{
    namespace Search
    {
        namespace Swallow
        {
            namespace SearchConstants
            {
                const std::string JOB_TITLE_FIELD_NAME = "jobTitle";
                const std::string WORKING_GROUP_FIELD_NAME = "workingGroup";
                const std::string OFFICE_LOCATION_FIELD_NAME = "officeLocation";
                const std::string DESK_CODE_FIELD_NAME = "deskCode";
                
                std::vector<CategorySearch::View::CategorySearchModel> GetCategorySearchModels()
                {
                    std::vector<ExampleApp::CategorySearch::View::CategorySearchModel> categories;
                    categories.push_back(ExampleApp::CategorySearch::View::CategorySearchModel("Meeting Rooms", "meeting_room", "meeting_room"));
                    categories.push_back(ExampleApp::CategorySearch::View::CategorySearchModel("Working Groups", "working_group", "working_group"));
                    categories.push_back(ExampleApp::CategorySearch::View::CategorySearchModel("Facilities", "facility", "facility"));
                    categories.push_back(ExampleApp::CategorySearch::View::CategorySearchModel("Offices", "office", "office"));
                    return categories;
                }
                
                std::vector<std::string> GetCategories()
                {
                    std::vector<std::string> categories;
                    categories.push_back("meeting_room");
                    categories.push_back("working_group");
                    categories.push_back("facility");
                    categories.push_back("office");
                    return categories;
                }
            }
        }
    }
}