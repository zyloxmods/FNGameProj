#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortSkyDiveContrailPreviewActor.generated.h"

class UAthenaSkyDiveContrailItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortSkyDiveContrailPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
    AFortSkyDiveContrailPreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewContrail(const UAthenaSkyDiveContrailItemDefinition* Contrail);
    
    
    // Fix for true pure virtual functions not being implemented
};

