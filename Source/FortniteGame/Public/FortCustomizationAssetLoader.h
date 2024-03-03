#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCustomizationAssetsToLoad.h"
#include "FortCustomizationAssetLoader.generated.h"

UCLASS(Blueprintable)
class UFortCustomizationAssetLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCustomizationAssetsToLoad CurrentAssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCustomizationAssetsToLoad PendingAssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AllLoadedAssets;
    
public:
    UFortCustomizationAssetLoader();
};

