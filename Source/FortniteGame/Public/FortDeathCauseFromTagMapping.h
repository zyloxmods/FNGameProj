#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTagToDeathCause.h"
#include "FortDeathCauseFromTagMapping.generated.h"

UCLASS(Blueprintable)
class UFortDeathCauseFromTagMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTagToDeathCause> TagToDeathCauseArray;
    
public:
    UFortDeathCauseFromTagMapping();
};

