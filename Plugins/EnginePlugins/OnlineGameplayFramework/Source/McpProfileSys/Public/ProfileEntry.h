#pragma once
#include "CoreMinimal.h"
#include "ProfileEntry.generated.h"

class UMcpProfile;

USTRUCT(BlueprintType)
struct FProfileEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcpProfile* ProfileObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingForRefreshAllProfilesResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForwardUpdatesToClient;
    
    MCPPROFILESYS_API FProfileEntry();
};

