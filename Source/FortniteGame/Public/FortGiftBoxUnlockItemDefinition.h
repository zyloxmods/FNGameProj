#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAccountItemDefinition.h"
#include "FortGiftBoxUnlockItemDefinition.generated.h"

class UFortGiftBoxItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UFortGiftBoxUnlockItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortGiftBoxItemDefinition> UnlockedGiftBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CreationDate;
    
public:
    UFortGiftBoxUnlockItemDefinition(const FObjectInitializer& ObjectInitializer);
};

