#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortModalContainerSizeEntry.h"
#include "FortModalContainerData.generated.h"

UCLASS(Blueprintable)
class UFortModalContainerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortModalContainerSizeEntry> Entries;
    
    UFortModalContainerData();
};

