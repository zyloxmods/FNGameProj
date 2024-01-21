#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortColorPalette.h"
#include "FortItemSeriesDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemSeriesDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortColorPalette Colors;
    
    UFortItemSeriesDefinition();
};

