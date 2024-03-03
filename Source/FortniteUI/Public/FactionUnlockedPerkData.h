#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FactionUnlockedPerkData.generated.h"

class UFortItem;

UCLASS(Blueprintable)
class UFactionUnlockedPerkData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* PerkItem;
    
    UFactionUnlockedPerkData();
};

