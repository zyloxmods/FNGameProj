#pragma once
#include "CoreMinimal.h"
#include "FortWorldItem.h"
#include "FortPlaysetWorldItem.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class UFortPlaysetWorldItem : public UFortWorldItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* PlaysetToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVolumeToSpawn;
    
public:
    UFortPlaysetWorldItem();
};

