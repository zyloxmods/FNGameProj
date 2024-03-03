#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortColorPalette.h"
#include "FortItemSeriesDefinition.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemSeriesDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortColorPalette Colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ItemCardMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BackgroundMaterial;
    
    UFortItemSeriesDefinition();
};

