#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortHUDTagPromptData.h"
#include "FortHUDTagPromptTagMapping.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHUDTagPromptTagMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortHUDTagPromptData> TagToPromptDataArray;
    
public:
    UFortHUDTagPromptTagMapping();
};

