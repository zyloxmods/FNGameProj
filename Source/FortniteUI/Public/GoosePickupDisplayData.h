#pragma once
#include "CoreMinimal.h"
#include "GoosePickupDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FGoosePickupDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    FORTNITEUI_API FGoosePickupDisplayData();
};

