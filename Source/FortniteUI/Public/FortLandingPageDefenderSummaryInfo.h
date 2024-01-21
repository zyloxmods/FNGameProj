#pragma once
#include "CoreMinimal.h"
#include "FortLandingPageDefenderSummaryInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortLandingPageDefenderSummaryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TheaterDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TheaterUniqueId;
    
    FORTNITEUI_API FFortLandingPageDefenderSummaryInfo();
};

