#include <iostream>
using namespace std;

// Enum to represent status codes
enum StatusCode
{
    Success = 200,
    NotFound = 404,
    ServiceUnavailable = 503
};

// Function to get status message based on status code
string getStatusMessage(int code)
{
    switch (code)
    {
    case StatusCode::Success:
        return "Success";
    case StatusCode::NotFound:
        return "Not Found";
    case StatusCode::ServiceUnavailable:
        return "Service Unavailable";
    default:
        return "Unknown Status";
    }
}

int main()
{
    // Example usage
    StatusCode code1 = StatusCode::Success;
    StatusCode code2 = StatusCode::NotFound;
    StatusCode code3 = StatusCode::ServiceUnavailable;

    // Print status messages
    // cout << "Status code " << static_cast<int>(code1) << ": " << getStatusMessage(code1) << endl;
    // cout << "Status code " << static_cast<int>(code2) << ": " << getStatusMessage(code2) << endl;
    // cout << "Status code " << static_cast<int>(code3) << ": " << getStatusMessage(code3) << endl;
    
    cout << getStatusMessage(200);

    return 0;
}
