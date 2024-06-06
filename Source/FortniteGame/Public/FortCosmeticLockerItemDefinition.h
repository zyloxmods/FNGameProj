#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticLockerSlotInformation.h"
#include "FortProfileItemDefinition.h"
#include "FortCosmeticLockerItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortCosmeticLockerItemDefinition : public UFortProfileItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticLockerSlotInformation> LockerSlots;
    
public:
    UFortCosmeticLockerItemDefinition(const FObjectInitializer& ObjectInitializer);
};

