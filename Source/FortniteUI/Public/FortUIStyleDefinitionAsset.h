#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortUIStyleDefinition.h"
#include "FortUIStyleDefinitionAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortUIStyleDefinitionAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUIStyleDefinition StyleDefinition;
    
    UFortUIStyleDefinitionAsset();
};

