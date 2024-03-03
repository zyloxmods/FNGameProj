#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortMapMarkerTopperActor.generated.h"

class UAthenaMapMarkerItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortMapMarkerTopperActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
    AFortMapMarkerTopperActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLiveMapMarker(const UAthenaMapMarkerItemDefinition* Marker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewMapMarker(const UAthenaMapMarkerItemDefinition* Marker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerMoved();
    
    
    // Fix for true pure virtual functions not being implemented
};

