#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "ExpeditionTabInfo.generated.h"

USTRUCT(BlueprintType)
struct FExpeditionTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabLabelInfo;
    
    FORTNITEUI_API FExpeditionTabInfo();
};

