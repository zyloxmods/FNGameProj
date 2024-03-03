#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCreativeOptionsBundle.generated.h"

class UFortCreativeOption;

UCLASS(Blueprintable)
class UFortCreativeOptionsBundle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeOption*> CreativeOptions;
    
    UFortCreativeOptionsBundle();
};

