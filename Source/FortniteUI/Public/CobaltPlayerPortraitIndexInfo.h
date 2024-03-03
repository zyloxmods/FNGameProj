#pragma once
#include "CoreMinimal.h"
#include "CobaltPlayerPortraitIndexInfo.generated.h"

USTRUCT(BlueprintType)
struct FCobaltPlayerPortraitIndexInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PortraitIndexArray;
    
    FORTNITEUI_API FCobaltPlayerPortraitIndexInfo();
};

