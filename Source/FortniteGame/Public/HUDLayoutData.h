#pragma once
#include "CoreMinimal.h"
#include "HUDLayoutDataEntry.h"
#include "HUDLayoutData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHUDLayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDLayoutDataEntry> LayoutEntries;
    
    FHUDLayoutData();
};

