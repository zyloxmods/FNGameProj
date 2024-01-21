#pragma once
#include "CoreMinimal.h"
#include "McpPrivacySettings.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMcpPrivacySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OptOutOfPublicLeaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OptOutOfFriendsLeaderboards;
    
    FMcpPrivacySettings();
};

