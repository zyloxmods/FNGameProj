#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FactionData.h"
#include "FortFactionMapping.generated.h"

UCLASS(Blueprintable)
class UFortFactionMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionData> FactionDataArray;
    
public:
    UFortFactionMapping();
};

