#pragma once
#include "CoreMinimal.h"
#include "AthenaTeamCountSlotData.generated.h"

USTRUCT(BlueprintType)
struct FAthenaTeamCountSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeamNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeamCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMyTeam;
    
    FORTNITEUI_API FAthenaTeamCountSlotData();
};

