#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Layout/Margin.h"
#include "FortMiniMapInterface.h"
#include "MapLocationRenderData.h"
#include "FortFrontEndMiniMapManager.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortFrontEndMiniMapManager : public AActor, public IFortMiniMapInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapLayerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MapMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapWorldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CaptureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMapLocationRenderData> MinimapLocationRenderData;
    
public:
    AFortFrontEndMiniMapManager();
    
    // Fix for true pure virtual functions not being implemented
};

