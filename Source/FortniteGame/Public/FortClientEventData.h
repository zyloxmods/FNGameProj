#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortClientEventName.h"
#include "FortClientEventData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortClientEventData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortClientEventName> ClientEventNames;
    
    UFortClientEventData();
};

