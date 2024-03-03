#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortSprayPreviewActor.generated.h"

class UAthenaSprayItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortSprayPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
    AFortSprayPreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewSpray(const UAthenaSprayItemDefinition* Spray);
    
    
    // Fix for true pure virtual functions not being implemented
};

